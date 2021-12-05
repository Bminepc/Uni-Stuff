#include<stdio.h>

// Funktion monatszinsen(k, p) liefert
// die beim angegebenen (Jahres-)Zinssatz von p Prozent für
// den Kreditbetrag k monatlich zu zahlenden Zinsen zurück.
float monatszinsen(float k,float p)
{
    float zinsen;
    
    zinsen = k * (p / 100.0 / 12);
    
    return zinsen;
}

// Hauptfunktion: Liest die Daten des Kredits ein und gibt
// für die gesamte Laufzeit den Stand am Monatsende aus
int main(void)
{
    float kreditbetrag, zinssatz, rate, kreditbetrag_o;
    int laufzeit;
    
    printf("Kreditbetrag (in Euro) eingeben: ");
    scanf("%f", &kreditbetrag);
    printf("Zinssatz (in Prozent) eingeben: ");
    scanf("%f", &zinssatz);
    printf("Laufzeit (in Monaten) eingeben: ");
    scanf("%d", &laufzeit);
    printf("Monatliche Rate (in Euro) eingeben: ");
    scanf("%f", &rate);
    
    kreditbetrag_o = kreditbetrag;
    //Extra fall für den letzten machenhezhbed
    for (int i =1;i<=laufzeit;i++){
        kreditbetrag = kreditbetrag + monatszinsen(kreditbetrag, zinssatz) - rate;
        if(kreditbetrag<=0){
            printf("Kreditbetrag nach %2d Monaten: 0 Euro\n", i);
            i=laufzeit;
        }else{
            printf("Kreditbetrag nach %2d Monaten: %.2f Euro\n", i, kreditbetrag);
        kreditbetrag_o = kreditbetrag_o + monatszinsen(kreditbetrag_o, zinssatz) - rate;
        }
    }
    printf("Letzte Rate betrug: %.2f Euro.\n",kreditbetrag_o);
}
    /*while(monat <= laufzeit && kreditbetrag>0)
    {
        kreditbetrag = kreditbetrag + monatszinsen(kreditbetrag, zinssatz) - rate;
        if(kreditbetrag<=0){
            printf("Kreditbetrag nach %2d Monaten: 0 Euro\n", monat);
        }else{
            printf("Kreditbetrag nach %2d Monaten: %.2f Euro\n", monat, kreditbetrag);
        }
        monat = monat + 1;
    }
    printf("Letze Ratä betrug: %.2f Euro.\n",kreditbetrag*(-1));
}*/
