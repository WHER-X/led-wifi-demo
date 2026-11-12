/*
 * wifi.c - WiFi 连接与指令处理
 * 真实项目里用 Hi3861 / ESP8266 的 SDK；这里只保留结构，便于练习版本管理。
 * 注意：不要把真实 WiFi 密码写进仓库！
 */

#include <stdio.h>
#include <string.h>
#include "wifi.h"
#include "led.h"

/* 占位：真实使用时从本地配置读取，不要提交到公开仓库 */
static const char *WIFI_SSID = "YOUR_SSID";
static const char *WIFI_PASS = "YOUR_PASSWORD";

void wifi_init(void)
{
    printf("[wifi] 准备连接热点：%s\n", WIFI_SSID);
    /* TODO: 调用 SDK 的 WiFi 连接接口 */
    (void)WIFI_PASS;
    printf("[wifi] TCP 服务端口 8080 就绪（模拟）\n");
}

void wifi_poll(void)
{
    /* 模拟收到手机发来的指令 */
    const char *cmd = "";

    if (strcmp(cmd, "on") == 0) {
        led_on();
    } else if (strcmp(cmd, "off") == 0) {
        led_off();
    }
}
