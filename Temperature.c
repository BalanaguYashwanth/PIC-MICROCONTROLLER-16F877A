
sbit LCD_RS at RB1_bit;

sbit LCD_EN at RB2_bit;



sbit LCD_D7 at RC3_bit;

sbit LCD_D6 at RC2_bit;

sbit LCD_D5 at RC1_bit;

sbit LCD_D4 at RC0_bit;

// End LCD module connections

// LCD Pin direction

sbit LCD_RS_Direction at TRISB1_bit;

sbit LCD_EN_Direction at TRISB2_bit;

sbit LCD_D7_Direction at TRISC3_bit;

sbit LCD_D6_Direction at TRISC2_bit;

sbit LCD_D5_Direction at TRISC1_bit;

sbit LCD_D4_Direction at TRISC0_bit;


unsigned int value;
int adc_value;
char adc_s[10];

void main() {

TRISB.RB0=0;

ADC_Init();
LCD_Init();
LCD_Cmd(_LCD_CLEAR);

do
{
value = ADC_Read(0);
adc_value=(value*5000)/(1024);
adc_value=(adc_value)/10;
IntToStr(adc_value,adc_s);
LCD_Out(1,1,adc_s);
}while(1);

}