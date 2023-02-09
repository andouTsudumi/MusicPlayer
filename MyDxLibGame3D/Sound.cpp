#include "pch.h"

/// <summary>
/// �R���X�g���N�^.
/// </summary>
/// <param name="_filePass">�g�p����t�@�C���p�X��������.</param>
Sound::Sound(char* filePass)
	:mFilePass(nullptr)        // �t�@�C���p�X�ϐ��̏�����.
{
	this->mFilePass = filePass;

	// ���[�v�Đ�����.
	PlaySoundFile(mFilePass, DX_PLAYTYPE_LOOP);
}

/// <summary>
/// �f�X�g���N�^.
/// </summary>
Sound::~Sound()
{
	delete mFilePass;          // �t�@�C���p�X�ϐ��̍폜.
}

/// <summary>
/// �X�V�֐�.
/// </summary>
void Sound::Updata()
{
	if (CheckSoundFile())
	{
		AppLogAdd("�Đ����Ȃ���\n");
	}
}