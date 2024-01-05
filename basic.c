#include<stdio.h>
#include<string.h>
   //Structure  Define;
   struct student
   {
      char name[100] ;
      int  roll;
      float cgpa; 
   };
   
      int main(int argc, char const *argv[])
      {
         //Student S1;
         struct student s1;
         char name1 [ 100 ] = "PRANTO";
          strcpy( s1.name , name1 );
            s1.roll = 405 ;
            s1.cgpa = 4.00 ; 
            //output;
          printf("Student Name  = %s\n",s1.name); 
          printf("Student Roll  = %d\n",s1.roll); 
          printf("Student CGPA  = %0.2f\n",s1.cgpa);

          //Student S2;
          struct student s2;
          char name2 [ 100 ] = "PRITOM";
          strcpy ( s2.name , name2 );
            s2.roll = 406 ; 
            s2.cgpa = 3.75;

            //Output;
         printf("Student Name = %s\n",s2.name);    
         printf("Student Roll = %d\n",s2.roll);    
         printf("Student CGPA = %0.2f\n",s2.cgpa);    

         return 0;
      }
      