/*
 * led.c - LED 控制
 * 真实开发板上是 GPIO 电平操作；这里用 printf 模拟，方便在电脑上直接跑通流程。
 */

#include <stdio.h>
#include "led.h"

static int led_state = 0;   /* 0 = 灭, 1 = 亮 */

void led_init(void)
{
    led_state = 0;
    printf("[led] 初始化完成（GPIO 模拟）\n");
}

void led_on(void)
{
    led_state = 1;
    printf("[led] 亮\n");
}

void led_off(void)
{
    led_state = 0;
    printf("[led] 灭\n");
}

void led_tick(void)
{
    /* 预留：以后要做呼吸灯 / 闪烁，就在这里按时间切换状态 */
    (void)led_state;
}
