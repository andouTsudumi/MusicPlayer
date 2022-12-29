﻿using System;
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
        WindowsMediaPlayer mediaPlayer = new WindowsMediaPlayer();

        public Form1()
        {
            InitializeComponent();

            this.mediaPlayer.settings.volume = 20;
            this.mediaPlayer.URL = @"C:\Users\owner\Desktop\悲しい記憶.mp3";
            this.mediaPlayer.controls.play();
        }
    }
}
