#include <stdio.h>
#include <stdlib.h>

int main()
{

/*
int x,y,r,c;
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
*/



int x,y,i=0;
float r;
 char c;
printf("calculatrice\n");
while(i==0){


scanf("\n%d %c %d",&x,&c,&y);

if(c=='+')
{
    r=x+y;
    printf("\n%d %c %d = %.2f",x,c,y,r);
}

else if(c=='-')
{
    r=x-y;
    printf("\n%d %c %d = %.2f",x,c,y,r);
}

else if(c=='/')
{
    r=x/y;
    printf("\n%d %c %d = %.2f",x,c,y,r);
}


else if(c=='*')
{
    r=x*y;
    printf("\n%d %c %d = %.2f",x,c,y,r);
}

else
    printf("invalide\n");




}









    return 0;
}
