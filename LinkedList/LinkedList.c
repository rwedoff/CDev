/*
 * LinkedList.c
 *
 *  Created on: Aug 29, 2015
 *      Author: rwedoff
 */
#include <stdio.h>
#include <stdlib.h>
#include "LinkedList.h"

void printList(llNode * head){
    llNode * current = head;
    while (current != NULL) {
        printf("%d\n", current->value);
        current = current->next;
    }
}

void push(llNode * head, int val){
    llNode * curr = head;
    //printf("%d\n",curr->value);
    llNode * newNode = malloc(sizeof(llNode));
    //Put head data into new node

    newNode->value = curr->value;
    newNode->next = curr->next;

    head->value = val;
    head->next = newNode;
}

int length(llNode * head){
	llNode * curr = head;
	int len=0;
	while(curr != NULL){
		len++;
		curr = curr->next;
	}
	printf("Length: %d\n", len);
	return len;
}

void addAfter(llNode * head, int loc, int val){
	int len = length(head);
	if(len == 0){
		createHead(val);
	}
	else if(len <= loc){
		printf("The list is smaller than the location: %d", len);
	}
	else{
		llNode * curr = head;
		int i = 0;
		while(i < loc){
			curr = curr->next;
			i++;
		}
		printf("Current Value: %d\n", curr->value);
		llNode * newNode = malloc(sizeof(llNode));
		newNode->next = curr->next;
		newNode->value = val;
		curr->next = newNode;

	}

}
llNode *createHead(int val){
	llNode * head = malloc(sizeof(llNode));
	head->next = NULL;
	head->value = val;
	return  head;
}

void removeByLoc(llNode * head, int loc){
	int len = length(head);
	if(len == 0){
		printf("Cannot remove the element: The list is empty");
	}
	else if(len <= loc){
		printf("The list is smaller than the location: %d", len);
	}
	else{
		llNode * oneBefore = head;
		int i = 0;
		while(i < (loc-1)){
			oneBefore = oneBefore->next;
			i++;
		}
		llNode * toBeDeleted = oneBefore->next;
		oneBefore->next = toBeDeleted->next;
		free(toBeDeleted);

	}
}






