#include<iostream>

int main()
{  
    int n,i,p;
    std::cout << "enter the number:";
    std::cin>>n;
    i=1;
    p=1;
    
      while(i<=n)
       {
           p=p*i;
           i=i+1;
       }
    
    std::cout<<"factorial is ="<<p;
    return 0;
}