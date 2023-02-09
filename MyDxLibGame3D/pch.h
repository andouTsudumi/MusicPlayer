#pragma once
// 以下インクルードファイル.
#include "DxLib.h"

// ヘッダーを起動させるため上の方に定義.
/// <summary>
/// 画像のファイルの名前と順番を保存しているenum.
/// </summary>
const enum mFileName : unsigned short
{
	none = 0,            // ファイルパスがない時.
	SadMemory,           // 音楽が悲しい記憶の時.
	MeanToBe,            // 音楽がMeanToBeの時.
	OnAndOn,             // 音楽がOn&Onの時.

	maxNum,              // ファイルパスの最大数.
};


#include "Sound.h"
#include "Image.h"


// 以下固定変数.

// スクリーン画面変数.
const int screenW = 1280;     // 画面の解像度(横幅).
const int screenH = 960;     // 画面の解像度(縦幅).
const int screenG = 32;      // 画面のカラービット数.

