#pragma once
// �ȉ��C���N���[�h�t�@�C��.
#include "DxLib.h"

// �w�b�_�[���N�������邽�ߏ�̕��ɒ�`.
/// <summary>
/// �摜�̃t�@�C���̖��O�Ə��Ԃ�ۑ����Ă���enum.
/// </summary>
const enum mFileName : unsigned short
{
	none = 0,            // �t�@�C���p�X���Ȃ���.
	SadMemory,           // ���y���߂����L���̎�.
	MeanToBe,            // ���y��MeanToBe�̎�.
	OnAndOn,             // ���y��On&On�̎�.

	maxNum,              // �t�@�C���p�X�̍ő吔.
};


#include "Sound.h"
#include "Image.h"


// �ȉ��Œ�ϐ�.

// �X�N���[����ʕϐ�.
const int screenW = 1280;     // ��ʂ̉𑜓x(����).
const int screenH = 960;     // ��ʂ̉𑜓x(�c��).
const int screenG = 32;      // ��ʂ̃J���[�r�b�g��.

