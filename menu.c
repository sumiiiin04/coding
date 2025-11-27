#include <stdio.h>

int main(void) {
  int i = 0;
  do {
    printf("1---과일\n");
    printf("2---고기\n");
    printf("3---과자\n");
    printf("하나를 골라주세요: ");
    scanf("%d", &i);
  } while (i < 1 || i > 3);

  if (i == 1) {
    int a = 0;
    printf("1---사과\n");
    printf("2---복숭아\n");
    printf("사과, 복숭아 중에서 하나를 고르시오: ");
    scanf("%d", &a);
    if (a == 1) {
      printf("2000원 입니다.\n");
    } else if (a == 2) {
      printf("1500원 입니다.\n");
    }
  } else if (i == 2) {
    int b = 0;
    printf("1---소고기\n");
    printf("2---돼지고기\n");
    printf("소고기, 돼지고기 중에서 하나를 고르시오: ");
    scanf("%d", &b);
    if (b == 1) {
      printf("2만원 입니다.\n");
    } else if (b == 2) {
      printf("1만원 입니다.\n");
    }
  } else if (i == 3) {
    int c = 0;
    printf("1---치즈맛\n");
    printf("2---딸기맛\n");
    printf("치즈맛, 딸기맛 중에서 하나를 고르시오: ");
    scanf("%d", &c);
    if (c == 1) {
      printf("1500원 입니다.\n");
    } else if (c == 2) {
      printf("2000원 입니다.\n");
    }
  }

  return 0;
}
