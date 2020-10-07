#include<stdio.h>
#define max 100
int main(){

    int array[max],copy[max];
    int i,j,size;

    printf("Max Size Of Array: ");        /// maximum number of array
    scanf("%d",&size);

    printf("\nInsert Value\n");
    for(i=0;i<size;i++){
        scanf("%d",&array[i]);

    }

    for(i=0;i<size;i++){
        copy[i]=array[i];        /// storing array value into another array
    }

    int temp;
    for(i=0;i<size;i++){

        for(j=i+1;j<size;j++){

            if(array[i]>array[j]){

             temp=array[i];
             array[i]=array[j];         /// array shorting
             array[j]=temp;

            }

        }
    }

    int max_1,max_2;
    for(i=0;i<size;i++){
        if(copy[i]==array[size-1])           /// finding first maximum value index from array
            max_1=i;

       else if(copy[i]==array[size-2])     /// finding second maximum value index from array
            max_2=i;

    }

    printf("\n$$ Index Start From Zero $$\n"); /// *** In is code index is count from zero. make max_1=i+1;max_2=i+1; for counting from 1 to nth
    printf("\nFirst Maximum Number Index: %d\n second Maximum Number: %d",max_1,max_2);

    return 0;

}
