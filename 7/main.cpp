#include "mbed.h"
AnalogOut Aout(p18);

int main() {
    while(1) {
       Aout=0.5/3.3;
       wait(2.0);
       Aout=1.0/3.3;
       wait(2.0);
       Aout=2.0/3.3;
       wait(2.0);
       Aout=2.5/3.3;
       wait(2.0);
    }
}
