#include<stdio.h>
#define max 100 //preprocessing-> Macro declaration
int main(){
    int arr[max]; // array
    int term;    // In this variable code will store size of an array.

    printf("Number Of Term: ");
    scanf("%d",&term);

    int i;
    for(i=0;i<term;i++){

        scanf("%d",&arr[i]);     // code will take input down-to term
    }

    int num;         // In this variable code will store the number i have to find.
    printf("Target Number: ");
    scanf("%d",&num);

    int count=0;
    for(i=0;i<term;i++){

        if(arr[i]==num){  // if the number in an array is equal to store number
                            // the value of counter variable will increase one by one
            count++;
        }
    }

    printf("\n$$ %d found %d times $$\n",num,count);  // The result will print here.
}
