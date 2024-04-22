//2024.4.22
//第一次C语言实现插入排序
#include <stdio.h>

int main(void) {
	
	int array[] = { 2,9,5,4,6,7,2,3,4,1,8,0 };
	for (size_t i = 1; i < 12; ++i) {
		int key = array[i];
		int j = i - 1;
		while (j >= 0 && array[j] >= key) {
			array[j + 1] = array[j];
			j = j - 1;
		}
		array[j + 1] = key;
	}
	for (size_t i = 0; i < 12; ++i) {

		printf("%d  ", array[i]);
	}


	return 0;
}
