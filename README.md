# Jar文件无黑框启动程序

在Windows端运行jar文件的过程中，不会出现任何的黑框。

# 如何使用
**自带的jre为从OpenJdk17中抽离出来的jre** <br/>
<br/>
1 将 **编译生成的exe** 、 **jre文件夹** 、 **Launch.vbs** 、 **Launch.bat** 、 **你需要运行的jar文件** 放置在同一文件夹下 <br/>
2 修改 **Launch.bat** 的```start  .\\jre\\bin\\javaw -jar xxx.jar``` 中的 ```xxx.jar```为你需要运行的jar文件 <br/>
3 点击exe运行即可
