# DSB
An open-source lightweight driver that adds modern USB compatibility to DOS. USB 1, 2, and 3 are all supported.

---

It is recommended to add DSB to your `AUTOEXEC.BAT` file so the driver initializes automatically at startup and you can immediately start using USB devices.

# Compatibility
DSB has been tested on MS-DOS 6.22. It's unknown if it works on earlier versions, but it should work on later versions. And since DSB is a DOS driver, it will also add modern USB compatibility to DOS-based Windows versions, such as Windows 3.x. It should also work for any other Windows version you install on top of DOS 6.22.

# Build Instructions (for v1.0)

1. Download the source code file (`DSB.C`) and place it somewhere on your DOS hard drive.
2. Install [Borland Turbo C 2.x](https://winworldpc.com/product/borland-turbo-c/2x) from WinWorldPC.
3. Launch Turbo C, go to `File >> Open`, and browse to wherever you put the source code file.
4. Now is the time to make any desired changes to the code.
5. Create an executable file (EXE) by going to `Compile >> Make EXE File`. If you've made changes to the code, you should test it first by going to `Run >> Run`.
   
Alternatively, if you don't want to build DSB yourself, you can just download a premade executable from the Releases page.

# License

DSB is released under the MIT license.

