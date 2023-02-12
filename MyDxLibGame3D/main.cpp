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
		return -1;	// エラーが起きたら直ちに終了.
	}

	// windowの初期設定.
	InitialSettingWindow();

	Sound* sound = new Sound(soundFilePassAry[mFileName::SadMemory]);
	Image* img = new Image(imgFilePassAry[mFileName::SadMemory]);

	// ループ文.
	while (!CheckHitKey(KEY_INPUT_ESCAPE))
	{
		ClearDrawScreen();

		img->Draw();

		ScreenFlip();
	}

	sound->~Sound();
	img->~Image();

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
	SetGraphMode(screenW, screenH, screenG);

	ChangeWindowMode(TRUE);

	// ウィンドウの見た目を変更する.
	SetWindowStyleMode(7);
	/*
	* [ウィンドウ]の見た目を変更する
	*`Mode`
	* 0` デフォルト
	* 1` タイトルバーなし
	* 2` タイトルバーなし枠なし
	* 3` 枠なし
	* 4` 何もなし
	* 5` 最小化無し
	* 6` ツールバーウインドウ
	* 7` 最大化つきウインドウ、初期状態が通常サイズ
	* 8` 最大化つきウインドウ、初期状態が最大化状態
	* 9` デフォルトに縁の立体化無し
	* 10` 最大化つきウインドウ、縁の立体化無し
	* 11` 閉じる無し、最小化無し
	*  戻り値
	* 0` 成功
	* -1` 失敗
	*/

	// 画面のサイズを変更できるようにするかどうか.
	SetWindowSizeChangeEnableFlag(TRUE,FALSE);
	/*
	* flag
	* true：変更できるようにする.
	* false：変更できないようにする.
	* 
	* 戻り値
	* 0：成功
	* -1：エラー
	*/

	SetDrawScreen(DX_SCREEN_BACK);
}