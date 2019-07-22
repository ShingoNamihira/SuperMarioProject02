#include "SystemInitHeader.h"
#include "SceneManagerHeader.h"
#include "LoadImageHeader.h"
#include "PlayerHeader.h"

int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance,
	LPSTR lpCmdLine, int nCmdShow)
{
	SystemInit *systemInit = new SystemInit();
	systemInit->WindowInitMethod();		//ゲーム画面の初期化
	SceneManager *sceneManager = new SceneManager();
	LoadImageMethod *loadImage = new LoadImageMethod();
	loadImage->LoadImages(loadImage);

	PlayerClass player;
	player.SetupPlayer(systemInit, loadImage, sceneManager);

	//ゲームループ
	while (ProcessMessage() == 0 && systemInit->GetGameState() != 99 &&
		!(systemInit->GetKeyFlg() & PAD_INPUT_START)) {
		// 入力キー取得
		systemInit->SetOldkey(systemInit->GetNowKey());
		systemInit->SetNowKey(GetJoypadInputState(DX_INPUT_KEY_PAD1));
		systemInit->SetKeyFlg(systemInit->GetNowKey() & ~systemInit->GetOldKey());
		ClearDrawScreen(); // 画面の初期化

		switch (systemInit->GetGameState()) {
		case 0:
			//タイトル
			sceneManager->DrawTitle(systemInit, loadImage);
			break;
		case 1:
			//ゲーム初期化
			sceneManager->GameInit(systemInit, loadImage);
			break;
		case 2:
			//ゲームメイン
			sceneManager->DrawGameMain(systemInit, loadImage, sceneManager);
			break;
		case 3:
			//ゲームクリア
			sceneManager->DrawGameClear(systemInit, loadImage);
			break;
		case 4:
			//ゲームオーバー
			sceneManager->DrawGameOver(systemInit, loadImage);
			break;
		}
		DrawFormatString(500, 100, GetColor(255, 255, 255), "GameState : %d", systemInit->GetGameState());
		ScreenFlip(); // 裏画面の内容を表画面に反映
	}
	DxLib_End(); // DX ライブラリ使用の終了処理
	return 0;
}