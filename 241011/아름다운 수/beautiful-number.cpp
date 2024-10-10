#include<iostream>
int ans,n;void choose(int num){if(num<=0)ans++;for(int i=1;i<=4;i++){if(num-i>=0)choose(num-i);}}int main(){std::cin>>n;choose(n);std::cout<<ans;}