#include<stdio.h>

int main(){
    unsigned a = 0b0000000011111111;
    unsigned b = 0b0000111100001111;
    unsigned c = 0b0011001100110011;
    unsigned d = 0b0101010101010101;
    unsigned al, bl, cl, dl, e, g, i, h, f;
    
    
    printf(" | A | B | C | D || E | G | H | I | F | \n-+---+---+---+---++---+---+---+---+---+-\n");

    for (int loop = 15; loop >=0; loop--){
        al = (a>>loop)&1u;
        bl = (b>>loop)&1u;
        cl = (c>>loop)&1u;
        dl = (d>>loop)&1u;
        e = al&!bl; //Aussage E
        g = cl|!dl; //Aussage G
        h = !e|g; //Aussage H
        i = (al|bl)|dl; //Aussage I
        f = h==i; //Aussage F

        printf(" |%u  |%u  |%u  |%u  ||%u  |%u  |%u  |%u  |%u  | \n",al,bl,cl,dl,e,g,h,i,f);//Ausgabe aller Aussagen
  
    }

    
    
}
    
    
