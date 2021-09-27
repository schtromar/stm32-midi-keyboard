STM32 MIDI KEYBOARD
===============

A simple usb midi keyboard using an STM32F407 Discovery board. 

Wiring
-----------
Variable resistor between VDD and PC2, pulled down with a regular resistor between PC2 and GND. Try different values.


Configuration
-----------
Copy and/or edit the inc/yongmei_map.h and src/yongmei_map.c according to your variable resistor (my keyboard uses a different resistor on each key). The firs value must always be 0 and the last value must always be 4096. The other values represent the start of the next key. If your keyboard is more predicatable than mine (the keys are arranged in a linear fashion) you can write your own loadmap function. It should fill the array with midi values to send to the computer, while the indices represent the raw values from the 12bit ADC.


Compilation
-----------
Tnstall the gcc-arm-none-eabi toolchain, run make and flash the resulting .hex file with st-link OR drag the .bin file to the virtual mass storage device of the Discovery board.


CREDITS
----------
This project uses [ripxorip's stm32_usb_midi class](https://github.com/ripxorip/stm32_usb_midi). It's pretty cool, check it out!
