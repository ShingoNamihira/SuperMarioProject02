#include "PlayerHeader.h"

//プレイヤーの初期化処理(現在未使用)
void PlayerClass::SetupPlayer(SystemInit *systemInit, LoadImageMethod *loadImage, SceneManager *sceneManager) {
	GameObject gameObject;
	for (int i = 0; i < systemInit->tagMapLenght.nLengthX; ++i) {
		for (int j = 0; j < systemInit->tagMapLenght.nLenghtY; j++) {
			if (systemInit->nMaptip[j][i] == 99) {
				Position position = { i * 32, j * 32 };
				Rotation rotation = { 0, 0 };
				Scale scale = { 1, 1 };
				Size size = { 32, 32 };
				string name = "mario";

				gameObject.CreateObject(&position, &rotation, &scale, &name, &loadImage->tagImages->nMarioImage, sceneManager);
			}
		}
	}
	SetJumpCount(0.0f);
}

//プレイヤーの描画(現在未使用)
void PlayerClass::DrawPlayer(SystemInit *systemInit, GameObject *gameObject) {
	PlayerMove(systemInit, gameObject);
	DrawGraph(gameObject->tagPosition->x, gameObject->tagPosition->y, *gameObject->nObjectImage, TRUE);
}

//プレイヤーの移動
void PlayerClass::PlayerMove(SystemInit *systemInit, GameObject *gameObject) {

	PlayerGravity(systemInit, gameObject);

	if (systemInit->GetNowKey() & PAD_INPUT_RIGHT) {
		gameObject->tagPosition->x += GetMoveValues().fMoveSpeed;
	}
	if (systemInit->GetNowKey() & PAD_INPUT_LEFT) {
		gameObject->tagPosition->x -= GetMoveValues().fMoveSpeed;
	}
	if (systemInit->GetNowKey() & PAD_INPUT_UP) {
		JumpPlayer(systemInit, gameObject);
	}

	DrawFormatString(40, 10, 0xffffff, "JumpCount = %d", GetJumpCount());
}

void PlayerClass::JumpPlayer(SystemInit *systemInit, GameObject *gameObject) {
	if (GetMoveStateFlg() == GetMoveState().OnBlock) {
		SetJumpCount(0.0f);
	}
	if (GetJumpCount() < 3.0f) {
		float jumpCount = GetJumpCount();
		SetJumpCount(jumpCount + 0.1f);
		gameObject->tagPosition->y -= GetMoveValues().fJumpPower;
	}
	SetMoveStateFlg(GetMoveState().Jump);

}

void PlayerClass::PlayerGravity(SystemInit *systemInit, GameObject *gameObject) {
	if (gameObject->tagPosition->y <= 480-64) {
		gameObject->tagPosition->y += GetMoveValues().fGravityScale;
		SetMoveStateFlg(GetMoveState().Jump);
	}
	else {
		SetMoveStateFlg(GetMoveState().OnBlock);
	}
	/*for (int i = 0; i < systemInit->tagMapLenght.nLengthX; ++i) {
		for (int j = 0; j < systemInit->tagMapLenght.nLenghtY; j++) {
			if (systemInit->nMaptip[j][i] == 1) {

			}
		}
	}*/
}