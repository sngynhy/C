#include<stdio.h>
void main() {

    FILE* in = fopen("input.txt", "r");

    printf("===���ٿ����!===\n");
    int ans;
    fscanf(in, "%d", &ans);

    int num;
    int s = 1, e = 100;
    while (1) {
        do {
            printf("%d~%d������ ���� �Է�: ", s, e);
            scanf("%d", &num);
        } while (num < s || e < num);
        if (ans == num) {
            printf("����!\n");
            break;
        }
        else if (ans < num) {
            printf("�ٿ�!\n");
            e = num - 1;
        }
        else {
            printf("��!\n");
            s = num + 1;
        }
    }

    fclose(in);

}