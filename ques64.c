// Q64: Find the digit that occurs the most times in an integer number.

#include <stdio.h>

int main(){

    int n,l=0,temp;
    printf("Enter a number: ");
    scanf("%d",&n);
    temp = n;
    while(temp>0){
        l++;
        temp /= 10;
    }
    
    
    char num[l+1];
    int c[l];
    sprintf(num,"%d",n);
    
    for(int i = 0;i<l;i++){

        int count = 0;

        for(int j = i;j<l;j++){
            if(num[i]==num[j])
                count++;
        }
        c[i] = count;
    }
    int frequent_index = 0;
    for(int i = 0;i<l;i++){
        for(int j = 0;j<l;j++){
            
        }
    }
    

    return 0;
}
