#pragma once
#include "SystemInitHeader.h"

//�摜�p�N���X
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
	int nSprite;		//�摜�p�ϐ�

};