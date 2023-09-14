#include <stdio.h>
#include <stdlib.h>

int main()
{
  float a,b;
  char c;

printf("entrer une operation :\n");
scanf("%f\t%c\t%f",&a,&c,&b);

switch(c){
case '+':
    printf("le resultat est :%.2f",a+b);
    break;
case '-':
    printf("le resultat est :%.2f",a-b);
    break;
case '*':
    printf("le resultat est :%.2f",a*b);
    break;
case '/':
    if(a!=0 && b!=0){
    printf("le resultat est :%.2f",a/b);
    }
    else{
    printf("la division par 0 est impossile.");
    }
    break;

default:
   printf("erreur");

}
return 0;
}

