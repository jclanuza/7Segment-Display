#define a pin_b0
#define b pin_b1
#define c pin_b2
#define d pin_b3
#define e pin_b4
#define f pin_b5
#define g pin_b6

extern void segment_drive_com_cat(int8 dec)
{
   switch(dec)
   {
      case 0: { output_b(0b0111111); break; }
      case 1: { output_b(0b0000110); break; }
      case 2: { output_b(0b1011011); break; } 
      case 3: { output_b(0b1001111); break; }
      case 4: { output_b(0b1100110); break; }
      case 5: { output_b(0b1101101); break; }
      case 6: { output_b(0b1111101); break; }
      case 7: { output_b(0b0000111); break; }   
      case 8: { output_b(0b1111111); break; }
      case 9: { output_b(0b1100111); break; }
      case 10: { output_b(0b1110111); break; } // a 
      case 11: { output_b(0b1111100); break; } // b 
      case 12: { output_b(0b1011000); break; } // c
      case 13: { output_b(0b0100001); break; } // d 
      case 14: { output_b(0b1111001); break; } // e 
      case 15: { output_b(0b1110001); break; } // f     
      default : { break; }
   }
}

extern void segment_drive_com_and(int8 dec)
{
   switch(dec)
   {
      case 0: { output_b(0b1000000); break; }
      case 1: { output_b(0b1111001); break; }
      case 2: { output_b(0b0100100); break; }
      case 3: { output_b(0b0110000); break; }
      case 4: { output_b(0b0011001); break; }
      case 5: { output_b(0b0010010); break; }
      case 6: { output_b(0b0000010); break; }
      case 7: { output_b(0b1111000); break; }   
      case 8: { output_b(0b0000000); break; }
      case 9: { output_b(0b0011000); break; }
      case 10: { output_b(0b0001000); break; } // a
      case 11: { output_b(0b0000011); break; } // b
      case 12: { output_b(0b0100111); break; } // c
      case 13: { output_b(0b0100001); break; } // d
      case 14: { output_b(0b0000110); break; } // e
      case 15: { output_b(0b0001110); break; } // f     
      default : { break; }
   }
}
