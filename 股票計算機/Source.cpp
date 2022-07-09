#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a = 0;//買價
    int b = 0;
    int c = 0;
    int w = 0;//張數
    float d = 0;//賣價
    int e = 0;
    int f = 0;
    int g, h = 0;
    printf("請輸入買入個股單價:");
    scanf("%f", &a);
    printf("請輸入賣出個股單價:");
    scanf("%f", &d);
    printf("請輸入張數:");
    scanf("%d", &w);
    a = a * w * 1000;
    b = a * 0.001425;
    if (b < 20) { b = 20; }
    c = a + b;
    printf("成本%d\n", c);
    d = d * w * 1000;
    e = d * 0.001425;
    if (e < 20) { e = 20; }
    f = d * 0.003;
    g = d - e - f;
    printf("賣出%d\n", g);
    h = g - c;
    if (h > 0) { printf("恭喜賺了%d元\n", h); }
    else { printf("賠了%d元\n", -h); }
    return 0;
}
