
#include <hidef.h>      /* common defines and macros */
#include "derivative.h"      /* derivative-specific definitions */
#include "lcd.h"



/*    GULZADA IISAEVA 131044085


Odevde Timer Over Kullanarak Do Re Mi Fa Sol La Si notalarinin her biri 0.5 saniye calacak sekilde
ayarladim.  Her biri icin Portb yi yaktim

3 tane melody icin her birine  30 nota cagirildi sonucta 15 saniye  

Seven Segmentte melodi ye gore ilk basta 1 saniye delay ile  00 01 11 10 yanacak , sonra sarki calacak
*/


/*

Notalari * 10000 ile carpip Tcounta eklendi

do  c  523.251Hz = 1.9111286934951 ms(p)
re  d 587.33Hz = 	1.702620332692 ms(p)
mi  e 659.255Hz =  1.5168637325466 ms(p)
fa  f 698.456Hz  = 1.4317294145945 ms(p)
sol g  783.991Hz = 1.2755248465862 ms(p)
la  a 880Hz   = 1.1363636363636 ms(p)
si  b 987.767Hz = 1.0123844995834 ms(p)

*/

unsigned int Tcount;

unsigned int i=0;


void melodyFirst();
void melodySecond();
void melodyThird();
void melodyTogether();
  
                       
void noteCDo ();
void noteDRe ();
void noteEMi ();
void noteFFa ();
void noteGSol ();
void noteALa ();
void noteBSi ();
void delay();


void main(void) 
{     
      
       unsigned int z=0;     
 
       DDRT = DDRT | 0x20;    // PTT5 as output 
       DDRP  = 0xFF;
       DDRB  = 0xFF; 
       DDRH = 0x00;
      
       TSCR1= 0x80;
       TSCR2 = 0x00;
       TCTL1 = 0x04;
       
      
      
       while(1){
        
       switch(PTH) {
        
        case 1: 
        DDRP = 0x0E;
        PORTB= 0xBF ; 
        delay();
        DDRP = 0x0D;
        PORTB= 0x06 ;
        delay();
        TIOS = 0x20;
        melodyFirst();
        TIOS = 0x00;
        break;  
        case 2:
        DDRP = 0x0E;
        PORTB= 0x06 ; 
        delay();
        DDRP = 0x0D;
        PORTB= 0xBF ; 
        delay();
        TIOS = 0x20; 
        melodySecond();
        TIOS = 0x00;
        break;
        case 3: 
        DDRP = 0x0E;
        PORTB= 0x06 ; 
        delay();
        DDRP = 0x0D;
        PORTB= 0x06 ; 
        delay();
        TIOS = 0x20;
        melodyThird();
        TIOS = 0x00;
        break;
        case 0:
       
        DDRP = 0x0E;
        PORTB= 0xBF ; 
        delay();
        DDRP = 0x0D;
        PORTB= 0xBF ; 
        delay(); 
         TIOS = 0x20; 
        melodyTogether();
        TIOS = 0x00;
        break; 
        default: break;
       }  
       }
   
}


void melodyTogether() {
        noteEMi ();
        noteDRe ();
        noteCDo ();
        noteDRe ();
        noteEMi ();
        noteEMi ();
        noteEMi ();
        noteDRe ();
        noteDRe ();
        noteDRe ();   
        
        noteEMi ();
        noteEMi ();
        noteEMi ();
        noteEMi ();
        noteEMi ();
        noteEMi ();
        
        noteEMi ();
        noteGSol ();
        noteCDo ();
        noteDRe ();
        
        
        noteCDo ();
        noteDRe ();
        noteEMi ();
        noteFFa ();
        noteGSol ();
        noteALa ();
        noteBSi ();
        
        noteCDo ();
        noteDRe ();
        noteEMi ();
}

