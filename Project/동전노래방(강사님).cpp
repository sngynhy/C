// 가독성
// 유지보수 유리
// 사용자가 이해할 수 있는지
// 주석을 이용하여 코드 설명

#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<Windows.h>
void main() {

    srand(time(NULL)); // 프로그램이 동작되는 동안 단한번 ok
    // "함수" -> 이왕이면 반복로직 바깥코드에 위치시킴

    int coin, songNum, score, songCnt;
    printf("코인넣기: ");
    scanf("%d", &coin);

    do {
        printf("코인넣기: ");
        scanf("%d", &coin);

        if (coin < 500) {
            printf("다시입력하세요.");
        }
    } while (coin < 500);

    //while (coin < 500) {
    //    printf("잘못된 입력입니다.\n");
    //    printf("다시입력: ");
    //    scanf("%d", &coin);
    //    continue;  // continue는 협업 시 가독성이 떨어지므로 웬만하면 쓰지 않는 것이 좋다.
    //}
    songCnt = coin / 500;
    coin %= 500;
    printf("%d곡 %d원 반환됩니다.\n\n", songCnt, coin);
    coin = 0;

    // while문 설정시 먼저 생각해야할 것!
    // 1) 범위  2) 조건 설정
    // 1. while(조건식) 2. do-while() 3. while(1)+종료조건(if-break;) 어떤 반복문을 사용할지 결정
        // 남은 노래가 있을 때 반복
    while (songCnt > 0) { 

        /*printf("노래번호입력: ");
        scanf("%d", &songNum);
        --songCnt;

        do {
            printf("노래번호는 1001번~1999번까지 입니다. 확인 후 다시 입력하세요.\n");
            scanf("%d", &songNum);
        } while (songNum < 1001 || 1999 < songNum);*/
        
        while (1) {
            printf("노래번호입력: ");
            scanf("%d", &songNum);
            if (1000 < songNum && songNum < 2000) {
                break;
            }
            printf("1001이상 2000미만의 값을 입력하세요!\n");
        }



        printf("...노래재생중...\n");

        int cnt = 0;
        while (cnt < 3) {
            Sleep(500); // 1000==1초
            printf("♬♪♬♩");
            cnt++;
        }
        printf("\n\n");

        score = rand() % 101; // 0 ~ 100 정수
        printf("%d점: ", score);

        switch (score / 10) {
        case 10:
        case 9:
        case 8:
            printf("내일의 가수왕!!!\n");
            break;
        case 7:
        case 6:
            printf("좋은노래였습니다!\n");
            break;
        default:
            printf("노력해야겠네요ㅠㅠ\n");
        }
        printf("\n남은 노래수: %d곡\n\n", --songCnt);
    }
}