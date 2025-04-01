#include <stdio.h>
#include <stdlib.h>


struct node {
    int data;
    struct node *next;
};

struct node *start = NULL; 

void search() {
    struct node *ptr = start;
    int ele, isFound = 0;

    if (start == NULL) {
        printf("List is empty\n");
        return;
    }

    printf("Enter element to be searched:\n");
    scanf("%d", &ele);

    while (ptr != NULL) {
        if (ptr->data == ele) {
            isFound = 1;
            break;
        }
        ptr = ptr->next;
    }

    if (isFound == 1)
        printf("Element %d Found\n", ele);
    else
        printf("Element %d Not Found\n", ele);
}
