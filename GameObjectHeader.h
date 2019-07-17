#pragma once
#include "SceneManagerHeader.h"
#include "LoadImageHeader.h"

using namespace std;
//オブジェクトの座標
struct Position
{
	float x;
	float y;
};
//オブジェクトの角度
struct Rotation
{
	float x;
	float y;
};
//オブジェクトの拡大率
struct Scale {
	float x;
	float y;
};
//元画像サイズ
struct Size {
	float Weight;
	float Height;
};
//オブジェクトサイズ
struct ObjectSize {
	float Weight;
	float Height;
};

//ゲームオブジェクトの基底クラス
class GameObject {
public:
	string * sName;		//オブジェクト名
	int *nObjectImage;	//オブジェクトの画像

	Position * tagPosition		= new Position();
	Rotation *tagRotation		= new Rotation();
	Scale *tagScale				= new Scale();
	Size *tagSize				= new Size();
	ObjectSize *tagObjectSize	= new ObjectSize();

	//オブジェクトの当たり判定
	void ObjectCollider(Scale scale, Size size);
	//オブジェクト生成
	GameObject CreateObject(Position *position, Rotation *rotation, 
		Scale *scale, Size *size, string *name, int *graph);

#pragma region Properties
	ObjectSize GetObjectSize() {
		Size size;
		Scale scale;
		float sizeX = size.Weight * scale.x;
		float sizeY = size.Height * scale.y;

	}
#pragma endregion

private:

};
