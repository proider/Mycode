//2024.4.21
//luogu P1085
#include <stdio.h>

typedef struct {
	int study_time1;
	int study_time2;
	char day;
	int reflect;
}Total_time;
int main(void) {
	int complete_happy = 0;
	int found = 1;
	Total_time unhappy_time[7] = { 0 };
	Total_time one_week = { 0 };
	int max_unhappy_day = 0;
	for (int i = 0; i < 7; ++i) {
		scanf_s("%d %d",&one_week.study_time1,&one_week.study_time2);
		if (one_week.study_time1 + one_week.study_time2 > 8) {
			unhappy_time[i].study_time1 = one_week.study_time1;
			unhappy_time[i].study_time2 = one_week.study_time2;
			unhappy_time[i].day = i+1;
			unhappy_time[i].reflect = 0;
			complete_happy++;
		}
	}
	if (complete_happy == 0) {
		printf("0");
		return 0;
	}
	for (int i = 0; i < 7; ++i) {
		for (int j = 0; j < 7; ++j) {
			if (unhappy_time[i].study_time1 + unhappy_time[i].study_time2 >= unhappy_time[j].study_time1 + unhappy_time[j].study_time2) {
				unhappy_time[i].reflect++;
			}
		}
		if (unhappy_time[i].reflect == 7) {
			printf("%d", unhappy_time[i].day);
			return 0;
		}
	}
	return 0;
}
