#include<stdio.h>
   typedef struct address {
      int house_no;
      int block;
      char city[100];
      char state[200];
   } info;
   void information (struct address);//Function declared;

      int main(){
         info Pranto = {10,8,"Dhaka","mirpur-10"};
         info Antu = {20,9,"Dhaka","mirpur-14"};
         info Niloy = {30,10,"Dhaka","mirpur-2"};
         info Ovi = {40,11,"Dhaka","mirpur-1"};
         info joy = {50,12,"Dhaka","mirpur-6"};

            printf("\nPranto's information:\t");
            information (Pranto);
            printf("\nAntu's information:\t");
            information (Antu);
            printf("\nantu's information:\t");
            information (Niloy);
            printf("\nOvi's information:\t");
            information (Ovi);
            printf("\njoy's information:\t");
            information (joy);
         return 0;   
       }
//Function define;
       void information (struct address I){
            printf("House no : %d\t",I.house_no);
            printf("Block no : %d\t",I.block);
            printf("City : %s\t",I.city);
            printf("state: %s\t",I.state);
       }