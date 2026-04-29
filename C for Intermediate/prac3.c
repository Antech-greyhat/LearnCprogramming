#include <stdio.h>
int main() {
	int marks;
	printf("Enter your marks: ");
	scanf("%d, &marks");
	if (marks >=50) {
		printf("pass\n");
	} else {
		printf("fail\n");
	}
	return 0;
}