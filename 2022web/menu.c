#include<stdio.h>
#include<math.h>
#include<stdlib.h>


//User defined function declaration

int main_menu();
int products();
double payment();
int customer();

//User defined sub menus



//under products

int home_products();
int electronics();

int add_products();
int remove_products();
int products_quantity();

//Under payment

double billing();

//under customer menu()

int customer_inf();
int edit_customer();




int main ()
{
int input;

printf("                              Hello ADMIN\n                          SHIRONAMHIN Super Shop\n================================================================================");
printf("                              -Products\n                              -Payment/Billing\n                              -Customer information\n");
printf("\n");
printf(" Press One for Products \n Press two for Billing \n Press Three for Customer information \n Press 0 to terminate program");
scanf("\n%d", &input);
if(input==0)
{
    return 0;  //Program will be terminated if 0 is pressed
}
switch(input)
{
case 1:
    if(input==1)
    {
        products();
    }
    break;
case 2:
    if(input==2)
    {
        payment();
    }
    break;
case 3:
    if(input==3)
    {
        customer();
    }
    break;

default:
    printf("Enter a valid number");
    break;
}
 }


  int products()

  {
    int input;
printf("\n                              -Home products\n                              -Electronics\n\n Press any key rather than 1 and 2 two return to main menu");

scanf("%d", &input);

switch (input)
{
case 1:
    if(input == 1)
        home_products();
    break;

case 2:
    if(input == 2)
        electronics();
    break;

default:
    main();
    break;
}

   }

   int home_products()
     {
      int input;
         printf("Code yet to be written\n\n return to main menu by pressing 1 on the keyboard");
    scanf("%d", &input);
      if(input == 1)
       {
         return main();
     }


      }

   int electronics()
       {
      printf("Code yet to be written");
        }

      double payment()
      {

        return main();

      }

      int customer()
          {
     printf("Code yet to be written");

      return main();
          }
