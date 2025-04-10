# MaRs-TASK-2
two wheel drive mechanism using w,a,s and d keys.

logic :-
* input 'w' is for moving in forward direction.
  both the wheels rotate in the forward direction
* input 'a' is for moving in the reverse direction.
  both the wheels rotate in the reverse dirction
* input 's' is for right rotation.
  left wheel moves in the forward direction and the right in backward direction for clockwise rotation.
  after the desired rotation, we can give w or a command to move it in that particular direction.
* input 'd' is for left rotation.
  left wheel moves in the backward direction and the right in forward direction for anti-clockwise rotation.
  after the desired rotation, we can give w or a command to move it in that particular direction.
  
debugging :-
* one of the dc motors was not working even though the code and the connections were correct, I think it might be beause of some problems with the DC motor or due to the loose jumper wire connections. Hence, I was not able to check the left and right movement with the hardware.
