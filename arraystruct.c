#include<stdio.h>
#include<string.h>

   struct student
   {
      char name [100];
      int roll ;
      float cgpa;
   };

      int main(int argc, char const *argv[])
      {
         struct student CSE [100];
      //Student-1;   
         char name_c [100] = "Pranto";
         strcpy (CSE[0].name , name_c);
            CSE[0].roll = 401 ;
            CSE[0].cgpa = 4.00;
               printf("Student Name = %s\n",CSE[0].name);
               printf("Student Roll = %d\n",CSE[0].roll);
               printf("Student CGPA = %.2f\n\n",CSE[0].cgpa);

         //Student-2;
         char name2_c [100] = "Pritom";
         strcpy (CSE[1].name , name2_c);
            CSE[1].roll = 402 ;
            CSE[1].cgpa = 3.25;
               printf("Student Name = %s\n",CSE[1].name);
               printf("Student Roll = %d\n",CSE[1].roll);
               printf("Student CGPA = %.2f\n\n",CSE[1].cgpa); 
         //Student-3;
         char name3_c [100] = "Rofiq";
         strcpy (CSE[2].name , name3_c);
            CSE[2].roll = 403;
            CSE[2].cgpa = 3.35;
               printf("Student Name = %s\n",CSE[2].name);
               printf("Student Roll = %d\n",CSE[2].roll);
               printf("Student CGPA = %.2f\n\n",CSE[2].cgpa);          


         struct student EEE[100];
         //Student-1;
         char name_e [100] = "Rukeya";
         strcpy(EEE[0].name , name_e);
         EEE[0].roll = 501 ;
         EEE[0].cgpa = 3.00;
            printf("Student Name = %s\n",EEE[0].name);
            printf("Student Roll = %d\n",EEE[0].roll);
            printf("Student CGPA = %f\n\n",EEE[0].cgpa);

         return 0;
      }
      