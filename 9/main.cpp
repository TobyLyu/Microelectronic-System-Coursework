#include "mbed.h"

DigitalOut led1(LED1);
DigitalOut led2(LED2);
DigitalOut led3(LED3);
DigitalOut led4(LED4);
AnalogIn read(p20);

int main() {
    while(1){
    if (read<0.1818){
        led1=0;
        led2=0;
        led3=0;
        led4=0;}
    else if((0.1818<read)&&(0.3636>read)){
        led1=1;
        led2=0;
        led3=0;
        led4=0;}
    else if((0.3636<read)&&(0.5454>read)){
        led1=1;
        led2=1;
        led3=0;
        led4=0;}
    else if((0.5454<read)&&(0.7272>read)){
        led1=1;
        led2=1;
        led3=1;
        led4=0;}
    else if(0.7272<read){
        led1=1;
        led2=1;
        led3=1;
        led4=1;}
}
}
