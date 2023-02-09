#include "pch.h"

/// <summary>
/// コンストラクタ.
/// </summary>
/// <param name="_filePass">使用するファイルパスを代入する.</param>
Image::Image(char* filePass)
	:mFilePass(nullptr)                 // ファイルパス変数の初期化.
	,mPos(VGet(0.0f,0.0f,0.0f))         // 座標変数の初期化.
	,mWidth(0)                          // 画像の横幅変数の初期化.
	,mHeight(0)                         // 画像の縦幅変数の初期化.
{
	this->mFilePass = filePass;         // ファイルパス変数の代入.

	mPos = VGet(0.0f, 0.0f, 0.0f);

	this->mHandle = LoadGraph(this->mFilePass);
	GetGraphSize(this->mHandle, &this->mWidth, &this->mHeight);
	
}

/// <summary>
/// デストラクタ.
/// </summary>
Image::~Image()
{
	DeleteGraph(mHandle);                // 読み込んだ画像のハンドルを削除.
	delete mFilePass;                    // ファイルパス変数の削除.
}

/// <summary>
/// 更新関数.
/// </summary>
void Image::Updata()
{
}

/// <summary>
/// 描画関数.
/// </summary>
void Image::Draw()
{
	DrawGraph(this->mPos.x, this->mPos.y, this->mHandle, true);
}
