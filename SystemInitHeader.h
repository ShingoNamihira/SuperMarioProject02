#pragma once
#include <stdio.h>
#include <iostream>
#include "DxLib.h"
#include <math.h>

#define _USE_MATH_DEFINES

class SystemInit {
public:
	int SystemInitMethod();

#pragma region Properties
	void SetOldkey(int iOldKey) {
		this->nOldKey = iOldKey;
	}
	int GetOldKey() {
		return this->nOldKey;
	}

	void SetNowKey(int iNowKey) {
		this->nNowKey = iNowKey;
	}
	int GetNowKey() {
		return this->nNowKey;
	}

	void SetKeyFlg(int iKeyFlg) {
		this->nKeyFlg = iKeyFlg;
	}
	int GetKeyFlg() {
		return this->nKeyFlg;
	}

	void SetGameState(int iGameState) {
		this->nGameState = iGameState;
	}
	int GetGameState() {
		return this->nGameState;
	}
#pragma endregion

private:
	int nOldKey;		// �O��̓��̓L�[
	int nNowKey;		// ����̓��̓L�[
	int nKeyFlg;		// ���̓L�[���
	int nGameState = 0; // �Q�[�����[�h
};