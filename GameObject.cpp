#include "GameObjectHeader.h"
#include "SceneManagerHeader.h"

//�I�u�W�F�N�g�̓����蔻��
inline void GameObject::ObjectCollider(Scale scale, Size size)
{
	
}


//�Q�[���I�u�W�F�N�g�̐���
GameObject GameObject::CreateObject(Position *position, Rotation *rotation,
	Scale *scale, string *name, int *graph, SceneManager *sceneManager)
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

	gameObject->nObjectImage = graph;

	string objectName = "mario";
	string originName = *name;
	if (originName == objectName) {
		sceneManager->objectList[0] = *gameObject;
	}

	return *gameObject;
}