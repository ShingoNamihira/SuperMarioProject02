#include "GameObjectHeader.h"

//オブジェクトの当たり判定
inline void GameObject::ObjectCollider(Scale scale, Size size)
{
	
}


//ゲームオブジェクトの生成
GameObject GameObject::CreateObject(Position *position, Rotation *rotation,
	Scale *scale, Size *size, string *name, int *graph)
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
	//画像サイズの設定
	gameObject->tagSize->Height = size->Height;
	gameObject->tagSize->Weight = size->Weight;

	static LoadImageMethod loadImage;
	gameObject->nObjectImage = graph;

	return *gameObject;
}