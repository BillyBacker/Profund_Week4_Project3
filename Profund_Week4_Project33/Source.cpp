#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>

int main() {
	int r;
	printf("Enter dounut radius : ");
	scanf("%d", &r);
	printf("Here you are : \n");
	r -= 1;
	int thickness = r / 1.5;
	for (int row = 0; row < 2 * r+1; row++) {
		for (int col = 0; col < 2 * r+1; col++) {
			if (pow((col - r), 2) + pow((row - r), 2) <= pow(r, 2) && (pow((col - r), 2) + pow((row - r), 2) > pow((r - thickness), 2))) {
				printf("* ");
			}
			else {
				printf("  ");
			}
		}
		printf("\n");
	}
}