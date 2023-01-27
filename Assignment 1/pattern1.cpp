#include<iostream>

int main()
{
int n, i, j;
    std::cout << "Enter the number of rows:";
    std::cin>>n;
    i=1;
    while(i<=n)
      {
         j=1;
          while(j<=i)
           {
             std::cout<<"* ";
             j=j+1;
           }
         std::cout<<"\n";
         i=i+1;
      }
        
    
    return (0);
}