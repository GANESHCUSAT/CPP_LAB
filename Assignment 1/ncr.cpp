#include<iostream>

 int fact( int a)
   { 
      int p,i;
      p=1;
      i=1;
    if(a==0)
        return 1;
    else 
       while(i<=a)
      {
         p=p*i;
         i=i+1;
      }
        return p;
    }
        
int main()
{  
     int n,r,ncr,a,b,c, g;
     std::cout<< "enter the value of n:";
     std::cin>>n;
     std::cout<<"enter the value if r:";
     std::cin>>r;
     g=(n-r);
     a=fact(n);
     b=fact(r);
     c=fact((g));
     ncr= a/(b*c);
     std::cout<<"ncr="<<ncr;

    return 0;
}