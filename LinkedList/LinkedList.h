/*
 * LinkedList.h
 *
 *  Created on: Aug 29, 2015
 *      Author: rwedoff
 */

#ifndef LINKEDLIST_H_
#define LINKEDLIST_H_

typedef struct node{
        int value;
        struct node * next;
    }llNode;


void printList(llNode * head);
void push(llNode * head,int val);
int length(llNode * head);
void addAfter(llNode * head, int loc, int val);
llNode *createHead(int val);
void removeByLoc(llNode * head, int loc);


#endif /* LINKEDLIST_H_ */
