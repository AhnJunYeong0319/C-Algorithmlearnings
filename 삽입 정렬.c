#include <stdio.h>

//삽입 정렬 : 각 숫자를 적절한 위치에 삽입
//i번째 원소를 검사할 때, 그 앞은 다 정렬이 되어있다고 가정
int main(void)
{
	int i, j, temp;
	int array[10] = { 1,10,5,8,7,6,4,3,2,9 };
	for (i = 0; i < 9; i++) {
		j = i;
		while (array[j] > array[j + 1]) {
			temp = array[j];
			array[j] = array[j + 1];
			array[j + 1] = temp;
			j--;
		}
	}
	for (i = 0; i < 10; i++) {
		printf("%d", array[i]);
	}
	return 0;
}