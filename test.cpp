//2024.4.23
//luogu P1151
#include <stdio.h>
#include <string.h>
int main(void) {
	int k;
	scanf_s("%d", &k);
	int x = 100;
	int l = 0;
	int m = 0;
	int key = 1;
	for (int i = 10000; i <= 30000; ++i) {
		 
		if (m == 1000) {
			m = 0;
		}
		if (i % 10 == 0 && i != 10000) {
			++l;
		}
		if (l == 1000) {
			l = 0;
		}
		if (i % 100 == 0 && i != 10000) {
			++x;
		}
		if ((m % k == 0) && (l % k== 0 )&& (x % k == 0)) {
			printf("%d\n", i);
			key = 0;
		}
		++m;
	}
	if (key) {
		printf("No");
	}

	return 0;
}
