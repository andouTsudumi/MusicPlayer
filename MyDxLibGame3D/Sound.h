#pragma once
/*
* const char* �� �萔�f�[�^�ւ̃|�C���^(�ϐ������̕ύX�s�A�A�h���X�̕ύX�\)
* char ary1 = "aaaaa";
* char ary2 = "bbbbb";
* const char* buf = ary1;
* buf = 'b';(�G���[)  buf = ary2(�\).
* 
* char* const �� �萔�|�C���^(�ϐ������̕ύX�\�A�A�h���X�̕ύX�s��)
* char ary1 = "aaaaa";
* char ary2 = "bbbbb";
* char* const buf = ary1;
* buf = 'b';(�\)  buf = ary2(�G���[).
* 
* const char* const �� �萔�f�[�^�ւ̒萔�|�C���^(�ϐ������̕ύX�s�A�A�h���X�̕ύX�s��)
* char ary1 = "aaaaa";
* char ary2 = "bbbbb";
* const char* buf = ary1;
* buf = 'b';(�G���[)  buf = ary2(�G���[).
*/

/// <summary>
/// Sound�N���X.
/// </summary>
class Sound
{
public:
	/// <summary>
	/// �R���X�g���N�^.
	/// </summary>
	/// <param name="_filePass">�g�p����t�@�C���p�X��������.</param>
	Sound(char* filePass);

	/// <summary>
	/// �f�X�g���N�^.
	/// </summary>
	~Sound();

	/// <summary>
	/// �X�V�֐�.
	/// </summary>
	void Updata();
private:
	/// <summary>
	/// �t�@�C���p�X��ۑ�����ϐ�.
	/// </summary>
	char* mFilePass;
};

/// <summary>
/// �t�@�C���p�X�Ɖ��L��FileName�Ƃ̌݊��������킹�邽�߂̔z��.
/// </summary>
static char* soundFilePassAry[mFileName::maxNum] =
{
	"../MyDxLibGame3D/data/bgm/none",
	"../MyDxLibGame3D/data/bgm/sadMemory.mp3",
	"../MyDxLibGame3D/data/bgm/Cartoon - On & On (feat. Daniel Levi).mp3",
	"../MyDxLibGame3D/data/bgm/Arc North - Meant To Be (feat. Krista Marina).mp3",
};
