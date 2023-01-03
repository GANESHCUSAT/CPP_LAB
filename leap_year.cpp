#include<iostream>

int main()
{  
     int y;
     std::cout << "enter the year: ";
     std::cin>>y;
      if(y % 400==0)
         std::cout<<"given year is a leap year";
      else if(y%100==0)
         std::cout<<"given year is not a leap year";
      else if(y%4==0)
         std::cout<<"given year is a leap year";
      else
         std::cout<<"given year is not a leap year";
    

    return 0;
}