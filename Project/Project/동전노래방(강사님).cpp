// ������
// �������� ����
// ����ڰ� ������ �� �ִ���
// �ּ��� �̿��Ͽ� �ڵ� ����

#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<Windows.h>
void main() {

    srand(time(NULL)); // ���α׷��� ���۵Ǵ� ���� ���ѹ� ok
    // "�Լ�" -> �̿��̸� �ݺ����� �ٱ��ڵ忡 ��ġ��Ŵ

    int coin, songNum, score, songCnt;
    printf("���γֱ�: ");
    scanf("%d", &coin);

    do {
        printf("���γֱ�: ");
        scanf("%d", &coin);

        if (coin < 500) {
            printf("�ٽ��Է��ϼ���.");
        }
    } while (coin < 500);

    //while (coin < 500) {
    //    printf("�߸��� �Է��Դϴ�.\n");
    //    printf("�ٽ��Է�: ");
    //    scanf("%d", &coin);
    //    continue;  // continue�� ���� �� �������� �������Ƿ� �����ϸ� ���� �ʴ� ���� ����.
    //}
    songCnt = coin / 500;
    coin %= 500;
    printf("%d�� %d�� ��ȯ�˴ϴ�.\n\n", songCnt, coin);
    coin = 0;

    // while�� ������ ���� �����ؾ��� ��!
    // 1) ����  2) ���� ����
    // 1. while(���ǽ�) 2. do-while() 3. while(1)+��������(if-break;) � �ݺ����� ������� ����
        // ���� �뷡�� ���� �� �ݺ�
    while (songCnt > 0) { 

        /*printf("�뷡��ȣ�Է�: ");
        scanf("%d", &songNum);
        --songCnt;

        do {
            printf("�뷡��ȣ�� 1001��~1999������ �Դϴ�. Ȯ�� �� �ٽ� �Է��ϼ���.\n");
            scanf("%d", &songNum);
        } while (songNum < 1001 || 1999 < songNum);*/
        
        while (1) {
            printf("�뷡��ȣ�Է�: ");
            scanf("%d", &songNum);
            if (1000 < songNum && songNum < 2000) {
                break;
            }
            printf("1001�̻� 2000�̸��� ���� �Է��ϼ���!\n");
        }



        printf("...�뷡�����...\n");

        int cnt = 0;
        while (cnt < 3) {
            Sleep(500); // 1000==1��
            printf("�ݢܢݢ�");
            cnt++;
        }
        printf("\n\n");

        score = rand() % 101; // 0 ~ 100 ����
        printf("%d��: ", score);

        switch (score / 10) {
        case 10:
        case 9:
        case 8:
            printf("������ ������!!!\n");
            break;
        case 7:
        case 6:
            printf("�����뷡�����ϴ�!\n");
            break;
        default:
            printf("����ؾ߰ڳ׿�Ф�\n");
        }
        printf("\n���� �뷡��: %d��\n\n", --songCnt);
    }
}