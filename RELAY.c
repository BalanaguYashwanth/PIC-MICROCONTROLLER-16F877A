void main() {

TRISB=0;
while(1)
{
 PORTB.RC0=1;
 delay_ms(5000);
 PORTB.RC0=0;
 delay_ms(5000);

}
}