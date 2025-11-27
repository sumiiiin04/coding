#include <stdio.h>

int main(void)
{
    int i;
    int n;
    int sum =0;

    i = 0;
    n = 0;
    while(i<5) {
        printf("정수를 입력하시오");
        scanf("%d", &n);
        sum += n;
        i++;
    }

    printf("정수 5개의 합은 %d입니다.\n", sum);
    return 0;
}
