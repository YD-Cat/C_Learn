# C_Learn 学习笔记
最近打算重新学一遍C，故在此记录下笔记，不定时更新
#### 运行环境
<table>
    <tbody>
        <tr>
            <td><b>编译器<b></td>
            <td>Mingw64</td>
        </tr>
        <tr>
            <td>
                <b>编辑器<b>
            </td>
            <td>
                VS Code
            </td>
        </tr>
    </tbody>
</table>

> 因为Visual Studio和Clion都对同一个项目里具有多个main方法不友好，需要把不需要运行的main方法去掉或修改配置，所以使用VS Code作为编辑器，VS Code可对单个文件运行

#### 运行
1. 安装Mingw64
2. VS Code配置好Mingw64
3. 拉取项目，用VS Code打开整个文件夹
4. 打开需要运行的.c文件，按F5，选择**C++(GDB/LLDB)**
5. 再选择**gcc.exe - 生成和调试活动文件**

<img src="1.png"> ———> <img src="2.png">

#### 清除生成的exe文件
- 直接运行del_exe.bat文件即可，会删除该文件的目录下所有exe文件
