#include<stdio.h>
#include<stdbool.h>
int narcissistic(int num)
{
    int m;
    int sum=0;
    while (num>0){
        m=num%10;
        sum+=m;
        num/=10;

    }
    return sum;
}
int main(){
    printf("The sum is %d",narcissistic(10564));
}
