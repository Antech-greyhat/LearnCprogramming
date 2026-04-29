#include <stdio.h>
int main() {
	int choice;
	printf("MPESA MENU\n");
	printf("1. Send Money\n");
	printf("2. Withdraw Cash\n");
	printf("3. Buy Airtime\n");
	printf("4. Exit\n");
	printf("Enter Choice: ");
	scanf("%d, &choice");
	switch (choice) {
		case 1: printf("Send Money Selected\n"); break;
		case 2: printf("Withdraw Cash selected\n"); break;
		case 3: printf("Buy Airtime selected\n"); break;
		case 4: printf("Exiting...\n"); break;
		default: printf("Invalid Choice\n");
	}
	return 0;
}