#include<iostream>
int main()
{    
    int num1,num2,s, i,lr,q,slr;
    std::cout << "enter the number of inputs:";
    std::cin>>q;
    std::cout<<"\n enter the numbers:\n";
    i=0;
    lr=s;
 while(i<q)
   {      
      std::cin>>num1; 
      if(num1>lr)
       {
          slr=lr;
          lr=num1;
       }
      else if (num1>slr&num1<lr)
       {
         slr=num1;
       }
       i++;
    }
       std::cout<<"largest number is: "<<lr<<"\n";
       std::cout<<"second largeat number is: "<<slr;
      
    return 0;
}