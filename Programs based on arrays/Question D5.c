#include<stdio.h>
#define max 10
int main(){

    int array[max]; ///array max size 0 to 9
    int i;

    for(i=0;i<10;i++){

        scanf("%d",&array[i]);   /// initialization
    }

    int sum=0;                 /// Insert 0 to remove garbadge value

    for(i=0;i<10;i++){

        sum=sum+array[i];     /// calculating sum of every digit
    }

    float avarage;

    avarage=(sum*1.0)/10; /// ((int * float = float) /int = float)

    printf("\nAverage: %.2f",avarage); /// print average after two decimal point

    printf("\nValue More Than Average: ");

    for(i=0;i<10;i++){

        if((float)array[i]>avarage){    /// condition to check is it greater than average number
            printf(" %d",array[i]);
        }
    }

    return 0;
}
