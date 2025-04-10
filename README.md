# MaRs-TASK-2
two wheel drive mechanism using w,a,s and d keys.

thought process and procedure:-

for moving two wheels, two dc moters are required and to change its directions, a motor driver is used ( l298d).
for giving inputs to the driver, a total of 4 pins (motor1pin1, motor1pin2, motor2pin1 and motor2pin2) are used, first 2 for one motor and the next two for the other.
the dc motors are connected to the 4 outputs from the driver to control them. atlast, for the different functions to be performed (moving forward, backwards, right and left) input from the user is taken and is printed on the serial monitor and the function is performed accordingly.
the code logic and execution are given below:-

logic:-
* input 'w' is for moving in forward direction.
  both the wheels rotate in the forward direction
* input 'a' is for moving in the reverse direction.
  both the wheels rotate in the reverse direction
* input 's' is for right rotation.
  left wheel moves in the forward direction and the right in backward direction for clockwise rotation.
  after the desired rotation, we can give w or a command to move it in that particular direction.
* input 'd' is for left rotation.
  left wheel moves in the backward direction and the right in forward direction for anti-clockwise rotation.
  after the desired rotation, we can give w or a command to move it in that particular direction.
  
debugging :-
* one of the dc motors was not working even though the code and the connections were correct, I think it might be beause of some problems with the DC motor or due to the problems in the driver. Hence, I was not able to check the left and right movement with the hardware.
