#include<iostream>
using namespace std;

class base{
  int data1;//private by default and is not inheritable
  public:
  int data2;
  void setdata();
  int getdata1();
  int getdata2();
};

void base :: setdata(){
  data1 = 10;
  data2 = 20;
};

int base :: getdata1(){
  return data1;
};

int base :: getdata1(){
  return data2;
}
class derived : public base{
  //class is being derived publically
  int data3;
  public:
  void process();
  void display();
};
int main(){
  
  return 0;
}