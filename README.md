# led-wifi-demo

一个用于练习 Git / GitHub 流程的最小示例项目（WiFi 控制 LED 点灯）。

## 这个项目是什么

配合教程《GitHub 零基础入门》第 5~7 步使用：初始化仓库 → 提交 → 推送到 GitHub。

## 文件说明

| 文件 | 作用 |
| --- | --- |
| `main.c` | 程序入口，初始化并循环处理 |
| `led.c` | LED 亮灭控制 |
| `wifi.c` | WiFi 连接与 TCP 服务（手机连板子热点后发指令） |

## 本地怎么练

```bash
git init
git add .
git commit -m "第一次提交：完成点灯框架"
```

## 笔记

- 每完成一小块功能就 commit 一次，说明写“人话”
- 不要把 WiFi 密码、Token 提交到公开仓库
