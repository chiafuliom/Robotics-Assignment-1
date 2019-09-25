#include <kipr/botball.h>
int l_motor = 0 ;
int r_motor = 2 ;
int l_speed = 100 ; 
int r_speed = 75 ; 
int pause = 3000 ;

int main()
{
  forward();
  printf("going forward \n");
  msleep (pause);
  ao();
  backward();
  printf("going backward \n");
  msleep (pause);
  ao();
  left();
  printf("turning left \n");
  msleep (pause);
  ao();
  right();
  printf("turning right \n");
  msleep (pause);
  ao();
  
  
  
    return 0;
}

//function definitions 
void forward (){
   motor(l_motor,l_speed);
   motor(r_motor,r_speed);

}
void backward (){
   motor(l_motor,-l_speed);
   motor(r_motor,-r_speed);

}
void left (){
   motor(l_motor,0);
   motor(r_motor,r_speed);

}
void right (){
   motor(l_motor,l_speed);
   motor(r_motor,0);

}


     