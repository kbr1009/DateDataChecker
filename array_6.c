#include <stdio.h>

int main(void)
{
    int a[5];
    /*  a[0]、 a[1]、 a[2]、 a[3]、 a[4]が定義されたことになる */
    int i;
    for(i = 0; i < 5; i++){
        printf("整数を入力してください：");
        scanf("%d", &a[i]);
    }

    for(i = 0; i < 5; i++){
        printf("%d\n", a[i]);
    }
    return 0;
}
