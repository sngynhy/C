#include<stdio.h>
void main() {

    FILE* in = fopen("input.txt", "r");

    printf("===업다운게임!===\n");
    int ans;
    fscanf(in, "%d", &ans);

    int num;
    int s = 1, e = 100;
    while (1) {
        do {
            printf("%d~%d사이의 값을 입력: ", s, e);
            scanf("%d", &num);
        } while (num < s || e < num);
        if (ans == num) {
            printf("정답!\n");
            break;
        }
        else if (ans < num) {
            printf("다운!\n");
            e = num - 1;
        }
        else {
            printf("업!\n");
            s = num + 1;
        }
    }

    fclose(in);

}