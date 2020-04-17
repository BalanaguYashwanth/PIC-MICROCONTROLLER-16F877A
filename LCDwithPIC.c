#define LCD_RS_PIN PIN_C0
#define LCD_RW_PIN PIN_C1
#define LCD_ENABLE_PIN PIN_C2
#define LCD_DATA4 PIN_C3
#define LCD_DATA5 PIN_C4
#define LCD_DATA6 PIN_C5
#define LCD_DATA7 PIN_C6
//End LCD module connections




void main()
{
Lcd_init();
Lcd_cmd(_LCD_CLEAR);
LCD_OUT(1,2,"Hello world");

while(1)
{
}

}
