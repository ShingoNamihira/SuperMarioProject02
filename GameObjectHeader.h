#pragma once
#include "LoadImageHeader.h"
class SceneManager;

using namespace std;
//�I�u�W�F�N�g�̍��W
struct Position
{
	float x;
	float y;
};
//�I�u�W�F�N�g�̊p�x
struct Rotation
{
	float x;
	float y;
};
//�I�u�W�F�N�g�̊g�嗦
struct Scale {
	float x;
	float y;
};
//���摜�T�C�Y
struct Size {
	float Weight;
	float Height;
};
//�I�u�W�F�N�g�T�C�Y
struct ObjectSize {
	float Weight;
	float Height;
};

//�Q�[���I�u�W�F�N�g�̊��N���X
class GameObject {
public:
	string * sName;		//�I�u�W�F�N�g��
	int *nObjectImage;	//�I�u�W�F�N�g�̉摜

	Position * tagPosition		= new Position();
	Rotation *tagRotation		= new Rotation();
	Scale *tagScale				= new Scale();
	Size *tagSize				= new Size();
	ObjectSize *tagObjectSize	= new ObjectSize();

	//�I�u�W�F�N�g�̓����蔻��
	void ObjectCollider(Scale scale, Size size);
	//�I�u�W�F�N�g����
	GameObject CreateObject(Position *position, Rotation *rotation,
		Scale *scale, string *name, int *graph, SceneManager *sceneManager);

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
