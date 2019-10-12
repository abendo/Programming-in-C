/**
* ALBRIT BENDO
* Write a program that reads strings from standard input (the keyboard) and adds them to the
* beginning of a linked list. A ZZZ will quit the program.
* After each insertion the list should be printed to the screen.
* Implement a function struct list ∗ insertBegin(struct list ∗ , char str[]) that im-
* plements the insertion of elements into the list. Also implement a printList() function.
**/


#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct list {
	char str[20];
	struct list* next;
};

struct list*insertBegin(struct list* my_list, char *arr)
{
	struct list *new = (struct list*)malloc(sizeof(struct list));
	if (new == NULL)
		return my_list;
	strcpy(new->str,arr);
	new -> next = my_list;
	return new;
}

void printList(struct list *my_list)
{
	while(my_list != NULL)
	{
		printf("%s ", my_list->str);
		my_list = my_list -> next;
	}
	printf("\n");
}

int main()
{
	struct list *my_list = NULL;
	char arr[100];
	char stop[] = "ZZZ";
	fgets(arr,sizeof(arr),stdin);
	arr[strlen(arr) - 1] = '\0';
	while(strcmp(arr,stop) != 0)
	{
		my_list = insertBegin(my_list, arr);
		fgets(arr,sizeof(arr),stdin);
		arr[strlen(arr) - 1] = '\0';
	}
	printList(my_list);
	return 0;
	
}
