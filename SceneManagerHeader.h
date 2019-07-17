#pragma once
#include "SystemInitHeader.h"
#include "GameObjectHeader.h"
#include "DxLib.h"

static class SceneManager {
public:
	static list<GameObject> gameObjectList;
	void AddGameObject(SceneManager sceneManager, GameObject gameObject);

private:

};