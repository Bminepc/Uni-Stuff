/****************************************/
/* Benjamin Wendt, Mathis Steinhage */
/* Gruppe: Fr14, Leiter: Peter Dechering */
/* Uebungsblatt: 04, Aufgabe: B-8 */
/* Version: 1.0 */
/* Datum: 21.11.2021 */
/* Status: lauffaehig */
/****************************************/
#include<stdio.h>

int main(){
    //Deklarieren der Variable für die Kreuzgröße und der Entscheidungsvariablen zur Wiederholung der Anwendung 
    int groesse;
    int wahl;

    do{
    //Einlesen  der Variable für die Kreuzgröße
        printf("Groesse eingeben: \n");
        scanf("%d",&groesse);
        //For-Schleife geht die Zeilen durch 
        for(int i=1;i<=groesse;i++){
            //For-Schleife geht die Spalten durch
            for(int j=1;j<=groesse;j++){
                //Wenn Zeieln und Spalten sich überschneiden, wird ein Stern, andernfalls ein Leerzeichen gesetzt
                if(j==i|| (groesse+1)-j==i){
                    printf(" * ");
                }else{
                    printf("   ");
                }
            }//Nächste Zeile wird durchgangen
            printf("\n");
        }//Abfrage für die Wiederholung der Anwendung und einlesen der Entscheidungsvariablen
        printf("Nochmal? (ja:1, nein:0): \n");
        scanf("%d",&wahl);
    }while(wahl==1);
}
