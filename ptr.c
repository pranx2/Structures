#include<stdio.h>
#include<string.h>

struct student 
{
   char name [ 100 ];
   int roll;
   float cgpa;
};

int main()
{
   struct student s1= { "pranto" , 405 , 4.00};
   struct student *ptr = &s1;
   printf("Name = %s\n",ptr->name);
   printf("Roll = %d\n",ptr->roll);
   printf("Cgpa = %f\n",ptr->cgpa);
    
      
   return 0;
}
