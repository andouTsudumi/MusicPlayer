#pragma once
/// <summary>
/// �t�@�C���̖��O�Ə��Ԃ�ۑ����Ă���enum�^class.
/// </summary>
enum FileName : unsigned short
{
	none = 0,            // �t�@�C���p�X���Ȃ���.
	sadMemory,           // �Ȗ��F�߂����L��.

	maxNum,              // �t�@�C���p�X�̍ő吔.
};

/// <summary>
/// �t�@�C���p�X�Ə�L��FileName�̌݊��������킹�邽�߂̔z��.
/// </summary>
static char* filePassAry[FileName::maxNum] =
{
	"../MyDxLibGame3D/data/bgm/none",
	"../MyDxLibGame3D/data/bgm/sadMemory.mp3",
	//"C:/Users/owner/Desktop/gitFileFork/MusicPlayer/MyDxLibGame3D/data/bgm/sadMemory.mp3",
};

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
	Sound(char* _filePass);

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
	char* filePass;
};