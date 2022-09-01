#include <stdio.h>
int main() {
	int jin = 0, sun = 0, D = 0, i = 0;//진우의 식량, 선우의 식량, 구하고싶은 날, for문 변수
	scanf_s("%d %d", &jin, &sun);
	scanf_s("%d", &D);

	for (i = 1; i <= D; i++) {
		if (i % 2 == 1) {//홀수날
			if (D % 2 == 1) {
				sun += (jin / 2);
				jin = jin / 2;
			}
			else {
				sun += jin / 2;
				jin /= 2;
				sun += 1;
			}
		}
		if (i % 2 == 0) {//짝수날 
			if (D % 2 == 1) {
				jin += (sun / 2);
				sun = sun / 2;
				sun += 1;
			}
			else {
				jin += sun / 2;
				sun /= 2;
			}
		}
	}

	printf("%d %d \n", jin, sun);
	return 0;
}

/*
1. 진우의 절반을 선우에게, 다음날은 선우의 절반을 진우에게
2.가지고 있는 양이 홀수라면 그 식량을 통째로 넘겨준다.

0 -> 100 100
1 -> 50 150
2 -> 125 75
3 -> 62, 138
*/