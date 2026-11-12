#ifndef LED_H
#define LED_H

/* 初始化 LED 引脚 */
void led_init(void);

/* 打开 / 关闭 LED */
void led_on(void);
void led_off(void);

/* 主循环里调用，处理闪烁等定时动作 */
void led_tick(void);

#endif /* LED_H */
