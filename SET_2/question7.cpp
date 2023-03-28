#include <iostream>
using namespace std;
class alpha
{
private:
   int alphaVariable;

public:
   alpha()
   {
      cout << "default constructor of alpha(base class)\n";
   }
   alpha(int a)
   {
      alphaVariable = a;
      cout << "Alpha initialized\n";
   }

   void displayAlpha()
   {
      cout << "Alpha : " << alphaVariable;
   }
};
class beta
{
private:
   int betaVariable;

public:
   beta()
   {
      cout << "default constructor of beta(base class)\n";
   }
   beta(int y)
   {
      betaVariable = y;
      cout << "Beta initialized\n";
   }

   void displayBeta()
   {
      cout << "\nBeta : " << betaVariable;
   }
};
class gamma : public alpha, public beta
{
private:
   int gammaVariable;

public:
   gamma()
   {
      cout << "default constructor of gamma(derived class)\n";
   }
   gamma(int x, int y, int z) : alpha(x), beta(y)
   {
      gammaVariable = z;
      cout << "Gamma initialized" << endl;
   }

   void displayGamma()
   {
      cout << "\nGamma : " << gammaVariable;
   }
};
int main()
{
   int a, b, c;
   cout << "enter the variable values of each class:\n";
   cout << "enter alpha class Variable:";
   cin >> a;
   cout << "enter beta class Variable:";
   cin >> b;
   cout << "enter gamma class Variable:";
   cin >> c;
   cout << "\norder of constructors initialised\n";
   gamma g1(a, b, c);
   g1.displayAlpha();
   g1.displayBeta();
   g1.displayGamma();
}