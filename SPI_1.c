unsigned int temp;
int write_EEPROM(unsigned int address, unsigned int dat)
{
unsigned int temp;
 I2C1_Start();
 I2C1_Wr(0xD0);
 temp=address>>8;
 I2C1_Wr(temp);
 I2C1_Wr(address);
 I2C1_Wr(dat);
 I2C1_Repeated_Start();
 I2C1_Wr(0xD1);
 temp=I2C1_Rd(0);
 I2C1_Stop();
 return temp;
}

void main()
{
       unsigned int a, i;
       TRISB  = 0;             // To make it output port
       PORTB = 0;              // To make it output port
       CMCON = 0x07;           // To turn off comparators
      ADCON1 = 0x06;          // To turn off analog to digital converters
      I2C1_Init(100000);
do
   {
for(i=0,a=1;i<8;i++)
      {
         write_EEPROM(i, a);
         Delay_ms(30);
         a = a<<1;
      }
  PORTB=temp;
}  while(1);
}