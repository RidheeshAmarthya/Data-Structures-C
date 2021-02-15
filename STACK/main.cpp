#include<stdio.h>
#include<windows.h>
using namespace std;

class stacks {
int arr[100],top = 0, siz,i;

public:
    stacks() {}
    stacks(int x){
        siz = x;
        }

    void push(int data){

        if(top == 100){
        printf("\nOverFlow!\n");
        return;
    }


        arr[top] = data;
        top++;
    }

    void pop(){

        if(top == 0){
        printf("\nUnderFlow!\n");
        return;
    }


        arr[top] = NULL;
        top--;
    }

    void display() {
        printf("\nContents of the stack\n");
        for(i=0;i<top;i++)
            printf(" %d ",arr[i]);
        printf("\n");
    }


};

int main()
{
   int input = 1,data,flag = 0;
   stacks x;
   while (input != 0){
    printf("Press 1 to push, 2 to pop, 3 to display and 0 to exit\n");
    scanf("%d",&input);
    switch(input){
    case 1: printf("Enter data\n"); scanf("%d",&data); x.push(data); break;
    case 2: x.pop(); break;
    case 3: x.display(); break;
    case NULL: flag = 1; break;
    default: printf("Invalid input\n");

    }
   }
   printf("\nThank you\n");
    system("PAUSE");
    return 0;
}
