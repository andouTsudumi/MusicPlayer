#pragma once
/// <summary>
/// Imageクラス.
/// </summary>
class Image
{
public:
	/// <summary>
	/// コンストラクタ.
	/// </summary>
	/// <param name="_filePass">使用するファイルパスを代入する.</param>
	Image(char* filePass);

	/// <summary>
	/// デストラクタ.
	/// </summary>
	~Image();

	/// <summary>
	/// 更新関数.
	/// </summary>
	void Updata();

	/// <summary>
	/// 描画関数.
	/// </summary>
	void Draw();

private:
	/// <summary>
	/// ファイルパスを保存する変数.
	/// </summary>
	char* mFilePass;

	/// <summary>
	/// 読み込んだ画像ハンドルを保存する変数.
	/// </summary>
	int mHandle;

	/// <summary>
	/// 座標を保存する変数.
	/// </summary>
	VECTOR mPos;

	/// <summary>
	/// 画像の縦幅と横幅を保存する変数.
	/// </summary>
	int mWidth, mHeight;
};

/// <summary>
/// ファイルパスと下記のFileNameとの互換性を合わせるための配列.
/// </summary>
static char* imgFilePassAry[mFileName::maxNum] =
{
	"../MyDxLibGame3D/data/img/none",
	"../MyDxLibGame3D/data/img/SadMemory.jpg",
	"../MyDxLibGame3D/data/img/MeanToBe.jpg",
	"../MyDxLibGame3D/data/img/OnAndOn.jpg",
};

