unsigned int temp;
int write_EEPROM(unsigned int address,unsigned int data)
{
 unsigned int temp;
 I2C1_Start();
 I2C1_Wr(0xD0);
 temp=address>>8;
 I2C1_Wr(temp);
 I2C1_Wr(address);
 I2C_Wr(data);
 I2C1_Repeated_Start();
 I2C1_Wr(0xD1);
 temp=I2C1_Read(0);
 I2C1_Stop();
 return temp;
}

void main()
{
unsigned int a,i;
TRISB=0;
I2C1_Init(10000);
do{
for(i=0,a=1,i<3;i++)
{
write_EEPROM(i,a);
delay_ms(100);
a=a<<i;
}
PORTB=temp;
}while(1);
}
