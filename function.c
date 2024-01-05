#include<stdio.h>
#include<string.h>
   //Structure Define;
   struct student 
   {
      char name [100];
      int roll ;
      float cgpa;
   };
   //function define;
   void student_info (struct student s);
     int main (){
      struct student s1 = {"PRANTO",405,4.000};
      student_info (s1);//call by value;
      
     }
   void student_info (struct student s){ //Call by value function;
      printf("\n\nStudent information:\n\n");
      printf("Student.Name = %s\n",s.name);
      printf("Student.Roll = %d\n",s.roll);
      printf("Student.CGPA = %f\n",s.cgpa);
   }