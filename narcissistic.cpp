#include<iostream>
#include<stdbool.h>
#include<vector>
class Solution{
public:
static std::vector<int> narcissistic( int value ){
    int sum=0;
    int m{};
    std::vector<int> ans{};
    while (value>0){
        m=value%10;
        ans.push_back(m);
        value/=10;
    }
    return ans;
}
};
int main(){
    std::vector<int> ans=Solution::narcissistic(10564);
    for (auto x:ans){
        std::cout<<x<<" ";
    }
}