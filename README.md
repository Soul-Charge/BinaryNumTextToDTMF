# BinaryNumTextToDTMF

将用数字表示二进制的文本内容转为DTMF音频文件(.wav)

## 使用说明

首先确保在windows环境下安装并配置了ffmpeg的环境变量之类的  
因为本质上读取文件然后生成一个给ffmpeg读取的文件  
需要直接下载整个项目，因为需要里面的音频文件  
不要改`Btext.txt`的名字  
特别水但是反正能用，随便写的  

## 用法

**生成DTMF**  
1. 下载整个项目  
2. 使用什么都好反正转成用数字表示二进制数据的文本文件  
3. 用记事本打开`Btext.txt`, 填入数字文本，用空格作为分隔符，不要有除了`0`, `1`, ` ` 以外的任何字符  
4. 运行程序，正常的话会显示`Seems nothing is bad, you can shutdown this window.`, 然后可以关掉了  
5. 在项目根目录打开终端，输入这个:`ffmpeg -f concat -safe 0 -i concat.txt -codec copy out.wav`  

**DTMF解析**
1. 把创建出来的`out.wav`放到这个网页里解析成原内容  
    https://xiangyuecn.github.io/Recorder/assets/%E5%B7%A5%E5%85%B7-%E4%BB%A3%E7%A0%81%E8%BF%90%E8%A1%8C%E5%92%8C%E9%9D%99%E6%80%81%E5%88%86%E5%8F%91Runtime.html?jsname=teach.dtmf.decode_and_encode  
2. 复制内容然后粘贴到`temp.txt`用记事本把`#`替换成` `，或者随你用什么方法  