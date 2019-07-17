#include "GameObjectHeader.h"

//�I�u�W�F�N�g�̓����蔻��
inline void GameObject::ObjectCollider(Scale scale, Size size)
{
	
}


//�Q�[���I�u�W�F�N�g�̐���
GameObject GameObject::CreateObject(Position *position, Rotation *rotation,
	Scale *scale, Size *size, string *name, int *graph)
{
	GameObject *gameObject = new GameObject();
	
	//�I�u�W�F�N�g���ݒ�
	gameObject->sName = name;
	//���W�̐ݒ�
	gameObject->tagPosition->x = position->x;
	gameObject->tagPosition->y = position->y;
	//�p�x�̐ݒ�
	gameObject->tagRotation->x = position->x;
	gameObject->tagRotation->y = position->y;
	//�g�嗦�̐ݒ�
	gameObject->tagScale->x = scale->x;
	gameObject->tagScale->y = scale->y;
	//�摜�T�C�Y�̐ݒ�
	gameObject->tagSize->Height = size->Height;
	gameObject->tagSize->Weight = size->Weight;

	static LoadImageMethod loadImage;
	gameObject->nObjectImage = graph;

	return *gameObject;
}