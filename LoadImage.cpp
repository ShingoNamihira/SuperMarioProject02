#include "LoadImageHeader.h"

int LoadImageMethod::LoadImages() {
	LoadImageMethod loadImage;
	//�^�C�g���摜�ǂݍ���
	if (LoadGraph("Images/title_logo.png") == -1) return -1;
	else loadImage.nTitleImage = LoadGraph("Images/title_logo.png");
	//�u���b�N�摜�ǂݍ���
	if (LoadGraph("Images/block_04.png") == -1) return -1;
	else loadImage.nTitleImage = LoadGraph("Images/block_04.png");
	//�}���I�摜�ǂݍ���
	if (LoadGraph("Images/mario_idle.png") == -1) return -1;
	else loadImage.nTitleImage = LoadGraph("Images/block_04.png");
	//�N���{�[�摜�ǂݍ���
	if (LoadGraph("Images/kuribo_01.png") == -1) return -1;
	else loadImage.nTitleImage = LoadGraph("Images/block_04.png");

	return 0;
}