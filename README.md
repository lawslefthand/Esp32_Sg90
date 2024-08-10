# Sg90-Driver-for-Esp-IDF-Esp32-
A simple sg90 driver which provides swerve and positional functions for the Sg90 servo.

How to use -

Simply include the source and header files into your project's main directory.

functions- 

servo_swerve() - Provides servo swerve from 0 to 180 degrees and back. Each movement has a delay of 10ms.

servo_pos(int pos) - You can set a custom position for the sg90 from 0 to 180 degrees. 
                      Pos can be from 1-11.
                      Each Pos value corresponds to a different duty cycle value.

Corresponding pos values-
Pos  Wave ms  duty cycle value
1    1.0      407
2    1.1      451
3    1.2      492
4    1.3      532
5    1.4      573
6    1.5      614
7    1.6      655
8    1.7      696
9    1.8      737
10   1.9      778
11   2.0      819


Refrence for Sg90 pwm values - 
![image](https://github.com/user-attachments/assets/990adc11-f007-46b0-a9a2-4d2243caaaad)

