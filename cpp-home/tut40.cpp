#include <iostream>
using namespace std;

class student
{
protected:
  int roll_number;

public:
  void set_roll_number(int);
  void get_roll_number(void);
};

void student::set_roll_number(int r)
{
  roll_number = r;
}

void student::get_roll_number(void)
{
  cout << "the roll no. is" << roll_number << endl;
}

class exam : public student
{
protected:
  float maths;
  float physics;

public:
  void set_marks(float, float);
  void get_marks(void);
};

void exam ::set_marks(float m1, float m2)
{
  maths = m1;
  physics = m2;
}

void exam ::get_marks(void)
{
  cout << "marks in maths are: " << maths << endl;
  cout << "marks in physics are: " << physics << endl;
}

class result : public exam
{
  float percentage;

public:
  void display()
  {
    get_roll_number();
    get_marks();
    cout << "your percentage is: " << (maths + physics) / 2 << "%" << endl;
  }
};

int main()
{
  /*
  notes:
  if we are inheriting B from A and C from B, then
  1.  A is the base class of B and B is base class of C
  2. A-->B-->C is called inheritance path
   */
  result apurva;
  apurva.set_roll_number(1);
  apurva.set_marks(90.0, 95.0);
  apurva.display();
  result anay;
  anay.set_roll_number(2);
  anay.set_marks(85.0, 80.0);
  anay.display();
  return 0;
}