#include <stdio.h>
#include <string.h>

int main() {
    char words[20][20];
    char target[20];
    int n, count = 0;

    printf("단어 개수: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
        scanf("%s", words[i]);

    printf("찾을 단어: ");
    scanf("%s", target);

    for (int i = 0; i < n; i++) {
        if (strcmp(words[i], target) == 0)
            count++;
    }

    printf("'%s'는 %d번 등장했습니다.\n",
           target, count);

    return 0;
}
