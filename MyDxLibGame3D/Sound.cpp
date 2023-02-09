#include "pch.h"

/// <summary>
/// コンストラクタ.
/// </summary>
/// <param name="_filePass">使用するファイルパスを代入する.</param>
Sound::Sound(char* filePass)
	:mFilePass(nullptr)        // ファイルパス変数の初期化.
{
	this->mFilePass = filePass;

	// ループ再生する.
	PlaySoundFile(mFilePass, DX_PLAYTYPE_LOOP);
}

/// <summary>
/// デストラクタ.
/// </summary>
Sound::~Sound()
{
	delete mFilePass;          // ファイルパス変数の削除.
}

/// <summary>
/// 更新関数.
/// </summary>
void Sound::Updata()
{
	if (CheckSoundFile())
	{
		AppLogAdd("再生中なう☆\n");
	}
}