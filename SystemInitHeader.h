#pragma once
#include <stdio.h>
#include <iostream>
#include "DxLib.h"
#include <math.h>
#include <list>

#define _USE_MATH_DEFINES

struct Vector2
{
	float x;
	float y;
};

static class SystemInit {
public:
	int WindowInitMethod();
	Vector2 *tagVector2 = new Vector2;

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
	static int nOldKey;		// 前回の入力キー
	static int nNowKey;		// 今回の入力キー
	static int nKeyFlg;		// 入力キー情報
	static int nGameState; // ゲームモード
};