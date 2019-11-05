/*************************************************************************
	> File Name: OJ115.c
	> Author: dofo-eat
	> Mail:2354787023@qq.com 
	> Created Time: 2019年11月05日 星期二 21时00分51秒
 ************************************************************************/

#include<stdio.h>
#include<stdlib.h>

int main() {
    int x, y, i;
    int flag = 0;
    int m = 0, n = 0;
    int a[100], b[100];
    scanf("%d %d", &x, &y);
    if(x == y) {
        printf("100");
    }else {
        m = x % 10;
        x = x / 10;
        n = y % 10;
        y = y % 10;
        a[i] = m;
        b[i] = n;

    }
    return 0;
}
