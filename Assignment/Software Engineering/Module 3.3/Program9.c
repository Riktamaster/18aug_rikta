/*Write a program of structure employee that provides the following information-print and display:
 -->employee no.
 -->employee name
 -->employee address
 -->employee age   */
 
 #include <stdio.h>
 
 struct employee //defines employee type with properties like employee's no.,age, name and address
 {
 	int no, age;
 	char name[50],address[150];
 }em;
 
 int main()
 {
 printf("Enter Employee number:");
 scanf("%d", &em.no);  //input data into structure variable
 printf("Enter Employee name:");
 scanf("%s", &em.name);  //input data into structure variable
 printf("Enter Employee Address:");
 scanf("%s", &em.address);  //input data into structure variable
 printf("Enter Employee age:");
 scanf("%d", &em.age);  //input data into structure variable
 printf("Employee no.:%d\nEmployee Name:%s\nEmployee Address:%s\nEmployee age:%d",em.no,em.name,em.address,em.age);//printing values of structure variable
 return 0;
 }
