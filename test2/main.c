#include <stdio.h>
#include <stdlib.h>

int main()
{
 int x,y,r,c;
/*

    float y=7.5;

    char nom []="othmane";



    printf("hello fati \n");
    printf("hello adnane\n");
    printf(" x = %d et y = %.2f",x,y);
    printf(" \n my name is %s",nom);





   printf("donnez moi un nombre");

   scanf("%d",&x);
    printf("\ndonnez moi un nombre");

   scanf("%d",&y);

   r=x+y;

   printf("\n la somme est %d",r);

*/


    printf(" 1_addition \n 2- soustraction\n 3_division \n 4_multiplication ");

    scanf("%d",&c);

     printf("donnez moi un nombre");

   scanf("%d",&x);
    printf("\ndonnez moi un autre nombre");

   scanf("%d",&y);


    switch(c){

  case 1:
    {
       r=x+y;

   printf("\n la somme est %d",r);

    }

break;



    case 2:
    {
             r=x-y;

   printf("\n la soustraction est %d",r);
    }

break;




     case 3:
    {
        r=x/y;

   printf("\n la division est %d",r);
    }

break;




     case 4:

    {
       r=x*y;

   printf("\n la multiplication est %d",r);
    }

break;






    };








    return 0;
}
