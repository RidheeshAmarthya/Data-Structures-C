#include<stdio.h>
#include<windows.h>

// CIRCULAR QUEUE RIDHEESH AMARTHYA A505112518005

int Queue[100];
int Front = 0;
int Rear = 0;

void Insert(int data){
    if(Rear == 100){
        if(Front == 0){
        printf("OVERFLOW");
        return;
        }
    else if (Rear == Front - 1){
        printf("Overflow");
    }
    else
        Rear = 0;
    }
Queue[Rear] = data;
Rear++;
}

void Delete(){
Queue[Front] = NULL;
Front++;
    if(Front == -1){
        printf("UNDERFLOW");
        return;
        Front = 0;
    }

}

void print(){
for(int i = Front; i < Rear; i++){
    printf("- %d ",Queue[i]);
}
}

int main() {

int check = 0;
int data;
while(check != 4){
    printf("\nEnter 1 to insert, 2 to delete, 3 to view and 4 to exit\n");
    scanf("%d",&check);
    switch(check){
    case 1: printf("Enter a number to insert: "); scanf("%d",&data); Insert(data); break;
    case 2: Delete(); printf("Data deleted! \n");
    case 3: print();
    }
}

system("PAUSE");
return 0;
}
