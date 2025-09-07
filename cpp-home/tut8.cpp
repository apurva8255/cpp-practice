#include <iostream>
#include<iomanip>
using namespace std;

int main(int argc, char const *argv[])
{
  // int a=34;
  // cout<<"the value of a was:"<<a;
  // a=45;
  // cout<<"\nthe value of a is:"<<a;
  // constansts in c++
  // const int a = 3;
  // cout<<"the value of a was:"<<a;
  // a=45; // u will get an error here because a is a constant
  // cout<<"the value of a is :"<<a;
  // manipulators in c++
  // int a =3, b=78, c=1233;
  // cout<<"the value of a is:"<<setw(4)<<a<<endl;
  // cout<<"the value of b is:"<<setw(4)<<b<<endl;
  // cout<<"the value of c is:"<<setw(4)<<c<<endl;

  // cout<<"the value of a without setw is:"<<a<<endl;
  // cout<<"the value of b without setw is:"<<b<<endl;
  // cout<<"the value of c without setw is:"<<c<<endl;


  //operator precedence
  int a=3, b=4;
  int c = (a*5)+b;
  cout<<"the value of c is:"<<c<<endl;
  return 0;
}
