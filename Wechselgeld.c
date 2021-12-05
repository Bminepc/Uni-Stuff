#include <stdio.h> 
// Mathis Steinhage , 28.10.2021

int main() 
{

float betrag;
int schein;
float wechselgeld;
int alle_cents , cents , euros;


printf("Wieviel muessen sie bezahlen?\n");
scanf("%f",&betrag);

printf("Mit welchem Schein moechten sie bezahlen?\n");
scanf("%d",&schein);

wechselgeld=schein-betrag;
alle_cents=wechselgeld*100;
euros=alle_cents/100;
cents=alle_cents%100;

printf("Ihr Wechselgeld betraegt %d Euro und %d Cents.\n",euros,cents);

}