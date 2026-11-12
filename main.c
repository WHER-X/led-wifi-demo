/*
 * main.c - 程序入口
 * 说明：这是练习 Git 流程用的示例代码，不做真实硬件驱动，
 *       重点是把「改文件 -> add -> commit -> push」这套流程走通。
 */

#include <stdio.h>
#include "led.h"
#include "wifi.h"

int main(void)
{
    printf("[boot] led-wifi-demo 启动\n");

    led_init();
    wifi_init();

    /* 主循环：等待手机通过 WiFi 发来控制指令 */
    for (;;) {
        wifi_poll();      /* 检查有没有收到指令 */
        led_tick();       /* 处理闪烁等定时动作 */
    }

    return 0;
}
