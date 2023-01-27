#include<iostream>

void interchange(int&x,int&y)
   {
    int t;
    t=x;
    x=y;
    y=t;
   }
int main()
{ 
     int p, q;
     std::cout<<"enter number x=";
     std::cin>>p;
     std::cout<<"enter number y=";
     std::cin>>q;
     interchange(p,q);
     std::cout<<"after interchange\n";
     std::cout<<"x="<<p<<"\n"<<"y="<<q;
     return 0;
}