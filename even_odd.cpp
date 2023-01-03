#include<iostream>

int main()
{   
    int i,e,o,q,n;
    std::cout<<"enter the number of inputs: ";
    std::cin>>q;
    std::cout << "enter the set of numbers: \n";
    i=0;
    e=0;
    o=0;
    while (i<q)
        {
          std::cin>>n;
          if(n%2==0)
             {e=e+1;}
          else
             {o=o+1;}          
           i++;
        }
   
std::cout<<"count of even numbers="<<e;
std::cout<<"count of odd numbers ="<<o;
    return 0;
}