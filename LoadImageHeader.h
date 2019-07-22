#pragma once
#include "SystemInitHeader.h"

struct Images
{
	int nTitleImage;
	int nRengaImage;
	int nHatenaImage;
	int nMarioImage;
	int nKuriboImage;
};

class LoadImageMethod {
public:
	int LoadImages(LoadImageMethod *loadImage);

	Images *tagImages = new Images();
};