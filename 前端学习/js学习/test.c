#include <stdio.h>

int main() {
    char ch;
    printf("请输入星期几的第一个字母：");
    scanf("%c", &ch);

    switch (ch) {
        case 'M':
            printf("星期一");
            break;
        case 'T':
            {
                char next;
                printf("请输入第二个字母：");
                scanf(" %c", &next);
                if (next == 'u') {
                    printf("星期二");
                } else if (next == 'h') {
                    printf("星期四");
                } else {
                    printf("输入错误");
                }
            }
            break;
        case 'W':
            printf("星期三");
            break;
        case 'F':
            printf("星期五");
            break;
        case 'S':
            {
                char next;
                printf("请输入第二个字母：");
                scanf(" %c", &next);
                if (next == 'a') {
                    printf("星期六");
                } else if (next == 'u') {
                    printf("星期日");
                } else {
                    printf("输入错误");
                }
            }
            break;
        default:
            printf("输入错误");
    }

    return 0;
}