#include<iostream>

int main()
{    
     int n,i,f;
     std::cout << "enter the number: ";
     std::cin>>n;
     i=2;
     f=0;
     while(i<=n/2)
      {  
         if(n%i==0)
            f=f+1;
              if(f>0)
                { break;}
           
        else
          i=i+1;}
        
        if(f>0)
          std::cout<<"number is not a prime";
        else 
          std::cout<<"number is a prime number";
        
        return 0;
}