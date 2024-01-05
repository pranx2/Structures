#include<stdio.h>
   
   typedef struct computer_science_and_engineering {
      char name[100];
      int roll;
      float cgpa;
   } cse ;//shorten nickname;

   int main (){
     cse s1  = {"pranto" , 405 , 4.00} ;
     cse s2  = {"pritom",406 , 3.67} ;
     printf("Student name is :%s\n", s1.name);
     printf("Student roll is :%d\n", s1.roll);
     printf("Student CGPA is :%f\n\n", s1.cgpa);
     printf("Student name is :%s\n", s2.name);
     printf("Student roll is :%d\n", s2.roll);
     printf("Student CGPA is :%f\n", s2.cgpa);

      }