#include <stdio.h>
int main() {
	int jin = 0, sun = 0, D = 0, i = 0;//������ �ķ�, ������ �ķ�, ���ϰ���� ��, for�� ����
	scanf_s("%d %d", &jin, &sun);
	scanf_s("%d", &D);

	for (i = 1; i <= D; i++) {
		if (i % 2 == 1) {//Ȧ����
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
		if (i % 2 == 0) {//¦���� 
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
1. ������ ������ ���쿡��, �������� ������ ������ ���쿡��
2.������ �ִ� ���� Ȧ����� �� �ķ��� ��°�� �Ѱ��ش�.

0 -> 100 100
1 -> 50 150
2 -> 125 75
3 -> 62, 138
*/