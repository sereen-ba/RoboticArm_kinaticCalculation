#include <Servo.h>


double angle1;
double angle2 ;
Servo servo_2;
Servo servo_4;
int L1 = 10;  
double x = 6.16; 
int L2 = 5;  
double y= 9.33;
double angle =(2*M_PI)/3;


void setup()
{
     Serial.begin(9600);
  angle2=(acos((x*x+y*y-L1*L1)/(2*L1*L2)));
  angle1=120-angle2*180/M_PI;
  Serial.print(" first anglein Degree: ");
  Serial.print(angle1);
  Serial.print(" second angle in Degree: ");
  Serial.print(angle2*180/M_PI);
   servo_2.attach(4);
   servo_4.attach(2);
  

}

void loop()
{
  int a=angle1;
 int  b=angle2*180/M_PI;
  servo_2.write(b);
  delay(1000);
  servo_4.write(a);
   delay(1000);


 }
