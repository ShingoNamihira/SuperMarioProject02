#include "SystemInitHeader.h"

int SystemInit::SystemInitMethod() {
	SystemInit *systemInit = new SystemInit();

	SetMainWindowText("SuperMario Imitation");	// �^�C�g����ݒ�
	ChangeWindowMode(TRUE); // �E�B���h�E���[�h�ŋN��
	if (DxLib_Init() == -1) return -1; // DX ���C�u�����̏���������
	SetDrawScreen(DX_SCREEN_BACK); // �`����ʂ𗠂ɂ���

	return 0;
}