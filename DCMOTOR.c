void main() {

TRISC=0;
PORTB=0;

while(1)
{
PORTB=0x01;
delay_ms(1000);

PORTB=0x00;
delay_ms(1000);

PORTB=0x02;
delay_ms(1000);

PORTB=0x03;
delay_ms(1000);
}
}
