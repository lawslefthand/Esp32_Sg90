A simple driver which provides swerve and positional functions for the Sg90 servo.

How to use -

This driver is meant for the Esp-IDF.

Simply include the source and header files into your project's main directory. Dont forget to add sg90.c into your project's Cmake file.


functions- 

servo_swerve() - Provides servo swerve from 0 to 180 degrees and back. Each movement has a delay of 10ms.

servo_pos(int pos) - You can set a custom position for the sg90 from 0 to 180 degrees. 
                      Pos can be from 1-20.
                      Each Pos value corresponds to a different duty cycle value.
                      You can check out a refrence table for (13bit and 15bit resoloution)  in 
                      values.xlsx

Ps- Pos 1 corresponds to 0 degrees and Pos 20 corresponds to 180 degrees. You can fine tune the values for particular servo in sg90.c


Refrence for Sg90 pwm values - 

![image](https://github.com/user-attachments/assets/cb0d8543-5de2-4c53-ad3f-c9a088a96417)



![image](https://github.com/user-attachments/assets/990adc11-f007-46b0-a9a2-4d2243caaaad)

