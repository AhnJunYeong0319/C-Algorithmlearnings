#include <stdio.h>

//퀵 정렬 : 피벗 원소 이용 - 작은 집단 & 큰 집단 나누는 분할 정복

int number = 10;
int data[10] = { 1, 10, 5, 8, 7, 6, 4, 3, 2, 9 };


void quickSort(int* data, int start, int end) {
	if (start >= end) { // 원소가 1개인 경우
		return 0;
	}

	int key = start; // 키는 첫 번째 원소
	int i = start + 1;
	int j = end;
	int temp;

	while (i <= j) { //엇갈릴 때까지 반복
		while (data[i] <= data[key]) { // 키 값보다 큰 값을 만날 때까지 오른쪽 이동
			i++;
		}
		while (data[j] >= data[key] && j > start) { // 키 값보다 작은 값을 만날 때까지 왼쪽 이동
			j--;
		}
		if (i > j) { // 엇갈리면 작은 값 (data[j])와 키 값과 교체
			temp = data[j];
			data[j] = data[key];
			data[key] = temp;
		}
		else { // 안엇갈렸으면 그냥 큰 값과 작은 값 교체
			temp = data[j];
			data[j] = data[i];
			data[i] = temp;
		}
	}
	quickSort(data, start, j - 1);  // start부터 j - 1까지
	quickSort(data, j + 1, end); // j - 1부터 end까지
}





int main(void)
{
	quickSort(data, 0, number - 1);
	for (int i = 0; i < number; i++) {
		printf("%d", data[i]);
	}
	return 0;
}