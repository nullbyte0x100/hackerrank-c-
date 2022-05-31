#include<stdio.h>
#include<stdbool.h>
#include<math.h>
bool narcissistic(int num)
{
    int sum=0;
    while (num>0){
        int mod=num%10;
        int ans=pow(mod,3);
        sum+=ans;
        num/=10;
    }
    if (sum==num){
        return true;
    }else{
        return false;
    }
}
int main(){
    printf("%d\n",narcissistic(153));
}
