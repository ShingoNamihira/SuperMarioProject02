#pragma once
#include "SystemInitHeader.h"

//オブジェクトの座標
struct Position
{
	float x;
	float y;
};
//オブジェクトの回転
struct Rotation
{
	float x;
	float z;
};
//オブジェクトのスケール
struct Scale
{
	float x; 
	float y;
};

//オブジェクトの位置関係のクラス
class Transform {
public:
	Position * tagPosition = new Position();
	Rotation * tagRotation = new Rotation();
	Scale *tagScale        = new Scale();

private:

};