#include <stdio.h>
#include "linked_list.h"
#include <stdlib.h>
#include <string.h>

int add_to_list(linked_list *ll, char *s)
{
	if(ll==NULL)
	{
		return -1;
	}
	
	while (ll->next!=NULL)
		ll=ll->next;
	
	linked_list *pHead = (struct linked_list*) malloc(sizeof(linked_list));
	pHead->data=s;
	pHead->next=NULL;
	pHead->index = ll->index+1;
	ll->next=pHead;

	return pHead->index;
}

linked_list * search_from_list(linked_list *ll, char *s)
{
	while (ll->next != NULL)
	{
		if (strcmp(ll->data, s)==0)
		{
			return ll;
		}
		ll=ll->next;
	}
	return NULL;
}


int display_item(linked_list *ll)
{
	if (ll==NULL)
	{
		return -1;
	}
	else 
	{
		printf("\n data: %s index: %d\n",ll->data,ll->index);
		return 0;
	}
	
}
int display_list(linked_list *ll)
{
	int amnt=0;
	
	while (ll->next != NULL)
	{
		printf("\n data: %s, index: %d\n",ll->data,ll->index);
		ll=ll->next;
		amnt++;
	}
	
	if (amnt>0)
	{
		printf("\n data: %s, index: %d\n",ll->data,ll->index);
	}
	
	return amnt;
}

int delete_from_list(linked_list *ll, int index)
{
	int indexing=0;
	while (ll!=NULL)
	{
		if (ll->index == index)
		{
			
		}
		indexing++;
		ll=ll->next;
	}
}
