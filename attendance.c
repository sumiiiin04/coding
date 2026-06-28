#include <stdio.h>

int main() {
    char name[5][20];
    int attend[5];

    for (int i = 0; i < 5; i++) {
        printf("%d번째 학생 이름: ", i + 1);
        scanf("%s", name[i]);

        printf("출석(1) 결석(0): ");
        scanf("%d", &attend[i]);
    }

    printf("\n출석 현황\n");

    for (int i = 0; i < 5; i++) {
        printf("%s : ", name[i]);

        if (attend[i])
            printf("출석\n");
        else
            printf("결석\n");
    }

    return 0;
}
