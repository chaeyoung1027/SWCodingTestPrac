#include<stdio.h>

int main(void) {
    int answer = 0;
    int numbers[10] = { 0 };
    int numbers_len = sizeof(numbers) / sizeof(int);

    printf("10���� ���� �ڿ����� �Է����ּ���. \n");
    for (int i = 0; i < numbers_len; i++) {
        printf("%d��° ���ڸ� �Է����ּ���. >> ", (i + 1));
        scanf_s("%d", &numbers[i]);
        if (numbers[i] > 9) {
            printf("\n10���� ���� �ڿ����� �Է����ּ���. \n\n");
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

    printf("\n%���� ������ ���� %d�Դϴ�. ", answer);
    return 0;
}


/*���� ����
0���� 9������ ���� �� �Ϻΰ� ����ִ� ���� �迭 numbers�� �Է�.
numbers���� ã�� �� ���� 0���� 9������ ���ڸ� ��� ã�� ���� ���� ���.

���ѻ���
0 �� numbers�� ��� ���� �� 9
����� ��
numbers	result
[1,2,3,4,6,7,8,0]	14
[5,8,4,0,6,7,9]	6

����� �� #1

5, 9�� numbers�� �����Ƿ�, 5 + 9 = 14�� ���.
����� �� #2

1, 2, 3�� numbers�� �����Ƿ�, 1 + 2 + 3 = 6�� ���.*/