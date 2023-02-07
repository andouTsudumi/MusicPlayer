#include "pch.h"

/// <summary>
/// �R���X�g���N�^.
/// </summary>
Sound::Sound(char* _filePass)
	:filePass(nullptr)        // �t�@�C���p�X�ϐ��̏�����.
{
	this->filePass = _filePass;
}

/// <summary>
/// �f�X�g���N�^.
/// </summary>
Sound::~Sound()
{
	delete filePass;          // �t�@�C���p�X�ϐ��̍폜.
}

/// <summary>
/// �X�V�֐�.
/// </summary>
void Sound::Updata()
{
	// ���[�v�Đ�����.
	PlaySoundFile(filePass, DX_PLAYTYPE_LOOP);

	if (CheckSoundFile())
	{
		AppLogAdd("�Đ����Ȃ���\n");
	}
}