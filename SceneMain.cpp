#include "SceneManagerHeader.h"
#include "PlayerHeader.h"

void SceneManager::DrawGameMain(SystemInit *systemInit, LoadImageMethod *loadImage, SceneManager *sceneManager) {
	DrawMap(systemInit, loadImage, sceneManager);
}

void SceneManager::DrawMap(SystemInit *systemInit, LoadImageMethod *loadImage, SceneManager *sceneManager) {
	int colorR, colorG, colorB;
	//ステージ描画
	for (int i = 0; i < systemInit->tagMapLenght.nLengthX; ++i) {
		for (int j = 0; j < systemInit->tagMapLenght.nLenghtY; j++) {
			switch (systemInit->nMaptip[j][i])
			{
			case 0:		//背景
				colorR = 96; colorG = 197; colorB = 231;
				DrawBox(i * 32, j * 32, (i * 32) + 32, (j * 32) + 32,
					GetColor(colorR, colorG, colorB), true);
				break;
			case 1:		//レンガブロック
				DrawGraph(i * 32, j * 32, loadImage->tagImages->nRengaImage, TRUE);
				break;
			case 2:		//ハテナブロック
				DrawGraph(i * 32, j * 32, loadImage->tagImages->nHatenaImage, TRUE);
				break;
			case 3:		//
				colorR = 255; colorG = 10; colorB = 30;
				break;
			case 4:
				colorR = 255; colorG = 255; colorB = 0;
				break;
			case 99:
				colorR = 96; colorG = 197; colorB = 231;
				DrawBox(i * 32, j * 32, (i * 32) + 32, (j * 32) + 32,
					GetColor(colorR, colorG, colorB), true);
				break;
			default:
				break;
			}
			/*DrawBox(i * 32, j * 32,(i * 32) + 32, (j * 32) + 32,
				GetColor(colorR, colorG, colorB), true);*/
			PlayerClass player;
			/*for (int i = 0; i < sceneManager->gameObjectList->size(); i++) {
				GameObject *gameObject = sceneManager->gameObjectList->front;
				string name = "mario";
				if (*gameObject->sName == name) {
					player.DrawPlayer(systemInit, gameObject);
				}
			}*/
			player.DrawPlayer(systemInit, &sceneManager->objectList[0]);
		}
	}
}