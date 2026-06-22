#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    char quotes[5][100] = {
        "Success is not final.",
        "Never stop learning.",
        "Dream big and dare to fail.",
        "Today is another chance.",
        "Small steps matter."
    };

    srand(time(NULL));

    int n = rand() % 5;

    printf("Today's Quote\n");
    printf("%s\n", quotes[n]);

    return 0;
}
