C++作业源代码
=============
源代码每堂课一个目录，默认用osx/linux下使用gcc/g++或者make编译。具体使用方法详见： [跟我一起写makefile](http://wiki.ubuntu.org.cn/%E8%B7%9F%E6%88%91%E4%B8%80%E8%B5%B7%E5%86%99Makefile)

目录组织形式
------------
<章>/<节>/<题目>.cpp
<章>/<节>/examples/<例子>.cpp

组织内开发方式
==============
组织内的成员的开发流程中不需要 `fork` 这个仓库，可以直接克隆这个仓库，然后基于`master` 创建新分支，编写代码，提交，然后
在 `github` 上创建一个 [`Pull Request`](https://github.com/fudancce/homework-cpp/compare) ，PR的目标分支是 `master` ，然后进行 `review` 和合并。

非组织内成员开发方式
====================
首先 `fork` 这个仓库，然后编码，提交到 `fork` 的仓库中，在 `github` 上创建 `PR` 到这个仓库，等待组内成员 `review` 并决定是否合并。
