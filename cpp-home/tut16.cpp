#include<iostream>
using namespace std;

int sum(int a, int b){
  int c = a+b;
  return c;
}

// this will not swap a and b
int swap(int a, int b){
  int temp = a;
  a = b;
  b = temp;
}

//call by refernce using pointers
int swapPointer(int* a, int* b){
  int temp = *a;
  *a = *b;
  *b = temp;
}

//call by refernce using c++ refernce variables
int & swapReferenceVar(int &a, int &b){
  int temp = a;
  a = b;
  b = temp;
  return a;
}

int main(){
  int x = 4, y = 5;
  //cout<<"the sum of 4 and 5 is "<<sum(4,5);
  cout<<"the valur of x is "<<x<<" and the value of y is "<<y<<endl;
  //swap(x, y); this will not swap a and b
  //swapPointer( &x, &y); this will swap a and b using pointer variables
  swapReferenceVar( x, y) = 766; // this will swap a and b using refernce variables
  cout<<"the value of x is "<<x<<" and the vlaur of y is "<<y<<endl;
  return 0;
}