//system header files: it comes wiyh the complier
#include<iostream>
//user defined header files: it is written by the programmer
// #include"this.h" this will produce error if this.h is not present in the current directory 
using namespace std;
int main(){
  int a = 4, b = 5;
  cout<<"operators in c++:\n"<<endl;
  cout<<"following are the types of operators in c++"<<endl;
  //arithmetic operators
  cout<<"the value of a + b is: "<< a + b<<endl;
  cout<<"the value of a - b is: "<< a - b <<endl;
  cout<<"the value of a * b is: "<< a * b <<endl;
  cout<<"the value of a / b is: "<< a / b <<endl;
  cout<<"the value of a % b is: "<< a % b <<endl;
  cout<<"the value of a++ is: "<< a++ <<endl;
  cout<<"the value of a-- is: "<< a-- <<endl;
  cout<<"the value of ++a is: "<< ++a <<endl;
  cout<<"the value of --a is: "<< --a <<endl; 
  //assignment operators
  return 0;
}