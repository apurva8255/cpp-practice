// oops - classws and objects
// you can declare objects along with the class declaration like this:
//  class Employee{
//    class defination
//  } harry, rohan, lovish;
// harry.salary = 8 makes no sense if salary is private

// nesting of member functions
#include <iostream>
#include <string>
using namespace std;

class binary
{
  // class k members are private
  string s;

public:
  void read(void);
  void chk_bin(void);
  void onescompliment(void);
  void display(void);
};

void binary ::read(void)
{
  cout << "enter a binary number" << endl;
  cin >> s;
}

void binary ::chk_bin(void)
{
  for (int i = 0; i < s.length(); i++)
  {
    if (s.at(i) != '0' && s.at(i) != '1')
    {
      cout << "incorrect binary format" << endl;
      exit(0);
    }
  }
}

void binary ::onescompliment(void)
{
  for (int i = 0; i < s.length(); i++)
  {
    if (s.at(i) == '0')
    {
      s.at(i) = '1';
    }
    else
    {
      s.at(i) = '0';
    }
  }
}

void binary ::display(void)
{
  cout << "displaying your binary number" << endl;
  for (int i = 0; i < s.length(); i++)
  {
    cout << s.at(i);
  }
  cout << endl;
};

int main()
{

  binary b; 
  b.read();
  b.chk_bin();
  b.onescompliment();
  b.display();
  b.display();
  return 0;
}