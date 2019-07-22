#include "SystemInitHeader.h"
#include "SceneManagerHeader.h"
#include "LoadImageHeader.h"
#include "PlayerHeader.h"

int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance,
	LPSTR lpCmdLine, int nCmdShow)
{
	SystemInit *systemInit = new SystemInit();
	systemInit->WindowInitMethod();		//�Q�[����ʂ̏�����
	SceneManager *sceneManager = new SceneManager();
	LoadImageMethod *loadImage = new LoadImageMethod();
	loadImage->LoadImages(loadImage);

	PlayerClass player;
	player.SetupPlayer(systemInit, loadImage, sceneManager);

	//�Q�[�����[�v
	while (ProcessMessage() == 0 && systemInit->GetGameState() != 99 &&
		!(systemInit->GetKeyFlg() & PAD_INPUT_START)) {
		// ���̓L�[�擾
		systemInit->SetOldkey(systemInit->GetNowKey());
		systemInit->SetNowKey(GetJoypadInputState(DX_INPUT_KEY_PAD1));
		systemInit->SetKeyFlg(systemInit->GetNowKey() & ~systemInit->GetOldKey());
		ClearDrawScreen(); // ��ʂ̏�����

		switch (systemInit->GetGameState()) {
		case 0:
			//�^�C�g��
			sceneManager->DrawTitle(systemInit, loadImage);
			break;
		case 1:
			//�Q�[��������
			sceneManager->GameInit(systemInit, loadImage);
			break;
		case 2:
			//�Q�[�����C��
			sceneManager->DrawGameMain(systemInit, loadImage, sceneManager);
			break;
		case 3:
			//�Q�[���N���A
			sceneManager->DrawGameClear(systemInit, loadImage);
			break;
		case 4:
			//�Q�[���I�[�o�[
			sceneManager->DrawGameOver(systemInit, loadImage);
			break;
		}
		DrawFormatString(500, 100, GetColor(255, 255, 255), "GameState : %d", systemInit->GetGameState());
		ScreenFlip(); // ����ʂ̓��e��\��ʂɔ��f
	}
	DxLib_End(); // DX ���C�u�����g�p�̏I������
	return 0;
}