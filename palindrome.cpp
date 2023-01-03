#include<iostream>

int main()
{    
     int n,sum,p,x,r;
     std::cout<< "enter the number:";
     std::cin>>n;
     sum=0;
     p=n;
    while (n>0)
      {
          r=n%10;
          sum=sum*10+r;
          n=(n-r)/10;
     
      }
    if (p==sum)
       std::cout<<"the given number is a palindrome";
    else
       std::cout<<"the given number is not a palindrome";
    
     return 0;
}