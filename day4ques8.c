//Q8: Write a program to find and display the sum of the first n natural numbers.

#include <stdio.h>

int main(){
    int i,sum,n;
    sum=0;
    printf("Enter the number: \n");
    scanf("%d",&n);
         for (i=1;i<=n;i++)
         sum=sum+i;
         printf("sum of first 10 number: %d", sum);
return 0;
}

