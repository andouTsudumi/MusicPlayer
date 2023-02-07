#pragma once
/// <summary>
/// ファイルの名前と順番を保存しているenum型class.
/// </summary>
enum FileName : unsigned short
{
	none = 0,            // ファイルパスがない時.
	sadMemory,           // 曲名：悲しい記憶.

	maxNum,              // ファイルパスの最大数.
};

/// <summary>
/// ファイルパスと上記のFileNameの互換性を合わせるための配列.
/// </summary>
static char* filePassAry[FileName::maxNum] =
{
	"../MyDxLibGame3D/data/bgm/none",
	"../MyDxLibGame3D/data/bgm/sadMemory.mp3",
	//"C:/Users/owner/Desktop/gitFileFork/MusicPlayer/MyDxLibGame3D/data/bgm/sadMemory.mp3",
};

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
	Sound(char* _filePass);

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
	char* filePass;
};