#include "LoadImageHeader.h"

int LoadImageMethod::LoadImages() {
	LoadImageMethod loadImage;
	//タイトル画像読み込み
	if (LoadGraph("Images/title_logo.png") == -1) return -1;
	else loadImage.nTitleImage = LoadGraph("Images/title_logo.png");
	//ブロック画像読み込み
	if (LoadGraph("Images/block_04.png") == -1) return -1;
	else loadImage.nTitleImage = LoadGraph("Images/block_04.png");
	//マリオ画像読み込み
	if (LoadGraph("Images/mario_idle.png") == -1) return -1;
	else loadImage.nTitleImage = LoadGraph("Images/block_04.png");
	//クリボー画像読み込み
	if (LoadGraph("Images/kuribo_01.png") == -1) return -1;
	else loadImage.nTitleImage = LoadGraph("Images/block_04.png");

	return 0;
}