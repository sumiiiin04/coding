#include <stdio.h>

int main() {
    int today, exam;

    printf("오늘 날짜(일): ");
    scanf("%d", &today);

    printf("시험 날짜(일): ");
    scanf("%d", &exam);

    int dday = exam - today;

    if (dday > 0)
        printf("D-%d\n", dday);
    else if (dday == 0)
        printf("D-Day\n");
    else
        printf("%d일 지났습니다.\n", -dday);

    return 0;
}
