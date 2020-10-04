#include<stdio.h>
#define max 10
int main(){
    int mark[max]; // Array with maximum size 10
    int i;
    for(i=0;i<10;i++){
        printf("Student No: %d\nStudent Mark-> ", i+1);
        scanf("%d",&mark[i]);              // In this line code will  take input using for loop 0 to 9
    }

    for(i=0;i<10;i++)
        printf("Student No: %d Mark: %d\n",i+1,mark[i]);  // In this line code will print student Id and marks

    return 0;      // At the end of main function it will return 0 which denote code is ok!!!
}
