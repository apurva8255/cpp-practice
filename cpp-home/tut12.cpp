#include<iostream>
using namespace std;

int main(){
   int a = 3;
   int* b= &a; 
   cout<<"the addrwss of a is"<<&a<<endl;
   cout<<"the addrwss of a is"<<b<<endl;

   cout<<"the value addrwss of b is"<<*b<<endl;
  //pointer to pointer
  int** c= &b;
  cout<<"the addrwss of b is"<<&b<<endl;
  cout<<"the addrwss of b is"<<c<<endl;
  cout<<"the value at addrwss of c is"<<*c<<endl;

  cout<<"the value at addrwss value_at(value_at(c)) is"<<**c<<endl;




  return 0;
}