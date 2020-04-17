
unsigned int adc_value;
char adc_s[10];

void main() {
 TRISB.RB0=0;
 PWM1_Init(1000);
 ADC_Init();
 
 do{
 adc_value=ADC_Get_Sample(0);
 IntToStr(adc_value,adc_s);
 PWM1_Set_Duty(adc_value);
 
 }while(1);

}