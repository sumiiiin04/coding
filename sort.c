#include <stdio.h> //1부터 10까지 곱 구하고 값 출력
int main(void) {
    int mul = 1;
    int i;

    for(i=1; i<11; i++) {
        mul = mul * i;
    }
    printf("sum = %d\n", mul);
}
