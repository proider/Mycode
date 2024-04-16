#include <stdio.h>
int main(void) {
	int road_lenth = 0;
	int area_amount = 0;
	int start_site[100] = { 0 };
	int end_site[100] = { 0 };
	int moved_trees = 0;
	scanf_s("%d %d", &road_lenth, &area_amount);
	for (int i = 0; i < area_amount; ++i) {

		scanf_s("%d %d", &start_site[i], &end_site[i]);
	}

	for (int i = 0; i < area_amount; ++i) {
		int temp = 0;
		for (int j = i+1; j < area_amount; ++j) {
			if (start_site[i] > start_site[j]) {
				temp = start_site[j];
				start_site[j] = start_site[i];
				start_site[i] = temp;
				
			}
		}
	}
	
	for (int i = 0; i < area_amount; ++i) {
		int temp = 0;
		for (int j = i+1; j < area_amount; ++j) {
			if (end_site[i] > end_site[j]) {
				temp = end_site[j];
				end_site[j] = end_site[i];
				end_site[i] = temp;

			}
		}
	}

	for (int i = 0; i < area_amount; ++i) {
		if (end_site[i] >= start_site[i + 1]) {
			moved_trees += end_site[i] - start_site[i] + 1;
			start_site[i + 1] = end_site[i]+1;
		}
		else {
			moved_trees += end_site[i] - start_site[i] + 1;		
		}
	}
	

	printf("%d", road_lenth + 1 - moved_trees);

	return 0;
}