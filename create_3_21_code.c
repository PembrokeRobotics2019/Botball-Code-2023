#include <kipr/wombat.h>

int main()
{
    create_connect();
    enable_servos();
   
    set_servo_position(0, 1000);
    set_servo_position(1, 1000);
    set_servo_position(2, 2047);
   
    create_drive_direct(0,0);
    msleep(1000);    
   
    create_drive_direct(100,100);
    msleep(5000);
   
    create_drive_direct(100,-100);
    msleep(1700);
   
    create_drive_direct(100,100);
    msleep(9000);
   
    create_drive_direct(-100,100);
    msleep(1600);
   
    create_drive_direct(0,0);
    msleep(1000);
   
     set_servo_position(1, 0);
   
    create_drive_direct(0,0);
    msleep(500);
   
    create_drive_direct(0,0);
    msleep(800);
   
    motor(0, 100);
    msleep(2000);
   
    create_drive_direct(0,0);
    msleep(1000);
   
    create_drive_direct(100, 100);
    msleep(500);
   
    set_servo_position(1, 1600);
   
    return 0;
}
