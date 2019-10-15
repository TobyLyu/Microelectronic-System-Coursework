#include "mbed.h"

DigitalOut wave(p13);
DigitalIn switch1(p14);

int main() {
    while(1) {
        if (switch1==1){
        wave=1;
        wait(0.0025);
        wave=0;
        wait(0.0025);    
        }
        else{
        wave=1;
        wait(0.001);
        wave=0;
        wait(0.001);
        }
    }
}
