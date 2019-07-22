#include "LoadImageHeader.h"

int LoadImageMethod::LoadImages(LoadImageMethod *loadImage) {
	//タイトル画像読み込み
	if (LoadGraph("Images/title_logo.png") == -1) return -1;
	else loadImage->tagImages->nTitleImage = LoadGraph("Images/title_logo.png");
	//レンガブロック画像読み込み
	if (LoadGraph("Images/block_04.png") == -1) return -1;
	else loadImage->tagImages->nRengaImage = LoadGraph("Images/block_04.png");
	//はてなブロック画像読み込み
	if (LoadGraph("Images/hatena_block.png") == -1) return -1;
	else loadImage->tagImages->nHatenaImage = LoadGraph("Images/hatena_block.png");
	//マリオ画像読み込み
	if (LoadGraph("Images/mario_idle.png") == -1) return -1;
	else loadImage->tagImages->nMarioImage = LoadGraph("Images/mario_idle.png");
	//クリボー画像読み込み
	if (LoadGraph("Images/kuribo_01.png") == -1) return -1;
	else loadImage->tagImages->nKuriboImage = LoadGraph("Images/kuribo_01.png");

	return 0;
}