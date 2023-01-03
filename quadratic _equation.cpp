#include <iostream>
#include <cmath>

 int main()
 {

  float a, b, c,d,root1,root2;
  // d = discriminant
    
   std::cout<<"enter the value of coefficient of x^2: ";
   std::cin>> a;

   std::cout<<"enter the value of coefficient of x: ";
   std::cin>> b;

   std::cout<<"enter the value of the constant term: ";
   std::cin>> c;
   d=(b*b)-(4*a *c);
    std::cout<<d;
    if (d< 0)
     {  std::cout<< "The quadratic equation has no real roots." ; }
    else if (d== 0)
     {  root1 = (-1*b)/2*a;
        std::cout<<"The quadratic equatioin has two real and equal roots : " << root1 ;}
    else
     {
       root1=((-1*b)+sqrt(d))/2*a;
       root2=((-1*b)-sqrt(d))/2*a;
       std::cout<< "The quadratic equation has two real and distinct roots: " <<root1<< " and " <<root2 ;
    }

     return 0;

 }