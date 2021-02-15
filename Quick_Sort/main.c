#include<stdio.h>
#include<windows.h>
#include<time.h>


void quicksort(int array[10],int first,int last) {
    int temp,lp,rp,pivot;

    if(first<last){

    lp = first;
    rp = last;
    pivot = first;

    while(lp<rp){

        while(array[lp] <= array[pivot] && lp<last)
            lp++;
        while(array[rp] > array[pivot])
            rp--;

        if(lp<rp){
            temp = array[lp];
            array[lp] = array[rp];
            array[rp] = temp;
        }

    }

    temp = array[pivot];
    array[pivot] = array[rp];
    array[rp] = temp;
    quicksort(array,first,rp-1);
    quicksort(array,rp+1,last);

    }

}

int main() {

int array[10];
int i;

srand(time(0));
for(i=0;i<10;i++)
    array[i] = rand()%10;

for(i=0;i<10;i++)
    printf(" %d ",array[i]);

quicksort(array,0,10);

printf("\n");
for(i=0;i<10;i++)
    printf(" %d ",array[i]);

printf("\n");

system("PAUSE");

}
