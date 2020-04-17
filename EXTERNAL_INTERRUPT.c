void interrupt(void)
{
INTCON.GIE=0;
if(INTCON.INTF)
{

PORTB.RB1=0;

}
INTCON.GIE=1;
INTCON.INTF=0;
}

void main() {

 TRISB.RB0=1;
 TRISB.RB1=0;
 INTCON.GIE=1;
 INTCON.INTE=1;
 
 while(1)
 {
 if(INTCON.INTF==0)
 {
 PORTB.RB1=1;
 delay_ms(1000);
 }
 //PORTB.RB0=0;
 //delay_ms(1000);
 }

}