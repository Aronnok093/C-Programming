#include<stdio.h>
int main(){
    int array_1[]={9,8,7,6,5};    // Declaring an array with default value .
    int array_2[]={5,6,7,8,9};

    int size= sizeof(array_1)/sizeof(array_1[0]);       // Code will find out the size of an array Ex. size=5 .

    int i;
    for(i=0;i<size;i++){

        printf(" %d",array_1[i]-array_2[i]);           // IN here code will subtract same size of two array. Ex. 9-5=4 .

    }

    return 0;
}
