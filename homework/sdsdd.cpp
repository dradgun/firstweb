#include <stdio.h>
#include <conio.h>
#include <iostream>

typedef struct dataInt
{
	int number;
	struct dataInt *next;
} set;

set
	*headA = NULL,
	*headB = NULL,
	*head = NULL,
	*end = NULL,
	*root = NULL,
	*startNode = NULL,
	*s1 = NULL,
	*s2 = NULL;

set *CreateNode(int n);
void insertnode(set *ptr, set *&head);
void printnode(set *ptr);
void printlist(set *ptr);
set *search(int keyword, set *&head);
void deletenode(set *ptr, set *&head);
void deletenodeC(set *ptr);

int main()
{
	set *tmp;
	int ch, n;
	do
	{
		system("cls");
		printf("\n\t************Welcome to progarm************\n\n");
		printf("\n\tPress Select Option\n\n");
		printf("1 :Add Member of a Set A \n");
		printf("2 :Add Member of a Set B \n");
		printf("3 :printlist of set A\n");
		printf("4 :printlist of set B\n");
		printf("5 :searh of Number of Set A\n");
		printf("6 :searh of Number of Set B\n");
		printf("7 :delete of Number of Set A\n");
		printf("8 :delete of Number of Set B\n");
		printf("9 :result A-B \n");
		printf("\nSelect option :");

		scanf("%d", &ch);
		switch (ch)
		{
		case 1:
			printf("\n\tEnter product number set A : ");
			scanf("%d", &n);
			tmp = CreateNode(n);
			insertnode(tmp, headA);
			break;
		case 2:
			printf("\n\tEnter product number set B : ");
			scanf("%d", &n);
			tmp = CreateNode(n);
			insertnode(tmp, headB);
			break;
		case 3:
			printlist(headA);
			printf("\n\n\t-----------Press any key to clear-----------");
			getch();
			break;

		case 4:
			printlist(headB);
			printf("\n\n\t-----------Press any key to clear-----------");
			getch();
			break;

		case 5:
			printf("\n\tEnter keyword a set A : ");
			scanf("%d", &n);
			tmp = search(n, headA);
			if (tmp == NULL)
			{
				printf("\n\tSearch \"%d\" not found\n", n);
				printf("\n\t-----------Press any key to clear-----------");
				getch();
			}
			else
			{
				printnode(tmp);
				printf("\n\t-----------Press any key to clear-----------");
				getch();
			}
			break;
		case 6:
			printf("\n\tEnter keyword a set B : ");
			scanf("%d", &n);
			tmp = search(n, headB);
			if (tmp == NULL)
			{
				printf("\n\tSearch \"%d\" not found\n", n);
				printf("\n\t-----------Press any key to clear-----------");
				getch();
			}
			else
			{
				printnode(tmp);
				printf("\n\t-----------Press any key to clear-----------");
				getch();
			}
			break;
		case 7:
			printf("\n\tEnter keyword a set A : ");
			scanf("%d", &n);
			tmp = search(n, headA);
			if (tmp == NULL)
			{
				printf("\n\tSearch \"%d\" not found\n", n);
				printf("\n\t-----------Press any key to clear-----------");
				getch();
			}
			else
			{
				deletenode(tmp, headA);
				printf("\n\tdata deleted\n");
				printf("\n\t-----------Press any key to clear-----------");
				getch();
			}
			break;
		case 8:
			printf("\n\tEnter keyword a set B : ");
			scanf("%d", &n);
			tmp = search(n, headB);
			if (tmp == NULL)
			{
				printf("\n\tSearch \"%d\" not found\n", n);
				printf("\n\t-----------Press any key to clear-----------");
				getch();
			}
			else
			{
				deletenode(tmp, headB);
				printf("\n\tdata deleted\n");
				printf("\n\t\t\t\t\t-----------Press any key to clear-----------");
				getch();
			}
			break;
		case 9:
			printf("\tCartesian Product is : ");
			root = head;
			s1 = headA;
			s2 = headB;
			if (s1 && s2 != NULL)
			{
				while (s1 != NULL)
				{
					printf("%d ", s1->number - s2->number);
					s1 = s1->next;
					s2 = s2->next;
				}
			}
			else
			{
				printf("Empty Set");
			}
			printf("\n\n\t-----------Press any key to clear-----------");
			getch();
			break;
		}
	} while (ch != 0);
	return (0);
}
set *CreateNode(int n)
{
	set *tmp;
	tmp = new set;
	if (tmp == NULL)
	{
		return (NULL);
	}
	else
	{
		tmp->number = n;
		tmp->next = NULL;
		return (tmp);
	}
}
void insertnode(set *ptr, set *&head)
{
	set *start, *prev;
	if (head == NULL)
	{
		head = ptr;
		end = ptr;
		return;
	}
	start = head;
	do
	{
		if (start->number == ptr->number)
		{
			delete (ptr);
			return;
		}
		start = start->next;
	} while (start != NULL);
	start = head;
	while (start->number < ptr->number)
	{
		start = start->next;
		if (start == NULL)
			break;
	}
	if (start == head)
	{
		ptr->next = head;
		head = ptr;
	}
	else
	{
		prev = head;
		while (prev->next != start)
		{
			prev = prev->next;
		}
		prev->next = ptr;
		ptr->next = start;
		if (end == prev)
			end = ptr;
	}
}
void printnode(set *ptr)
{
	printf("\tNumber : %3d\t", ptr->number);
}

void printlist(set *ptr)
{
	int i = 0;
	printf("\n");
	while (ptr != NULL)
	{
		printnode(ptr);
		if (i == 5)
		{
			printf("\n");
		}
		i++;
		if (i < 5)
		{
			i = 0;
		}
		ptr = ptr->next;
	}
}
set *search(int keyword, set *&head)
{
	set *ptr;
	ptr = head;
	if (ptr == NULL)
	{
		return (NULL);
	}
	while (keyword != ptr->number)
	{
		ptr = ptr->next;
		if (ptr == NULL)
		{
			break;
		}
	}
	return (ptr);
}
void deletenode(set *ptr, set *&head)
{
	set *start, *prev;
	start = ptr;
	if (start == head)
	{
		head = head->next;
		if (end == start)
		{
			end = end->next;
		}
		delete (start);
	}
	else
	{
		prev = head;
		while (prev->next != start)
		{
			prev = prev->next;
		}
		prev->next = start->next;
		delete (start);
	}
}
