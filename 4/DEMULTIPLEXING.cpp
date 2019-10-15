#include "mbed.h"

DigitalOut first(p5);
DigitalOut second(p6);

int main(){
    while(1){
        first =0;
        second =0;
        wait(0.5);
        first=0;
        second =1;
        wait(0.5);
        first =1;
        second =1;
        wait(0.5);
        first =1;
        second =0;
        wait (0.5);
    }
}