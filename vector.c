#include<stdio.h>

struct vector {
   int x ;
   int y ;
};
   void calculation_vector (struct vector v1, struct vector v2, struct vector sum );
   int main (){
      struct vector v1 = {5,7};
      struct vector v2 = {3,10};
      struct vector sum= {0}; 
         calculation_vector (v1,v2,sum);
         return 0 ;
   }
   void calculation_vector (struct vector v1, struct vector v2, struct vector sum ){
      sum.x = v1.x + v2.x;
      sum.y = v1.y + v2.y;
      printf("The sum of 2d vector is : x= %d  y= %d", sum.x, sum.y);
   }
   