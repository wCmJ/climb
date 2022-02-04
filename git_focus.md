# git
## keywords
- 内容寻址文件系统(content-addressable fs)
- git底层命令：内部的工作机制，如何完成工作以及为什么这么运作
- .git目录
  - config: 项目特有的配置选项
  - info: 全局性排除文件，放置不希望被记录在.gitignore文件中的忽略模式
  - hooks: 客户端或服务端的钩子脚本
  - ***HEAD***: 目前被检出的分支
  - ***index***: 暂存区信息
  - ***objects***: 存储所有数据内容
  - ***refs***: 存储指向数据（分支、远程仓库和标签等）的提交对象的指针


