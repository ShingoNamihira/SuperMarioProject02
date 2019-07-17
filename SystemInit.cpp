#include "SystemInitHeader.h"

//ゲーム画面の初期化
int SystemInit::WindowInitMethod() {
	SetMainWindowText("SuperMario Imitation");	// タイトルを設定
	ChangeWindowMode(TRUE); // ウィンドウモードで起動
	if (DxLib_Init() == -1) return -1; // DX ライブラリの初期化処理
	SetDrawScreen(DX_SCREEN_BACK); // 描画先画面を裏にする

	return 0;
}