/*    mary had a little lamb*/
void melodyFirst() {
    
        noteEMi ();
        noteDRe ();
        noteCDo ();
        noteDRe ();
        noteEMi ();
        noteEMi ();
        noteEMi ();
        noteDRe ();
        noteDRe ();
        noteDRe ();
        noteEMi ();
        noteEMi ();
        noteEMi ();
        noteEMi ();
        noteDRe ();
        noteCDo ();
        noteDRe ();
        noteEMi ();
        noteEMi ();
        noteEMi ();
        noteEMi ();
        noteDRe ();
        noteDRe ();
        noteEMi ();
        noteDRe ();
        noteCDo ();
        noteEMi ();
        noteDRe ();
        noteCDo ();
        noteDRe ();
        noteEMi ();
        noteEMi ();
        noteEMi ();
        noteDRe ();
        noteDRe ();
        noteDRe ();
        noteEMi ();
        noteEMi ();
        noteEMi ();
        noteEMi ();
        noteDRe ();
        noteCDo ();
        noteDRe ();
        noteEMi ();
        noteEMi ();
        noteEMi ();
        noteEMi ();
        noteDRe ();
        noteDRe ();
        noteEMi ();
        noteDRe ();
        noteCDo ();
        noteEMi ();
        noteDRe ();
        noteCDo ();
        noteDRe ();
        noteEMi ();
         noteEMi ();
        noteEMi ();
        noteDRe ();
        
        
    
}
    
 /*jingle bells*/
void melodySecond() {

        noteEMi ();
        noteEMi ();
        noteEMi ();
        noteEMi ();
        noteEMi ();
        noteEMi ();
        
        noteEMi ();
        noteGSol ();
        noteCDo ();
        noteDRe ();
        noteEMi ();
        
        noteFFa ();
        noteFFa ();
        noteFFa ();
        noteFFa ();
        noteFFa ();
        noteEMi ();
        noteEMi ();
        
        noteEMi ();
        noteEMi ();
        noteEMi ();
        noteDRe ();
        noteDRe ();
        noteEMi ();
        noteDRe ();
        noteGSol ();
        
        
        noteEMi ();
        noteEMi ();
        noteEMi ();
        noteEMi ();
        noteEMi ();
        noteEMi ();
        
         noteEMi ();
        noteGSol ();
        noteCDo ();
        noteDRe ();
        noteEMi ();
        
        noteFFa ();
        noteFFa ();
        noteFFa ();
        noteFFa ();
        noteFFa ();
        noteEMi ();
        noteEMi ();
        
        noteEMi ();
        noteEMi ();
        noteEMi ();
        noteDRe ();
        noteDRe ();
        noteEMi ();
        noteDRe ();
        noteGSol ();
        
         noteGSol ();
         noteEMi ();
         noteDRe ();
         noteCDo ();
         noteGSol ();
         noteGSol ();
         noteGSol ();
         noteGSol ();
         noteEMi ();
        
        
        
  
}  

void melodyThird() {
  
        
       
        noteCDo ();
        noteDRe ();
        noteEMi ();
        noteFFa ();
        noteGSol ();
        noteALa ();
        noteBSi ();
        
        noteCDo ();
        noteDRe ();
        noteEMi ();
        noteFFa ();
        noteGSol ();
        noteALa ();
        noteBSi ();
        
        noteCDo ();
        noteDRe ();
        noteEMi ();
        noteFFa ();
        noteGSol ();
        noteALa ();
        noteBSi ();
        
        noteCDo ();
        noteDRe ();
        noteEMi ();
        noteFFa ();
        noteGSol ();
        noteALa ();
        noteBSi ();
         noteCDo ();
        noteDRe ();
        noteEMi ();
        noteFFa ();
        noteGSol ();
        noteALa ();
        noteBSi ();
        
        noteCDo ();
        noteDRe ();
        noteEMi ();
        noteFFa ();
        noteGSol ();
        noteALa ();
        noteBSi ();
        
        noteCDo ();
        noteDRe ();
        noteEMi ();
        noteFFa ();
        noteGSol ();
        noteALa ();
        noteBSi ();
        
        noteCDo ();
        noteDRe ();
        noteEMi ();
        noteFFa ();
        noteGSol ();
        noteALa ();
        noteBSi ();
        noteCDo ();
        noteDRe ();
        noteEMi ();
        noteFFa ();
        
        
       
}    

