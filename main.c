#include <18f4620.h>
#use delay(clock=32M)
#fuses INTRC_IO, NOFCMEN, NOIESO, PUT, NOBROWNOUT, NOWDT
#fuses NOPBADEN, NOMCLR, STVREN, NOLVP, NODEBUG



void main(void){

    
      unsigned int8 contador1 = 128;   
      unsigned int8 contador2 = 8;
      unsigned int8 resultado = 0;       
      unsigned int8 varDesplazar = 0; 
      unsigned int8 varDesplazar2 = 0;
      
    
      setup_oscillator(OSC_32MHZ);
      
      set_tris_a(0b110101);
      set_tris_b(0b00110000);
      set_tris_c(0b10101010);
      set_tris_d(0x00);
      
      while(true){
         
        
        contador1 >>=1;
         output_d(contador1);
         
         contador2>>=1;
         output_d(contador2);
         delay_ms(500);
         
         varDesplazar++;
        
         if(varDesplazar == 8){
            contador1 = 128;
            contador2 = 128;
            varDesplazar = 0;
          
         }     
      }
}
