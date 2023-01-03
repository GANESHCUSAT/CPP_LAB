#include<iostream>

int main()
{
    int n,i,j,p;
    std::cout << "enter the number of rows";
    std::cin>>n;
    for(i=1;i<=n;i=i+1)
      {
         j=0;
         p=0;
          while(p<=(n-i))
           {
             std::cout<<" ";
             p=p+1;
           } 
          while (j<(2*i-1))
           {
             std::cout<<"*";
             j=j+1;
        
           }
        std::cout<<"\n";
      }
    return 0;
}