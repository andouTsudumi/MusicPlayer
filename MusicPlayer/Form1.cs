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

            timer.Interval = 300;
            timer.Tick += delegate
            {
                /*
                 * WindowsMediaPlayerの再生状況はplayStateで参照することが可能. 
                 */
                if (mediaPlayer.playState == WMPPlayState.wmppsStopped)
                {
                    mediaPlayer.controls.play();
                }
            };
            timer.Start();

            this.mediaPlayer.settings.volume = 20;              // ボリュームの調整.
            this.mediaPlayer.URL = @"C:\Users\owner\Desktop\悲しい記憶.mp3";
            /*
             * @はバックスラッシュをエスケープ文字として解釈しないように
             * コンパイラに指示を出す.
             */

            // 上記の設定を行ってから再生.
            this.mediaPlayer.controls.play();
        }
    }
}
