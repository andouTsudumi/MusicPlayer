#pragma once
/*
* const char* ＝ 定数データへのポインタ(変数内部の変更不可、アドレスの変更可能)
* char ary1 = "aaaaa";
* char ary2 = "bbbbb";
* const char* buf = ary1;
* buf = 'b';(エラー)  buf = ary2(可能).
* 
* char* const ＝ 定数ポインタ(変数内部の変更可能、アドレスの変更不可)
* char ary1 = "aaaaa";
* char ary2 = "bbbbb";
* char* const buf = ary1;
* buf = 'b';(可能)  buf = ary2(エラー).
* 
* const char* const ＝ 定数データへの定数ポインタ(変数内部の変更不可、アドレスの変更不可)
* char ary1 = "aaaaa";
* char ary2 = "bbbbb";
* const char* buf = ary1;
* buf = 'b';(エラー)  buf = ary2(エラー).
*/

/// <summary>
/// Soundクラス.
/// </summary>
class Sound
{
public:
	/// <summary>
	/// コンストラクタ.
	/// </summary>
	/// <param name="_filePass">使用するファイルパスを代入する.</param>
	Sound(char* filePass);

	/// <summary>
	/// デストラクタ.
	/// </summary>
	~Sound();

	/// <summary>
	/// 更新関数.
	/// </summary>
	void Updata();
private:
	/// <summary>
	/// ファイルパスを保存する変数.
	/// </summary>
	char* mFilePass;
};

/// <summary>
/// ファイルパスと下記のFileNameとの互換性を合わせるための配列.
/// </summary>
static char* soundFilePassAry[mFileName::maxNum] =
{
	"../MyDxLibGame3D/data/bgm/none",
	"../MyDxLibGame3D/data/bgm/sadMemory.mp3",
	"../MyDxLibGame3D/data/bgm/Cartoon - On & On (feat. Daniel Levi).mp3",
	"../MyDxLibGame3D/data/bgm/Arc North - Meant To Be (feat. Krista Marina).mp3",
};
