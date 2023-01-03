#include<iostream>

int main()
{   
     int n,sum,p,x,r;
     std::cout<< "enter the number: ";
     std::cin>>n;
     sum=0;
     while (n>0)
       {
           r=n%10;
           sum=sum*10+r;
          n=(n-r)/10;
       }
     std::cout<<"inverse of number is= "<<sum;
    
     return 0;
}