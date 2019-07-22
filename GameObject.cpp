#include "GameObjectHeader.h"
#include "SceneManagerHeader.h"

//オブジェクトの当たり判定
inline void GameObject::ObjectCollider(Scale scale, Size size)
{
	
}


//ゲームオブジェクトの生成
GameObject GameObject::CreateObject(Position *position, Rotation *rotation,
	Scale *scale, string *name, int *graph, SceneManager *sceneManager)
{
	GameObject *gameObject = new GameObject();
	
	//オブジェクト名設定
	gameObject->sName = name;
	//座標の設定
	gameObject->tagPosition->x = position->x;
	gameObject->tagPosition->y = position->y;
	//角度の設定
	gameObject->tagRotation->x = position->x;
	gameObject->tagRotation->y = position->y;
	//拡大率の設定
	gameObject->tagScale->x = scale->x;
	gameObject->tagScale->y = scale->y;

	gameObject->nObjectImage = graph;

	string objectName = "mario";
	string originName = *name;
	if (originName == objectName) {
		sceneManager->objectList[0] = *gameObject;
	}

	return *gameObject;
}