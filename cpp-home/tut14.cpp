#include<iostream>
using namespace std;

typedef struct employee
{
  /* data */
  int eId;
  char favChar;
  float salary;

}ep;

union money
{
  /* data */
  int rice;
  char car;
  float pounds;
};


int main(){
  enum Meal{ breakfast, lunch, dinner};
  Meal m1 = lunch;
  cout<<(m1==1);
  // cout<<breakfast;
  // cout<<lunch;
  // cout<<dinner;
  // ep harry;
  // union money m1;
  // m1.rice = 34 ;
  // m1.car = 'c';
  // cout<<m1.car;
  // struct employee mihika;
  // struct employee apurva;

  //  harry.eId = 1;
  //  harry.favChar ='c';
  //  harry.salary = 120000000;
  //  cout<<"the value is "<<harry.eId<<endl;
  //  cout<<"the value is "<<harry.favChar<<endl;
  //  cout<<"the value is "<<harry.salary<<endl;
  return 0;
}