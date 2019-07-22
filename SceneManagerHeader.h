#pragma once
#include "SystemInitHeader.h"
#include "GameObjectHeader.h"
#include "DxLib.h"
#include "LoadImageHeader.h"

class SceneManager {
public:
	list<GameObject> *gameObjectList = new list<GameObject>();
	GameObject objectList[10];
	//void AddGameObject(SceneManager sceneManager, GameObject gameObject);

	void GameInit(SystemInit *systemInit, LoadImageMethod *loadImage);

	void DrawTitle(SystemInit *systemInit, LoadImageMethod *loadImage);
	void DrawGameMain(SystemInit *systemInit, LoadImageMethod *loadImage, SceneManager *sceneManager);
	void DrawGameClear(SystemInit *systemInit, LoadImageMethod *loadImage);
	void DrawGameOver(SystemInit *systemInit, LoadImageMethod *loadImage);

	void DrawMap(SystemInit *systemInit, LoadImageMethod *loadImage, SceneManager *sceneManager);

private:

};