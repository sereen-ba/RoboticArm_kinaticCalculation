# RoboticArm_kinaticCalculation

In this repository there are 2 examples for kinetic calculations [forward, reverse] with the circuit of the arm which is consist of 2 servo motors
and an Arduino Uno.


There are two codes that do the same function which is to rotate the servo motor to a specific  angle.

1- Forward methode: the code have the first angle and the secound and the first, and second length already given but we need to no the final postion as it's x-y coordinates. so we used this formula: 
x=L1cos(theta1)+L2cos(theta2+theta1)
y=L1sin(theta1)+L2sin(theta2+theta1)

and we know that the final angle which is the angle of the hole arm with respect to the x-axis:
theta =theta1+theta2



2- Inverse methode: in this code the given were the total angle and the final position x-y coordinates, and the length of the two pices but we need to no the first and second angle to set the servo motor. so we used this formula: 

cos(angle2)=(x*x+y*y-L1*L1)/(2L1*L2)
angle1= Totalangle -angle2

remmber that all the trigonometric functions accept the angle in radian and the servo motor rotate in degree.

____
Arthur: Sereen Bahdad.
