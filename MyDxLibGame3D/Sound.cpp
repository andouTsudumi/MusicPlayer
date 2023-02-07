#include "pch.h"

/// <summary>
/// コンストラクタ.
/// </summary>
Sound::Sound(char* _filePass)
	:filePass(nullptr)        // ファイルパス変数の初期化.
{
	this->filePass = _filePass;
}

/// <summary>
/// デストラクタ.
/// </summary>
Sound::~Sound()
{
	delete filePass;          // ファイルパス変数の削除.
}

/// <summary>
/// 更新関数.
/// </summary>
void Sound::Updata()
{
	// ループ再生する.
	PlaySoundFile(filePass, DX_PLAYTYPE_LOOP);

	if (CheckSoundFile())
	{
		AppLogAdd("再生中なう☆\n");
	}
}