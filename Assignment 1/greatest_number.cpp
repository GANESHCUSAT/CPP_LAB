#include<iostream>

int main()
{   
     int a,b,c;
     std::cout << "enter three numbers";
     std::cin>>a>>b>>c;
      if (a>b&a>c)
         std::cout<<a<<"is greatest number";
      else if (b>a&b>c)
         std::cout<<b<<"is greatest number";
      else
         std::cout<<c<<"is greatest number";
        
    return 0;
}