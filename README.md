# PIC18f4520 ADC and LCD code
I have written bare metal code for both ADC and for LCD in PIC18F4520 and used them to read values from a potentiometer and display the resulting voltage on the LCD display.
Initially the entire code was inside a single file main.c. After I verified the code worked I split the code into c sourece files (main.c, adc.c and lcd.c) and header files (config.h, adc.h and lcd.h). This step made it easy to understand the code.

# Reason for this project : 
This project started as a learning process for me to get familiar with register level programming using an 8 bit mcu before moving to more professional 32 bit mcu’s.The entire code does not use any external library for both ADC and LCD.

I started by first learning the GPIO pins and its related registers such as TRIS, PORT and LAT.
Then I learned about the configuration bits and how to set them.
After getting familiar with the GPIO pins and using TRIS, PORT and LAT registers by doing simple experiments such as blinking a LED I moved on to how to set up a LCD. I have used a potentiometer as the analog input in this project for demo.


The datasheet is the best resource that helped me complete the project. Everything that is needed to complete any project using the PIC is clearly available in the datasheet.

# Features : 
- 10 bit ADC and right justified representation
- 4 bit LCD control (sending 1st half of data first followed by the second half)
- real time voltage reading and displaying


# Learning resources : 
- PIC Microcontroller and Embedded Systems: Using assembly and C for PIC 18 : 
This book was really helpful when starting out but watch out this book uses C18 compiler and the MPLAB X IDE uses XC8 compiler.
- PIC18F4520 datasheet
- HD44780U Controller IC datasheet - This datasheet is useful for setting up the LCD

# Tools : 
- MPLAB X IDE
- PROTEUS

# Circuit Diagram :
<img width="800" height="500" alt="image" src="https://github.com/user-attachments/assets/31541feb-6eed-460a-b457-cdd2ef841fe3" />

