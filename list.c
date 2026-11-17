#include <stdio.h>
#include <stdlib.h>

typedef int element;

typedef struct ListNode {
    element data;
    struct ListNode *link;
} ListNode;

int main() {
    int i;

    ListNode *head = NULL;
    head = (ListNode *)malloc(sizeof(ListNode));
    head -> data = 10;
    /*head -> link = NULL;*/

    ListNode *p;
    p = (ListNode *)malloc(sizeof(ListNode));
    p -> data = 20;
    /*p -> link = NULL;*/
    head -> link = p;

    ListNode *q;
    q = (ListNode *)malloc(sizeof(ListNode));
    q -> data = 30;
    /*q -> link = NULL;*/
    p -> link = q;

    ListNode *r;
    r = (ListNode *)malloc(sizeof(ListNode));
    r -> data = 40;
    q -> link = r;


    /*ListNode *temp;
    temp = (ListNode *)malloc(sizeof(ListNode));
    
    temp -> data = q -> data;
    q -> data = r -> data;
    r -> data = temp -> data;*/

    for(p=head; p != NULL; p=p->link){
        printf("%d -> ", p -> data);
    }

}
