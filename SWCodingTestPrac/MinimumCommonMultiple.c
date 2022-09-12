#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solition(int);

int main(void) {
    
}

int solution(int arr[]) {
    int arr_len = sizeof(arr) / sizeof(int);
    int answer = 1;
    int num = 2;
    int a = 0;

    while (a != 0) {
        a = 0;
        for (int i = 0; i < arr_len; i++) {
            if (arr[i] % num == 0) {
                a++;
            }
            if (a > 1 && arr[i] % num == 0) {
                arr[i] /= num;
                answer *= a;
            }
            if (a < 1) {
                num++;
            }
        }
        for (int i = 0; i < arr_len; i++) {
            answer *= arr[i];
        }
    }

    return answer;
}