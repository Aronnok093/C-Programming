#include<stdio.h>

/// This is comment.

#define max 12 /// fixed 12 month .

int main(){

    int year;
    float sales[max];     /// Its better to use double or float data type for sales, income or money.
    char month[max][14]={"January","February","March","April","May","June","July","August","September","October","November","December"}; /// Name of month using 2D array .

    printf("\nInsert Year Name: ");
    scanf("%d",&year);

    int i;
    printf("$$$Insert Sales Per Month$$$");
    for(i=0;i<max;i++){

        printf("\n%s->",month[i]);              /// Storing sale per month using loop.
        scanf("%f",&sales[i]);
    }


    float sum=0.0;
    for(i=0;i<max;i++){
        sum=sum+sales[i];               ///calculating total sum of the array.
    }

    float avarage=sum/12;       ///calculating average .

    int j;

    for(i=0;i<max;i++){

        for(j=i+1;j<max;j++){

            if(sales[i]>sales[j]){
               float temp=sales[i];        /// array sorting to find max min value .
               sales[i]=sales[j];
               sales[j]=temp;

            }
        }
    }

    printf("\nTotal Sales: %.2f\nAvarage: %.2f\nMaximum Sale: %.2f\nMinimum Sale: %.2f",sum,avarage,sales[11],sales[0]);  /// finally print output .

    }
