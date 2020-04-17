unsigned int uart_value;

void interrupt(void)
{
INTCON.GIE=0;
if(RCIF_bit=='1' && INTCON.INTF==1)
{
uart_value=UART1_Read();
PORTB.RB1=uart_value;
}
RCIE_bit=0;
INTCON.GIE=1;
INTCON.INTF=0;
PORTB.RB1=0;
}


void main() {

 TRISB.RB0=1;
 TRISB.RB1=0;
 UART1_Init(9600);
 UART1_Write_Text("HI i am yash please enter zero");
 INTCON.GIE=1;
 INTCON.INTE=1;
 INTCON.PEIE=1;
 RCIE_bit=1;
 RCIF_bit=0;

 while(1)
 {
 PORTB.RB1=1;
 delay_ms(1000);
 }

}