#include <stdio.h>
#include <stdlib.h>
struct Node
{
	int data;
	struct Node * next;
	
};

void linkedListTraversal(struct Node * ptr)
{
	printf("[ ");
	while(ptr != NULL)
	{
		printf("%d ",ptr->data);
		ptr = ptr->next;
	}
	printf("]\n");
}

int main(int argc, char const *argv[])
{
	struct Node * head;
	struct Node * second;
	struct Node * third;

	// Allocate memory the in heap for nodes
	head = (struct Node *) malloc(sizeof(struct Node));
	second = (struct Node *) malloc(sizeof(struct Node));
	third = (struct Node *) malloc(sizeof(struct Node));

	//Link nodes
	head->data = 7;
	head->next = second;

	second->data = 8;
	second->next = third;

	third->data = 9;
	third->next = NULL;

	linkedListTraversal(head);

	return 0;
}