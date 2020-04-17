char uart_read,error;
void main() {
TRISB=0;
error = Soft_UART_Init(&PORTC, 7, 6, 9600, 0);
delay_ms(500);
UART1_Write_Text("Hi welcome to electronic");
delay_ms(100);
UART1_Write_Text("Press 1.LED 2.LED 3.LED ");


while(1)
{
if(Soft_UART_READ(&error))
{
 uart_read=Soft_UART_Read(&error);
 switch(uart_read)
 {
 case '1': PORTB.RB0=1;
           PORTB.RB1=0;
           PORTB.RB2=0;
  break;
  case '2': PORTB.RB0=0;
           PORTB.RB1=1;
           PORTB.RB2=0;
  break;

  case '3': PORTB.RB0=0;
           PORTB.RB1=0;
           PORTB.RB2=1;
  break;
 
 }
 }
 }
}