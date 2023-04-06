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
    msleep(900);
   
    create_drive_direct(-100,100);
    msleep(800);
   
    create_drive_direct(100,100);
    msleep(4300);
   
    create_drive_direct(100,-100);
    msleep(1600);
   
    create_drive_direct(100,100);
    msleep(8900);
   
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
    msleep(1000);
   
    create_drive_direct(0,0);
    msleep(3000);
   
    create_drive_direct(100, 100);
    msleep(200);
   
    set_servo_position(1, 1200);
   
    create_drive_direct(0,0);
    msleep(4000);
   
   
    set_servo_position(0, 1250);
   
    return 0;
}