void delay() {
 
 int count=366;
 
 TFLG2 = 0x80;
 
 while(count !=0 ) {
  while(!(TFLG2 & 0x80));
  TFLG2 = 0x80;
  --count;
 }
}


void noteCDo () {
    
        int count=183/2;
        TFLG2 = 0x80;
        
        while(count !=0 ) {
        while(!(TFLG2 & 0x80)) {
         Tcount = TCNT;
         Tcount = Tcount + 19110;
         TC5 = Tcount;
         
         while(!(TFLG1 & TFLG1_C5F_MASK));
         TFLG1 = TFLG1 | TFLG1_C5F_MASK ;
         PORTB = 0;   
        }
        TFLG2 = 0x80;
        --count;
       }
         
         
        
         
}

void noteDRe () {

        int count=183/2;
        TFLG2 = 0x80;
        
        while(count !=0 ) {
        while(!(TFLG2 & 0x80)) {
         Tcount = TCNT;
         Tcount = Tcount + 17020;
         TC5 = Tcount;
         
         while(!(TFLG1 & TFLG1_C5F_MASK));
         TFLG1 = TFLG1 | TFLG1_C5F_MASK ; 
          PORTB = 1;   
        }
        TFLG2 = 0x80;
        --count;
       }
         
    
     
}

void noteEMi () {

        int count=183/2;
        TFLG2 = 0x80;
        
        while(count !=0 ) {
        while(!(TFLG2 & 0x80)) {
         Tcount = TCNT;
         Tcount = Tcount + 15160;
         TC5 = Tcount;
         
         while(!(TFLG1 & TFLG1_C5F_MASK));
         TFLG1 = TFLG1 | TFLG1_C5F_MASK ;
         PORTB = 2;   
        }
        TFLG2 = 0x80;
        --count;
       }
    
        
}

void noteFFa () {

        int count=183/2;
        TFLG2 = 0x80;
        
        while(count !=0 ) {
        while(!(TFLG2 & 0x80)) {
         Tcount = TCNT;
         Tcount = Tcount + 14310;
         TC5 = Tcount;
         
         while(!(TFLG1 & TFLG1_C5F_MASK));
         TFLG1 = TFLG1 | TFLG1_C5F_MASK ; 
         PORTB = 3;  
        }
        TFLG2 = 0x80;
        --count;
       }
    
         
}

void noteGSol () {

        int count=183/2;
        TFLG2 = 0x80;
        
        while(count !=0 ) {
        while(!(TFLG2 & 0x80)) {
         Tcount = TCNT;
         Tcount = Tcount + 12750;
         TC5 = Tcount;
         
         while(!(TFLG1 & TFLG1_C5F_MASK));
         TFLG1 = TFLG1 | TFLG1_C5F_MASK ;
         PORTB = 4;   
        }
        TFLG2 = 0x80;
        --count;
       }
    
         
}
void noteALa () {
        
        int count=183/2;
        TFLG2 = 0x80;
        
        while(count !=0 ) {
        while(!(TFLG2 & 0x80)) {
         Tcount = TCNT;
         Tcount = Tcount + 11360;
         TC5 = Tcount;
         
         while(!(TFLG1 & TFLG1_C5F_MASK));
         TFLG1 = TFLG1 | TFLG1_C5F_MASK ;  
         PORTB = 5; 
        }
        TFLG2 = 0x80;
        --count;
       }
    
         
}


void noteBSi () {
        
        int count=183/2;
        TFLG2 = 0x80;
        
        while(count !=0 ) {
        while(!(TFLG2 & 0x80)) {
         Tcount = TCNT;
         Tcount = Tcount +  10120;
         TC5 = Tcount;
         
         while(!(TFLG1 & TFLG1_C5F_MASK));
         TFLG1 = TFLG1 | TFLG1_C5F_MASK ;
         PORTB = 6;   
        }
        TFLG2 = 0x80;
        --count;
       }
     
}
