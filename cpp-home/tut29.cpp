#include<iostream>
using namespace std;

class complex{
  int a, b;
  public:
  // creating a constructor
  // constructor is a speacial member function with same name as of class.
  // it is used to initialize the objects of its class. 
  // it is automatically invoked(call karna/ execute karna) whenever an object is created
  
  complex(void);//constructor declaration ---> function
  
  void printnumber()
  {
    cout << "your number is " << a << " + " << b << "i" << endl;
  }
};

complex :: complex(void){ // this is a default constructor as it accepts no parameter
  a = 10 ;
  b = 0 ;
}

int main(){
  complex c1, c2, c3;
  c1.printnumber();
  c2.printnumber();
  c3.printnumber();
  return 0;
}

//characteristics  of constructor
// it should be declared in the public section of the class
//they are automatically invoked whenever the object is created
//they cannot return values and do not have return types
//it can have a default argument
// we cannot refer to theor addressc