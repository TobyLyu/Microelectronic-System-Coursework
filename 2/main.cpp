#include "mbed.h"

DigitalOut wave(p13);

int main() {
    while(1) {
        wave=1;
        wait(0.0005);
        wave=0;
        wait(0.0005);
    }
}
