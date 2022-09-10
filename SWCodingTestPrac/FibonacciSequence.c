#include<stdio.h>

int solution(int);

int main() {
    int n = 0;
    printf("수를 입력하세요 : ");
    scanf_s("%d", &n);

    printf("%d", solution(n));
}

int solution(int n) {
    int answer = 0;
    int F1 = 0;
    int F2 = 1;

    for (int i = 1; i < n; i++) {
        answer = (F1 + F2) % 1234567;
        F1 = F2;
        F2 = answer;
    }

    return answer % 1234567;
}