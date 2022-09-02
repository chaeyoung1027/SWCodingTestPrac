#include<stdio.h>

int main(void) {
    int answer = 0;
    int n = 0;
    printf("숫자를 입력해주세요 : ");
    scanf_s("%d", &n);

    while (n != 0) {
        answer += n % 10;
        n /= 10;
    }

    printf("값 : %d", answer);

    return 0;
}

/*문제 설명
자연수 N이 주어지면, N의 각 자릿수의 합을 구하기
예를들어 N = 123이면 1 + 2 + 3 = 6.

제한사항
N의 범위 : 100,000,000 이하의 자연수
입출력 예
N	answer
123	6
987	24
입출력 예 설명
입출력 예 #1
문제의 예시와 같습니다.

입출력 예 #2
9 + 8 + 7 = 24이므로 24를 return 하면 됩니다.
*/