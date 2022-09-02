#include<stdio.h>

int main(void) {
    int answer = 0;
    int numbers[10] = { 0 };
    int numbers_len = sizeof(numbers) / sizeof(int);

    printf("10보다 작은 자연수를 입력해주세요. \n");
    for (int i = 0; i < numbers_len; i++) {
        printf("%d번째 숫자를 입력해주세요. >> ", (i + 1));
        scanf_s("%d", &numbers[i]);
        if (numbers[i] > 9) {
            printf("\n10보다 작은 자연수를 입력해주세요. \n\n");
            i--;
        }
    }
    int num[9] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
    for (int i = 0; i < numbers_len; i++) {
        if (numbers[i] != 0) {
            num[numbers[i] - 1] = 0;
        }
    }
    for (int i = 0; i < sizeof(num) / sizeof(int); i++) {
        answer += num[i];
    }

    printf("\n%없는 숫자의 합은 %d입니다. ", answer);
    return 0;
}


/*문제 설명
0부터 9까지의 숫자 중 일부가 들어있는 정수 배열 numbers을 입력.
numbers에서 찾을 수 없는 0부터 9까지의 숫자를 모두 찾아 더한 수를 출력.

제한사항
0 ≤ numbers의 모든 원소 ≤ 9
입출력 예
numbers	result
[1,2,3,4,6,7,8,0]	14
[5,8,4,0,6,7,9]	6

입출력 예 #1

5, 9가 numbers에 없으므로, 5 + 9 = 14를 출력.
입출력 예 #2

1, 2, 3이 numbers에 없으므로, 1 + 2 + 3 = 6을 출력.*/