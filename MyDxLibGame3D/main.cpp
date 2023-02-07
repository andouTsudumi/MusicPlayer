//-----------------------------------------------------------------------------
// @brief  メイン処理.
// 2016 Takeru Yui All Rights Reserved.
//-----------------------------------------------------------------------------
// インクルード
#include "pch.h"

// 関数.
void InitialSettingWindow();

//-----------------------------------------------------------------------------
// @brief  メイン関数.
//-----------------------------------------------------------------------------
int WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int)
{
	// ＤＸライブラリ初期化処理
	if (DxLib_Init() < 0)
	{
		return -1;	// エラーが起きたら直ちに終了
	}

	// windowの初期設定.
	InitialSettingWindow();

	Sound* sound = new Sound(filePassAry[FileName::sadMemory]);

	// ループ文.
	while (!CheckHitKey(KEY_INPUT_ESCAPE))
	{
		ClearDrawScreen();


		ScreenFlip();
	}

	sound->~Sound();

	// ＤＸライブラリの後始末
	DxLib_End();

	// ソフトの終了
	return 0;
}

/// <summary>
/// Windowの初期設定関数.
/// </summary>
void InitialSettingWindow()
{
	//画面モードのセット
	//SetGraphMode(640, 480, 16);
	/*SetGraphMode( SCREEN_W, SCREEN_H, 32);*/

	ChangeWindowMode(TRUE);

}