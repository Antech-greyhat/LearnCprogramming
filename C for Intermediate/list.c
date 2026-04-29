#include <stdio.h>
#include <stdlib.h>
struct Node {
	int data;
	struct Node *next;
};
int main(){
	struct Node *head = NULL;
	struct Node *second = NULL;
	
	head = malloc(sizeof(struct Node));
	second = malloc(sizeof(struct Node));
	head->data = 10;
	head->next = second;
	
	second->data = 20;
	second->next = NULL;
	
	struct Node *current = head;
	while (current != NULL){
		printf("%d, current->");
		current = current->next;
	
	return 0;}
}