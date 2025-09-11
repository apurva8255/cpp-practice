#include<iostream>
using namespace std;

// create two classes
// simple calculator - takes input of 2 numbers using a utility function and performs +, -, *, / and displays the results using another function
// scientific calculator - takes input of 2 numbers using a utility function and performs any four scientific operations of your choice

// create another class hybrid calculator and inherit it using these two classes
// 1)what type of inheritance are you using?
// 2)which mode of inheritance are you using?
// 3)create an object of hybrid calculator and display results of simple and scientific calculator
// 4)how is code reusability implemented?

class simplecalc{
    int a, b;
    public:
      void setdata(int x, int y){
        a = x;
        b = y;
      }
      void performops(){
        cout<<"the value of a + b is "<<a+b<<endl;
        cout<<"the value of a - b is "<<a-b<<endl;
        cout<<"the value of a * b is "<<a*b<<endl;
        cout<<"the value of a / b is "<<a/b<<endl;
      }
};

int main(){
  
  return 0;
}