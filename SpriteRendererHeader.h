#pragma once
#include "SystemInitHeader.h"

//画像用クラス
class SpriteRenderer {
public:
#pragma region Properties
	void SetSprite(int iSprite) {
		this->nSprite = iSprite;
	}
	int GetSprite() {
		return this->nSprite;
	}
#pragma endregion


private:
	int nSprite;		//画像用変数

};