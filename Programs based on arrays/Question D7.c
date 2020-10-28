#include<stdio.h>
#define max 100
int main(){

	float array[max],new_array[max];
	int term,i;

	printf("Enter Number Of Eliment\n"); // How many number will insert in an array
	scanf("%d",&term);

	printf("\nInsert %d numbers\n",term);

	for(i=0;i<term;i++){
		scanf("%f",&array[i]);       // taking input
	}
    int j=0;
    for(i=term-1;i>=0;i--,j++){
       new_array[i]=array[j];      // creating new array with reverse value
    }

    for(i=0;i<term;i++){

        array[i]=new_array[i];   // copying new array value to the array
    }

	printf("\nReverse Array\n");

	for(i=0;i<term;i++)
	{
		printf("%f ",array[i]);

	}

	}


