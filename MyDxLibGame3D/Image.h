#pragma once
/// <summary>
/// Image�N���X.
/// </summary>
class Image
{
public:
	/// <summary>
	/// �R���X�g���N�^.
	/// </summary>
	/// <param name="_filePass">�g�p����t�@�C���p�X��������.</param>
	Image(char* filePass);

	/// <summary>
	/// �f�X�g���N�^.
	/// </summary>
	~Image();

	/// <summary>
	/// �X�V�֐�.
	/// </summary>
	void Updata();

	/// <summary>
	/// �`��֐�.
	/// </summary>
	void Draw();

private:
	/// <summary>
	/// �t�@�C���p�X��ۑ�����ϐ�.
	/// </summary>
	char* mFilePass;

	/// <summary>
	/// �ǂݍ��񂾉摜�n���h����ۑ�����ϐ�.
	/// </summary>
	int mHandle;

	/// <summary>
	/// ���W��ۑ�����ϐ�.
	/// </summary>
	VECTOR mPos;

	/// <summary>
	/// �摜�̏c���Ɖ�����ۑ�����ϐ�.
	/// </summary>
	int mWidth, mHeight;
};

/// <summary>
/// �t�@�C���p�X�Ɖ��L��FileName�Ƃ̌݊��������킹�邽�߂̔z��.
/// </summary>
static char* imgFilePassAry[mFileName::maxNum] =
{
	"../MyDxLibGame3D/data/img/none",
	"../MyDxLibGame3D/data/img/SadMemory.jpg",
	"../MyDxLibGame3D/data/img/MeanToBe.jpg",
	"../MyDxLibGame3D/data/img/OnAndOn.jpg",
};

