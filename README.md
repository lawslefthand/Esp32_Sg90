
A simple driver which provides swerve and positional functions for the Sg90 servo.

How to use -

Simply include the source and header files into your project's main directory.

functions- 

servo_swerve() - Provides servo swerve from 0 to 180 degrees and back. Each movement has a delay of 10ms.

servo_pos(int pos) - You can set a custom position for the sg90 from 0 to 180 degrees. 
                      Pos can be from 1-11.
                      Each Pos value corresponds to a different duty cycle value.
                      You can check the table for them in values.xlsx


Refrence for Sg90 pwm values - 


![image](https://github.com/user-attachments/assets/990adc11-f007-46b0-a9a2-4d2243caaaad)

