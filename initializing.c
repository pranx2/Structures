#include<stdio.h>
#include<string.h>

   struct student
   {
      char name [100];
      int roll;
      float cgpa;
   };
      int main()
      {
         struct student s1 = {"PRANTO" , 405 , 4.00};
               printf("Student name = %s\n",s1.name);
               printf("Student Roll = %d\n",s1.roll);
               printf("Student CGPA = %.2f\n",s1.cgpa);
         return 0;
      }
      