#include <stdio.h>
#include <stdlib.h>

int main()
{
  float a,b;
  char c;

printf("entrer une operation :\n");
scanf("%f\t%c\t%f",&a,&c,&b);
if(c=='+'){
    printf("le resultat est:%.2f",a+b);
}
else if(c=='-'){
    printf("le resultat est:%.2f",a-b);
}
else if(c=='*'){
    printf("le resultat est:%.2f",a*b);
}
else {
    printf("le resultat est:%.2f",a/b);
}

}
