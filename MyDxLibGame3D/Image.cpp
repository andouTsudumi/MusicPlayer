#include "pch.h"

/// <summary>
/// �R���X�g���N�^.
/// </summary>
/// <param name="_filePass">�g�p����t�@�C���p�X��������.</param>
Image::Image(char* filePass)
	:mFilePass(nullptr)                 // �t�@�C���p�X�ϐ��̏�����.
	,mPos(VGet(0.0f,0.0f,0.0f))         // ���W�ϐ��̏�����.
	,mWidth(0)                          // �摜�̉����ϐ��̏�����.
	,mHeight(0)                         // �摜�̏c���ϐ��̏�����.
{
	this->mFilePass = filePass;         // �t�@�C���p�X�ϐ��̑��.

	mPos = VGet(0.0f, 0.0f, 0.0f);

	this->mHandle = LoadGraph(this->mFilePass);
	GetGraphSize(this->mHandle, &this->mWidth, &this->mHeight);
	
}

/// <summary>
/// �f�X�g���N�^.
/// </summary>
Image::~Image()
{
	DeleteGraph(mHandle);                // �ǂݍ��񂾉摜�̃n���h�����폜.
	delete mFilePass;                    // �t�@�C���p�X�ϐ��̍폜.
}

/// <summary>
/// �X�V�֐�.
/// </summary>
void Image::Updata()
{
}

/// <summary>
/// �`��֐�.
/// </summary>
void Image::Draw()
{
	DrawGraph(this->mPos.x, this->mPos.y, this->mHandle, true);
}
