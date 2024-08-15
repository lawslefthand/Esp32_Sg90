This driver provides functions to control the SG90 servo motor, offering both sweeping and positional control. Designed specifically for use with the ESP-IDF framework, it integrates seamlessly into your projects.


Include both the sg90.c and sg90.h files in your project's main directory.
Make sure to add sg90.c to your project's CMakeLists.txt to ensure it compiles with your other source files.

Functions:

*servo_swerve():
Sweeps the SG90 servo motor from 0 to 180 degrees and back.
Each movement has a 10ms delay, providing smooth motion.

*servo_pos(int pos):
Allows setting the servo to a specific position between 0 and 180 degrees.
The pos parameter ranges from 1 to 20, with each value corresponding to a different PWM duty cycle.


You can refer to the values.xlsx file for a detailed table of PWM values for both 13-bit and 15-bit resolution.
Note:

Position 1 corresponds to 0 degrees, and position 20 corresponds to 180 degrees. You can fine-tune these values in the sg90.c file to match the characteristics of your specific servo.
PWM Values Reference
For detailed reference on PWM values, check out the values.xlsx file included in the project.




![image](https://github.com/user-attachments/assets/cb0d8543-5de2-4c53-ad3f-c9a088a96417)





