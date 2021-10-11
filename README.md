Intro
The program works to map a potentiometer's position values to a range of 0-99
The code first reads the potentiometer's position, then maps it to the range, and then outputs the range on two seven segment displays.
2 BCD to 7-segment decoders (CD4511) are used, as well as the potentiometer, 2 seven-segment displays, and 14 resistors. 

The Code
The code first sets one analog pin to read the potentiometer rotation value, and 8 pins to output the values found to the BCD decoders.
Note that digital pins 0 and 1 are not exactly GPIO pins and cannot be used.
The code maps the input to a range of 0-99, and then the range is separated into it's tens and ones values.
Integers are then converted to binary using the decToBin() function, which takes inputs (numToConvert, offset), where offset is used to make the second set of pins work with the same method.


https://www.tinkercad.com/things/5thMv3qF4LN