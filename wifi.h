#ifndef WIFI_H
#define WIFI_H

/* 连接 WiFi 热点并启动 TCP 服务 */
void wifi_init(void);

/* 主循环里调用，处理收到的控制指令（如 "on" / "off"） */
void wifi_poll(void);

#endif /* WIFI_H */
