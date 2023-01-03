#include<iostream>

int main()
{  
     int n,sum,x,y,i;
     std::cout << "enter the limit of series: ";
     std::cin>>n;
    
     if (n==1)
       std::cout<<"0,";
    
     else if(n==2)
       std::cout<<"0,1,";
    
     else
     {
         i=1;
         x=0;
         y=1;
         std::cout<<"0,1,";
           while (i<=(n-2))
         {
            sum=x+y;
            std::cout<<sum<<",";
            x=y;
            y=sum;
            i=i+1;
         }
     }
    
    return 0;
}