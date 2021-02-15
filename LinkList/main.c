
#include<stdio.h>

struct node {
int data;
struct node *link;
};

typedef struct node ll;

void printll(ll* head){
    while(head != NULL){
        printf(" %d - ",head->data);
        head = head->link;
    }
    printf("\n");
}

ll* addlinklist(int data){
    ll* temp = malloc(sizeof(ll));
    temp->data = data;
    temp->link = NULL;
    return temp;
}

void deletell(ll* head){
    ll* temp;
    while(head->link != NULL){
        temp = head;
        head = head->link;
    }
    temp->link = NULL;
}

int main() {
    printf("A505112518011 Mohammed Baquer \n");
    ll *head = NULL;
    ll *temp = NULL;
    int data, i = 0, input;

    while(i != 1){
        printf("Enter 1 to add to linklist, 2 to delete from linklist, 3 to view linklist, 4 to exit\n");
        scanf("%d",&input);
        switch(input){
        case 1: printf("Enter the number:\n");
                scanf("%d",&data);
                    temp = addlinklist(data);
                    temp->link = head;
                    head = temp;

                break;
        case 2: deletell(head); printf("Top element deleted\n"); break;
        case 3: printll(head); break;
        case 4: i = 1; break;
        default: printf("Invalid Input\n");
        }
    }

return 0;
}
