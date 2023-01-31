using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

using WMPLib;

namespace MusicPlayer
{
    public partial class Form1 : Form
    {
        /// <summary>
        /// WindowsMediaPlayerの変数保存.
        /// </summary>
        WindowsMediaPlayer mediaPlayer = new WindowsMediaPlayer();

        /// <summary>
        /// Timerの変数保存.
        /// </summary>
        Timer timer = new Timer();

        public Form1()
        {
            /*
             * コンポーネントの初期化.
             */
            InitializeComponent();

            // Tickイベントが発生してから次のTickイベントが発生するまでの時間(ミリ秒単位)を取得、または設定.
            timer.Interval = 300;


            timer.Tick += delegate
            {
                /*
                 * WindowsMediaPlayerの再生状況はplayStateで参照することが可能.
                 * WMPPlayerのステータスが止まった状態の時.
                 */
                if (mediaPlayer.playState == WMPPlayState.wmppsStopped)
                {
                    // また再生をする.
                    mediaPlayer.controls.play();
                }
            };
            // タイマーを起動.
            timer.Start();

            // ボリュームの調整.
            this.mediaPlayer.settings.volume = 20;

            this.mediaPlayer.URL = @"\bgm\sadMemory.mp3";
            /*
             * URLというかファイルパスを設定、なお直打ちの模様.
             * @はバックスラッシュをエスケープ文字として解釈しないように
             * コンパイラに指示を出す.
             */

            // 上記の設定を行ってから再生.
            this.mediaPlayer.controls.play();
        }
    }
}
