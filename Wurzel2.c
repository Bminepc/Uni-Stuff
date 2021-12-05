/****************************************/
/* Benjamin Wendt, Mathis Steinhage */
/* Gruppe: Fr14, Leiter: Peter Dechering */
/* Uebungsblatt: 05, Aufgabe: B-10 */
/* Version: 1.0 */
/* Datum: 28.11.2021 */
/* Status: lauffaehig */
/****************************************/
/*
 * anrunner=0
 * an = 1
 * an+1 = 1
 * Tue
 *      an=an+1
 *      anrunner=anrunner++
 *      an+1 = ((1)/(an))+((an)/(2))
 * während(|an+1-an|>10^-12)
 * 
 * cnrunner = 0
 * cn = 1
 * cn+1 = 1
 * Tue
 *      cn = cn+1
 *      cnrunner = cnrunner++
 *      cn+1 = 1+(1)/(1+cn)
 * während(|cn+1-cn|>10^-12)
 * 
 * drucke(an+1 und anrunner und cn+1 und cnrunner)
*/
#include<stdio.h>
#include<math.h>
//Initialisiren der Main-Funktion
int main(){
    //Deklarieren der Variablen für die erste Berechnung
    int anrunner = 0;
    float an = 1;
    float anpluseins = 1;
    //Deklarieren der Variablen für die zweite Berechnung
    int cnrunner = 0;
    float cn = 1;
    float cnpluseins = 1;
    
    //Do-While Schleife für die erste Berechnung
    do{
        //Aktualisierung der Variablen an und anrunner
        an = anpluseins;
        //Zählen der Iterationsschritte
        anrunner++;
        //Berechnung von Wurzel zwei
        anpluseins = ((1)/(an)) + ((an)/(2));
    }while(fabs((anpluseins)-(an))>(pow(10,-12)));
    
    //Do-While Schleife für die zweite Berechnung
    do{
        //Aktualisierung der Variablen cn und cnrunner
        cn = cnpluseins;
        //Zählen der Iterationsschritte
        cnrunner++;
        //Berechnung von Wurzel 2
        cnpluseins = (1+((1))/(1+cn));
    }while(fabs((cnpluseins)-(cn))>(pow(10,-12)));
    
    //Ausgabe der Ergebnisse der Rechnungen und der benöigten Iterationsschritte
    printf("%.10f nach %d Iterationsschritten\n%.10f nach %d Iterationsschritten\n",anpluseins,anrunner,cnpluseins,cnrunner);
    
}
