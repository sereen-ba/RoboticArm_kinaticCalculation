#include <Servo.h>


double angle1 = M_PI/6;
double angle2 =M_PI/2;
Servo servo_2;
Servo servo_4;
int L1 = 10;  
double x; 
int L2 = 5;  
double y;
double angle;


void setup()
{
     Serial.begin(9600);
   angle=(angle1+angle2)*180/M_PI;
  x=L1*cos(angle1)+L2*cos(angle2+angle1);
  y=L1*sin(angle1)+L2*sin(angle2+angle1);
  Serial.print("X position: ");
  Serial.print(x);
  Serial.print("Y position: ");
  Serial.print(y);
  Serial.print("The final angle: ");
  Serial.print(angle);
   servo_2.attach(4);
   servo_4.attach(2);
  

}

void loop()
{
  int a=angle1*180/M_PI;
 int  b=angle2*180/M_PI;
  servo_2.write(a);
  delay(1000);
  servo_4.write(b);
   delay(1000);


 }
