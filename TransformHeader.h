#pragma once
#include "SystemInitHeader.h"

//�I�u�W�F�N�g�̍��W
struct Position
{
	float x;
	float y;
};
//�I�u�W�F�N�g�̉�]
struct Rotation
{
	float x;
	float z;
};
//�I�u�W�F�N�g�̃X�P�[��
struct Scale
{
	float x; 
	float y;
};

//�I�u�W�F�N�g�̈ʒu�֌W�̃N���X
class Transform {
public:
	Position * tagPosition = new Position();
	Rotation * tagRotation = new Rotation();
	Scale *tagScale        = new Scale();

private:

};