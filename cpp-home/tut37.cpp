// #include<iostream>
// using namespace std;

// //base class
// class Employee{
//   public:
//   int id;
//   float salary;
//   Employee(int inpId){
//     id = inpId;
//     salary = 34.0;
//   }
//   Employee(){}
// };

// //derived class syntax
// //class {{derived-class-name :  {{visibility-mode}} {{base-class-name}}
// // {
// //   class members/methods/etc..
// // }

// /*note:
// 1. default visibility mode is private
// 2. public visbility mode : public members of the base class becomes public members of the derived class
// 3. private visibility mode : public members of the base class becomes private members of the derived class
// 4. private members are never inherited
// */

// // creating a programmer class derived from emplyoee base class

// class programmer : Employee{
//   public:
//   programmer(int inpId){
//     id = inpId;
//   }
//   int languagecode = 9;
//   void getdata(){
//     cout<<id<<endl;
//   }
// };

// int main(){
//   Employee harry (1), rohan(2);
//   cout<<harry.salary<<endl;
//   cout<<rohan.salary<<endl;
//   programmer skillF(1);
//   cout<<skillF.languagecode<<endl;
//   skillF.getdata();
//   return 0;
// }

#include<iostream>
using namespace std;

class employee{
  public:
  int id;
  int salary;
  employee(int inpid){
    id = inpid;
    salary = 34.0;
  }
  employee(){}
};

class programmer : employee{
  public: 
  programmer(int inpid){
    id = inpid;
  }
  int languagecode = 9;
  void getdata(){
    cout<<id<<endl;
  }
};

int main(){
  employee harry(1), rohan(2);
  cout<<harry.salary<<endl;
  cout<<rohan.salary<<endl;
  programmer skillf(10);
  cout<<skillf.languagecode<<endl;
  skillf.getdata();
  return 0;
}