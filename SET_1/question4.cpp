#include <iostream>
#include <cstring>

class strings
{
private:
  char *str;
  int length;

public:
  strings()
  {
    length = 0;
    str = new char[length + 1];
  }
  strings(const char *s)
  {
    length = strlen(s);
    str = new char[length + 1];
    strcpy(str, s);
  }
  void concatinate(strings a, strings b);
  void compare(strings a, strings b);
  void display_length()
  {
    std::cout << length;
  }
};
void strings::concatinate(strings a, strings b)
{
  length = a.length + b.length;
  delete str;
  str = new char[length + 1];
  strcpy(str, a.str);
  strcat(str, " ");
  strcat(str, b.str);
  std::cout << str;
}
void strings::compare(strings a, strings b)
{
  if (a.length > b.length)
  {
    std::cout << a.str << " is the larger string.";
  }
  else if (b.length > a.length)
  {
    std::cout << b.str << " is the larger stings.";
  }
  else
    std::cout << " Both strings are of equal length.";
}
int main()
{  std::string choice;
  do
  {
    std::string x, y;
    std::cout << "Enter the first string: ";
    std::cin >> x;
    std::cout << "Enter the second string: ";
    std::cin >> y;
    const char *s1 = x.c_str();
    const char *s2 = y.c_str();
    strings a(s1);
    strings b(s2);
    strings c;
    std::cout << "-----------RESULT------------\n";
    std::cout << "First string: " << s1 << "\n";
    std::cout << "Second String: " << s2 << "\n";
    std::cout << "Strings after concatination: ";
    c.concatinate(a, b);
    std::cout << "\n\nThe length of the first  string is: ";
    a.display_length();
    std::cout << "\n\nThe length of the second string is: ";
    b.display_length();
    std::cout << "\n\nThe length of the concatinated string is: ";
    c.display_length();
    std::cout << "\n\nThe result of the comparisson: "<< "\n";
    c.compare(a, b);
    std::cout << "\n\ndo you want to continue(enter yes/no): ";
    std::cin >> choice;
  } while (choice == "yes");
  return 0;
}