#include <iostream>

using namespace std;

void pass_by_value(int a)
{
  cout << "Data in pass by value function ----------------" << endl;
  cout << "Value in this function is: " << a << endl;
  cout << "Memory address for value in this function: " << &a << endl;
  a = 5;
  cout << "Changing value in function is: " << a << endl;
}

void pass_by_reference(int &a)
{
  cout << "Data in pass by reference ----------------" << endl;
  cout << "Value in this function is: " << a << endl;
  cout << "Memory address for value in this function: " << &a << endl;
  a = 5;
  cout << "Changing value in function is: " << a << endl;
}

void pass_by_pointer(int *a)
{
  cout << "Data in pass by pointer ----------------" << endl;
  cout << "Value in this function is: " << *a << endl;
  cout << "Memory address for value in this function: " << a << endl;
  cout << "Memory address for pointer in this function: " << &a << endl;
  *a = 5;
  cout << "Changing value in function is: " << *a << endl;
}

int main()
{
  int *p = new int(3);
  cout << "Data in main function ----------------" << endl;
  cout << "Memory addres for pointer: " << &p << endl;
  cout << "Memory address for value is: " << p << endl;
  cout << "Value in main function: " << *p << endl;

  cout << endl;
  pass_by_value(*p);
  cout << "Value supposedly changed" << endl;
  cout << "Checking --------------" << endl;
  cout << "Data in main function ----------------" << endl;
  cout << "Memory addres for pointer: " << &p << endl;
  cout << "Memory address for value is: " << p << endl;
  cout << "Value in main function: " << *p << endl;

  cout << endl;
  pass_by_reference(*p);
  cout << "Value supposedly changed" << endl;
  cout << "Checking --------------" << endl;
  cout << "Data in main function ----------------" << endl;
  cout << "Memory addres for pointer: " << &p << endl;
  cout << "Memory address for value is: " << p << endl;
  cout << "Value in main function: " << *p << endl;

  cout << endl;
  pass_by_pointer(p);
  cout << "Value supposedly changed" << endl;
  cout << "Checking --------------" << endl;
  cout << "Data in main function ----------------" << endl;
  cout << "Memory addres for pointer: " << &p << endl;
  cout << "Memory address for value is: " << p << endl;
  cout << "Value in main function: " << *p << endl;
  
  system("pause");
}