/**/
/* Pascal Gotzmann - 2128374            /
/ Benjamin Wendt - 2150956             /
/ Mathis Steinhage - 2156931           /
/ Erik Fladung - 2021734               /
/ Gruppe: Fr14, Leiter: Peter Dechering/
/ Uebungsblatt: 05, Aufgabe: B-9      /
/ Version: 1.0                         /
/ Datum: 28.11.2021                    /
/ Status: lauffaehig                   */
/**/
/*
 * Tue
 * drucke(Welche Stadt ist keine Landeshauptstadt?)
 * drucke(a Dresden
 *        b Magdeburg
 *        c Wuppertal
 *        d Potsdam
 *        x Menue verlassen)
 * drucke(Ihre Eingabe: )
 * Lese(Antwort)
 * Wenn Antwort = 
 * a tue
 * drucke(Falsch! Dresden ist die Landeshauptstadt Sachsens.)
 * ende
 * b tue
 * drucke(Falsch! Magdeburg ist die Landeshauptstadt Sachsen-Anhalts.)
 * ende
 * c tue
 * drucke(Richtig!)
 * ende
 * d tue
 * drucke(Falsch! Potsdam ist die Landeshauptstadt Brandenburgs.)
 * ende
 * x tue
 * drucke(Sie verlassen jetzt das Quiz. Auf Wiedersehen!)
 * ende
 * Ansonsten
 * drucke(Ihre Eingabe ist leider nicht zulaessig.)
 * während(Antwort != c oder x)
*/
#include <stdio.h>
//Initialisieren der Main-Funktion
int main(){
    //Deklarieren der Variable für die ausgewählte Antwort
    char antwort;
    char buffer;
    //Initialisieren der Do-While-Schleife für das wiederholte abfragen, bis die richtige Antwort gewählt oder das Quiz vom Benutzer abgebrochen wird
    do{
        //Ausgabe der Fragestellung und der Antwortmöglichkeiten
       printf("Welche Stadt ist keine Landeshauptstadt?\n");
       printf("a Dresden\nb Magdeburg\nc Wuppertal\nd Potsdam\nx Menue verlassen\n");
       printf("Ihre Eingabe: \n");
       //Einlesen der Antwort in die Variable "antwort"
       scanf("%c",&antwort);
       //Switch für die verschiedenen Antwortmöglichkeiten, den Quizabbruch und eine fehlerhafte Eingabe
       switch(antwort){
           //Bei jeder falschen Antwort werden die Fragestellung und die Antwortmöglichkeiten wiederholt und ein Hinweis auf den Fehler sowie die jeweilige Berichtigung wird ausgegeben
            case 'a':
               printf("Falsch! Dresden ist die Landeshauptstadt Sachsens.\n");
            break;
            case 'b':
                printf("Falsch! Magdeburg ist die Landeshauptstadt Sachsen-Anhalts.\n");
            break;
            //Richtige Antwort, das Quiz wird abgebrochen und der Hinweis auf die richtige Antwort wird ausgegeben
            case 'c':
                printf("Richtig!\n");
            break;
            case 'd':
                printf("Falsch! Potsdam ist die Landeshauptstadt Brandenburgs.\n");
            break;
            //Benutzer möchte das Quiz verlassen, das Quiz wird abgebrochen und die Bestätigung des Quizabbruchs wird ausgegeben
            case 'x':
                printf("Sie verlassen jetzt das Quiz. Auf Wiedersehen!\n");
            break;
            //Fehlerhafte Eingabe, die Fragestellung und Antwortmöglichkeiten werden wiederholt und der Hinweis auf die fehlerhafte Eingabe wird ausgegben
            default:
                printf("Ihre Eingabe ist leider nicht zulaessig.\n");
            break;
        }
    scanf("%c",&buffer);
    //Abbruchbedingung für die Do-While Schleife: Es wird solange wiederholt, bis die richtige Antwort ausgewählt oder das Quiz verlassen wird
    }while(antwort != 'c' && antwort != 'x');
    
}
