#include<stdio.h>
#include<stdlib.h>

int main(){
	float i;
	for (i = 0; i < 1000; i++) {
		if ((i / 12 + i / 6 + i / 7 + 5 + i / 2 + 4) == i) {
			printf("\nage=%.0f", i);
			break;
			}
		}
			return 0;
			system("pause");
	}