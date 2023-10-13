//WAP to show difference between Structure and Union.
#include <stdio.h> 

struct Employee//defines employee type with properties like age,name,salary 
{
  int age;  
  char Name[50];
  float Salary;
};

union Student //defines student type with properties like age,name,marks
{
  int age;  
  char Name[50];
  float Marks;
};

int main() 
{
  struct Employee emp;
  union Student stu;
  //print the output in terms of its size  
  printf(" The Size of Employee Structure = %d\n", sizeof (emp) );
  printf(" The Size of Student Union = %d\n", sizeof (stu));

  return 0;
}
