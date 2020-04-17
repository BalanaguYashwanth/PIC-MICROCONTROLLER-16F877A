void main()
{
TRISB=0;
        while(1)
        {
        PORTB.RB0=1;
        delay_ms(1000);
        PORTB.RB0=0;
        delay_ms(1000);
        
        }
        
}