# DSB
An open-source lightweight driver that adds modern USB compatibility to DOS. USB 1, 2, and 3 are all supported.

# Compatibility
DSB has been tested on MS-DOS 6.22. It's unknown if it works on earlier versions, but it should work on later versions. And since the DSB is a DOS driver, it will also add modern USB compatibility to DOS-based Windows versions, such as Windows 3.x. It should also work for any other Windows version you install on top of DOS 6.22.

# Build Instructions

1. Download the source code file (`DSB.BAS`) and place it somewhere on your DOS hard drive.
2. Install [QuickBasic 4.5](https://winworldpc.com/product/quickbasic/45) from WinWorldPC.
3. Launch QuickBasic, press `Esc` to clear the dialog box, go to `File >> Open Program`, and browse to wherever you put the source code file. Select `OK` to open it.
4. Now is the time to make any desired changes to the code.
5. Create an executable file (EXE) by going to `Run >> Make EXE File...` Type a name for the executable file and select `Make EXE`.

---

It is recommended to add DSB to your `AUTOEXEC.BAT` file so the driver initializes automatically at startup and you can immediately start using USB devices.
