/*
 * main.c
 *
 *  Created on: Aug 29, 2015
 *      Author: rwedoff
 */


/*
 * main.c
 *
 *  Created on: Aug 29, 2015
 *      Author: rwedoff
 */

#include <stdio.h>
#include <stdlib.h>
#include "LinkedList.h"

int main()
{
    /*llNode * test_node = malloc(sizeof(llNode));
    test_node->value = 1;
    test_node->next = malloc(sizeof(llNode));
    test_node->next->value = 2;
    test_node->next->next = malloc(sizeof(llNode));
    test_node->next->next->value = 3;
    test_node->next->next->next = NULL;
    printList(test_node);
    printf("Hello world!\n");
    push(test_node, 0);
    printList(test_node);
    length(test_node);*/

	//llNode * llist = malloc(sizeof(llNode));
	llNode * llist = createHead(4);
	push(llist, 2);
	push(llist, 1);
	addAfter(llist, 2, 3);
	printList(llist);
	printf("Going to remove one!\n");
	removeByLoc(llist, 4);
	printList(llist);
    return 0;
}
