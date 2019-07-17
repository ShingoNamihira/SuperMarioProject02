#include "SceneManagerHeader.h"

void SceneManager::AddGameObject( SceneManager sceneManager, GameObject gameObject) {
	sceneManager.gameObjectList.push_back(gameObject);
}