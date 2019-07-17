#include "SceneTitleHeader.h"

void SceneTitle::DrawTitle(){
	SystemInit systemInit;
	LoadImageMethod loadImage;
	static int MenuNo = 0;
	//���j���[�J�[�\���ړ�����
	if (systemInit.GetKeyFlg & PAD_INPUT_DOWN) {
		if (++MenuNo > 3) MenuNo = 0;
	}
	if (systemInit.GetKeyFlg() & PAD_INPUT_UP) {
		if (--MenuNo < 0) MenuNo = 3;
	}
	// �y�L�[�Ń��j���[�I��
	if (systemInit.GetKeyFlg() & PAD_INPUT_A) {
		systemInit.SetGameState(MenuNo + 1);
	}
	//�^�C�g���摜�\��
	DrawGraph(0, 0, loadImage.nTitleImage, FALSE);
	// ���j���[
	//DrawGraph(120, 200, g_Menu, TRUE);
	// ���j���[�J�[�\��
	//DrawRotaGraph(90, 220 + MenuNo * 40, 0.7f, M_PI / 2, g_Cone, TRUE);

	DrawFormatString(550, 150, GetColor(255, 255, 255), "MenuNo%d", MenuNo);
	DrawFormatString(550, 200, GetColor(255, 255, 255), "KeyFlg%d", systemInit.GetKeyFlg());

	DrawString(50, 50, "GameState" + MenuNo, GetColor(255, 255, 255));
	DrawString(0, 0, "Title", GetColor(255, 255, 255));
}