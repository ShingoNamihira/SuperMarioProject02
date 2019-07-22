#pragma once
#include "SystemInitHeader.h"
#include "GameObjectHeader.h"

struct MoveState
{
	int OnBlock = 0;
	int	Jump = 1;
};

struct MoveValues{
	float fMoveSpeed = 0.01f;
	float fDushSpeed = 0.03f;
	float fJumpPower = 0.07f;
	float fGravityScale = 0.03f;
	float fJumpCount = 0.0f;
};

class PlayerClass : GameObject{
public:
	void SetupPlayer(SystemInit *systemInit, LoadImageMethod *loadImage, SceneManager *sceneManager);
	void DrawPlayer(SystemInit *systemInit, GameObject *gameObject);
	void PlayerMove(SystemInit *systemInit, GameObject *gameObject);
	void PlayerGravity(SystemInit *systemInit, GameObject *gameObject);
	void JumpPlayer(SystemInit *systemInit, GameObject *gameObject);

#pragma region Properties
	MoveValues GetMoveValues() {
		return this->tagMoveValues;
	}
	MoveState GetMoveState() {
		return this->tagMoveState;
	}
	int GetMoveStateFlg() {
		return this->MoveStateFlg;
	}
	void SetMoveStateFlg(int state) {
		this->MoveStateFlg = state;
	}
	float GetJumpCount() {
		return this->tagMoveValues.fJumpCount;
	}
	void SetJumpCount(float count) {
		this->tagMoveValues.fJumpCount = count;
	}
#pragma endregion


private:
	MoveValues tagMoveValues;
	MoveState tagMoveState;
	int MoveStateFlg;
};