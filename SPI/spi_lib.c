#ifndef SPILIB_C
#define SPILIB_C

#define SCK                  PIN_C3
#define SDI                  PIN_C4
#define SDO                  PIN_C5
#define DELAY                delay_us(5);


void spi_sdi(unsigned int8 data)
{  
   for(int i=0; i<8; i++)
   {     
      if ((data & 0x80)) output_high(SDI);
      else output_low(SDI);
      
      DELAY
      output_high(SCK);
      DELAY
      
      data = data << 1;
      
      output_low(SCK);
   }
}

#endif // SPILIB_C
