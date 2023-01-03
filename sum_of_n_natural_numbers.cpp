#include<iostream>

int main()
{    
    int n,i,sum;
    std::cout <<"enter the number of natural numbers:";
    std::cin>>n;
    sum=0;
    i=1;
    while (i<=n)
   {
       sum=sum+i;
       i=i+1;
    }
    std::cout<<"sum of"<<n<<"natural numbers is :"<<sum;
return 0;
}