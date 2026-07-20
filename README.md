# PIC18f4520-ADC-and-LCD-code
I have written bare metal code for both ADC and for LCD in PIC18F4520 and used them to read values from a potentiometer and display the resulting voltage on the LCD display.

# Reason for this project: 

This project started as a learning process for me to get familiar with register level programming using an 8 bit mcu before moving to more professional 32 bit mcu’s.The entire code does not use any external library for both ADC abd LCD

I started my first learning the GPIO pins and its related registers such as TRIS, PORT and LAT.
Then I learned about the configuration bits and how to set them.
After getting familiar with the GPIO pins and using TRIS, PORT and LAT registers by doing simple experiments such as blinking a LED I moved on to how to set up a LCD.

I have used a potentiometer as the analog input in this project for demo.

# Learning resources : 
- PIC Microcontroller and Embedded Systems: Using assembly and C for PIC 18 : 
This book was really helpful when starting out but watch out this book uses C18 compiler and the MPLAB X IDE uses X8 compiler.
- PIC18F4520 datasheet
- HD44780U Controller IC datasheet - This datasheet is useful for setting up the LCD

# Tools : 
- MPLAB X IDE
- PROTEUS

# Circuit Diagram :
<img width="800" height="500" alt="image" src="https://github.com/user-attachments/assets/f1f43628-9e9f-4fd6-a12b-bb8bfb402294" />
