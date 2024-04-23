#include <stdio.h>
int main(void) {
	int cigarette_number = 0;
	int agiotage_number = 0;
	int total_cigarette = 0;
	int count = 0;
		scanf_s("%d %d", &cigarette_number, &agiotage_number);
		
		if (cigarette_number < agiotage_number||agiotage_number==1|| agiotage_number==0) {
			printf("%d", total_cigarette);
			return 0;
		}
		while (cigarette_number >= agiotage_number) {
			total_cigarette+= agiotage_number;
			cigarette_number = cigarette_number-agiotage_number+1;
			count++;
		}
		total_cigarette += cigarette_number;

		printf("%d", total_cigarette);
	return 0;
}