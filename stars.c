#include <stdio.h>

int s=0;


void print_stars() //함수의 원형, 함수만 다른 곳에 보낼 수 있음. .h로 끝나는 파일 = 헤더파일 ex) my.h로 저장 후 #include "my.h" 
{
    for(int i=0; i<s; i++) {
    printf("*****");
    printf("\n");
    }
}

int main(void) {
    printf("몇 줄을 출력할지 입력하시오");
    scanf("%d", &s);
    print_stars();

    return 0;
}
