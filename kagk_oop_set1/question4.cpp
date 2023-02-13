#include<iostream> 
#include<cstring> 

using namespace std; 
class strings 
{
    private: 
        char *str; 
        int length; 
    public:
        strings() 
            { 
                length=0; 
                str=new char[length+1]; 
            } 
        strings(const char *s) 
            { 
                length=strlen(s); 
                str=new char[length+1]; 
                strcpy(str,s); 
            } 
        void concatinate(strings a,strings b); 
        void compare(strings a,strings b); 
        void display_length() 
            { 
                cout<<length<<endl; 
            } 
}; 
void strings::concatinate(strings a,strings b) 
{ 
   length=a.length+b.length; 
   delete str; 
   str=new char[length+1]; 
   strcpy(str,a.str);
   strcat(str," ");
   strcat(str,b.str); 
   cout<<str; 
} 
void strings::compare(strings a,strings b) 
{ 
 if(a.length>b.length) 
 { 
   cout<<a.str<<" is the larger string."; 
 } 
 else if(b.length>a.length) 
 { 
   cout<<b.str<<" is the larger stings."; 
 } 
 else 
   cout<<" Both strings are of equal length."; 
 } 
int main() 
{ 
  string x,y;
  cout<<"Enter the first string: ";
  cin>>x;
  cout<<"Enter the second string: ";
  cin>>y;
  const char *s1=x.c_str();
  const char *s2=y.c_str();
  strings a(s1);
  strings b(s2);
  strings c;
  cout<<"-----------RESULT------------\n";
  cout<<"First string: "<<s1<<endl;
  cout<<"Second String: "<<s2<<endl;
  cout<<"Strings after concatination: ";
  c.concatinate(a,b);
  cout<<endl;
  cout<<"The length of the first  string is: ";
  a.display_length();
  cout<<"The length of the second string is: ";
  b.display_length();
  cout<<"The length of the concatinated string is: ";
  c.display_length();
  cout<<"The result of the comparission: "<<"\n";
  c.compare(a,b);
  return 0;
}