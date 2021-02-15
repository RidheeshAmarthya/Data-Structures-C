#include<stdio.h>

int main () {

int array[5] = {5,6,4,3,1};
int i,j,k,temp,index;

for(k=0;k<5;k++)
    printf(" %d ",array[k]);
    printf("\n");

for(i=0;i<5;i++){
        index = i;
    for(j=i+1;j<5;j++){
        if(array[i]>array[j])
            index = j;
            temp = array[i];
            array[i] = array[index];
            array[index] = temp;
        //    for(k=0;k<5;k++)
   // printf(" %d ",array[k]);
   // printf("\n");

    }
    for(k=0;k<5;k++)
    printf(" %d ",array[k]);
    printf("\n");

}

for(i=0;i<5;i++)
    printf(" %d ",array[i]);

}
