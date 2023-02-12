#pragma once

// Imageクラスの仮宣言.
class Image;

/// <summary>
/// Buttonクラス.
/// </summary>
class Button
{
public:
	/// <summary>
	/// コンストラクタ.
	/// </summary>
	Button();

	/// <summary>
	/// デストラクタ.
	/// </summary>
	~Button();

	/// <summary>
	/// 更新関数.
	/// </summary>
	void Update();

	/// <summary>
	/// 描画関数.
	/// </summary>
	void Draw();

private:
	/// <summary>
	/// Imageクラスを持った画像を保存する変数.
	/// </summary>
	Image* mImg;

	/// <summary>
	/// bool型の押したかどうかのflag.
	/// trueのときは押したfalseの時は押していないとき.
	/// </summary>
	bool mPushFlag;
};

