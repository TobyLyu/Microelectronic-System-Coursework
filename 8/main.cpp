#include "mbed.h"
AnalogOut wave(p18);
Ticker t;

void out(){
    static unsigned short a;
    wave.write_u16(a << 6);
    a++;
    if(a >= 932){
        a = 0;
    }
}

int main() {
    t.attach_us(&out, 11);
    while(1) {
        ;
    }
}
