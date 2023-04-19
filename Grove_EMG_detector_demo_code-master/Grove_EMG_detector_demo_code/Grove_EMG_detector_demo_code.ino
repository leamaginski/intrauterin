// Grove - EMG Sensor demo code
// This demo will need a Grove - Led Bar to show the motion 
// Grove - EMG Sensor connect to A0
// Grove - LED Bar connect to D8, D9
// note: it'll take about serval seconds to detect static analog value
// when you should hold your muscle static. You will see led bar from level 10 turn to 
// level 0, it means static analog value get ok

//#include <LED_Bar.h>  #########

//LED_Bar bar(9, 8);  #########


void setup()
{
    Serial.begin(115200);
    

}


void loop()
{

    Serial.println(analogRead(A0));
    delay(100);
}