
void interrupt(void)
{
if(INTCON.INTF)
{
PORTB.RB1=0;
}
INTCON.INTF=0;

}

void main()
{
TRISB.RB0=1;
TRISB.RB1=0;
INTCON.INTE=1;
INTCON.GIE=1;
while(1)
{
PORTB.RB1=1;
delay_ms(1000);

}

}