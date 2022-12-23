#include "setup.h"
#include "spi_lib.c"

void main()
{     
   output_high(SDI);
   output_high(SCK);
   
   spi_sdi(0xA3);
   delay_ms(100);
   
   spi_sdi(0x50);
   delay_ms(100);
   
   spi_sdi(0x41);
   delay_ms(100);
   
   spi_sdi(0x32);
   delay_ms(100);
   
   spi_sdi(0x23);
   delay_ms(100);
   
   spi_sdi(0x14);
   delay_ms(100);
   
   spi_sdi(0x05);
   delay_ms(100);
   
   while(TRUE);
}
