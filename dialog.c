/****************************************/
/* Benjamin Wendt, Mathis Steinhage */
/* Gruppe: Fr14, Leiter: Peter Dechering */
/* Uebungsblatt: 03, Aufgabe: B-6 */
/* Version: 1.0 */
/* Datum: 14.11.2021 */
/* Status: lauffaehig */
/****************************************/

#include <stdio.h>
// Beginn der Main-Funktion
int main() {
    // Deklarierung der Entscheidungsvariable
    int entscheidung;
    // Abfrage der ersten Frage und einlesen der Entscheidung
    printf("Bist du schon mal Schwebebahn gefahren? (0:ja, 1:nein) \n");
    scanf("%d",&entscheidung);
    // Erste Verzweigung 
    if (entscheidung==0){
        // Abfrage der zweiten Frage und einesen der Entscheidung
        printf("Bist du schon mal herausgesprungen? (0:ja, 1:nein) \n");
        scanf("%d",&entscheidung);
        // Zweite Verzweigung
        if (entscheidung==0){
            // Abfrage der dritten Frage und einlesen der Entscheidung
            // Für die dritte Frage werden zwei If Anweisungen verwendet, da es drei Antwortmöglichkeiten gibt
            printf("Bist du ein Elefant? (0:ja, 1:ich weiß nicht, 2:nein)\n");
            scanf("%d",&entscheidung);
            if (entscheidung==0){
                printf("Hallo Tuffi!\n");
            } else{
                if (entscheidung==1){
                    printf("Dann schau in den Spiegel!\n");
                    }else{
                        printf("Hoffentlich hast du dich nicht verletzt!\n");
                    }
            }
        }else {
                printf("Gut so!\n");
            }
    
    }else {
            printf("Dann probiere es mal!\n");
        }
    
    return 1;
}
