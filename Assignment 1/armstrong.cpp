#include<iostream>
#include<cmath>

int main()
{    
      int n,r,t,q,p;
      int sum;
      std::cout << "enter the number: ";
      std::cin>>n;
      t=1;
      sum=0;
      q=n;
      p=n;
        while (n>0)
         {  
            r=n%10;
              if(r>1)
                 {t=t+1;}
            n=(n-r)/10;
         }
       while (p>0)
        {  
           r=p%10;
           sum=sum + pow(r,t);
           p=(p-r)/10;
        }
     if (q==sum)
         std::cout<<"\nthe given number is a armstrong number.";
     else
         std::cout<<"\nthe given number is not a armstrong number.";
       
        return 0;
}