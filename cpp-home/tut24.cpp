#include <iostream>
using namespace std;

class Employee
{
  int id;
  static int count;

public:
  void setdata(void)
  {
    cout<<"enter the id"<<endl;
    cin >> id;
    count++;
  }
  void getdata(void){
    cout<<"the id of this employee is: "<<id<<" and this is employee number "<< count<<endl;
  }
};

int Employee :: count; //default value is 0

int main()
{
Employee harry, rohan, lovish;
// harry.id = 1;
// harry.count = 1; cannot do this as id and count are private
harry.setdata();
harry.getdata();

rohan.setdata();
rohan.getdata();
  
lovish.setdata();
lovish.getdata();
  return 0;
}