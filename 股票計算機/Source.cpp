#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a = 0;//�R��
    int b = 0;
    int c = 0;
    int w = 0;//�i��
    float d = 0;//���
    int e = 0;
    int f = 0;
    int g, h = 0;
    printf("�п�J�R�J�Ӫѳ��:");
    scanf("%f", &a);
    printf("�п�J��X�Ӫѳ��:");
    scanf("%f", &d);
    printf("�п�J�i��:");
    scanf("%d", &w);
    a = a * w * 1000;
    b = a * 0.001425;
    if (b < 20) { b = 20; }
    c = a + b;
    printf("����%d\n", c);
    d = d * w * 1000;
    e = d * 0.001425;
    if (e < 20) { e = 20; }
    f = d * 0.003;
    g = d - e - f;
    printf("��X%d\n", g);
    h = g - c;
    if (h > 0) { printf("�����ȤF%d��\n", h); }
    else { printf("�ߤF%d��\n", -h); }
    return 0;
}
