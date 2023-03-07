#include <kipr/wombat.h>
int main()
{
    enable_servos();

    while (digital(0)==0){
        if (analog (0)>1800) //If robot is on Black line
        {
            motor (0,8); //turn slightly right (to get off of line)
            motor (3,75);
        }
        else //If robot is not on Black line
        {
            motor (0,75); //turn slightly left (to get on line)
            motor (3,8);
        }}
    ao();





}



