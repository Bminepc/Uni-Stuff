#include <stdio.h>

int main()
{
float nettopreis,bruttopreis;
float steuersatz;

printf("Bitte geben sie einen Nettopreis ein: ");
scanf("%f",&nettopreis);

printf("Bitte geben sie einen Steuersatz ein: ");
scanf("%f",&steuersatz);

bruttopreis = (nettopreis*((steuersatz/100)+1));

printf("Der Bruttopreis beträgt %.2f Euro\n",bruttopreis);

}

