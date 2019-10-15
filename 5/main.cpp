#include "mbed.h"

BusOut display(p5,p6,p7,p8,p9,p10,p11,p12);

int main() {
    while(1) {
        int i=0;
        for (i=0;i<10;i++){                                                                                       
        switch(i){
            case 0:display=0xC0;wait(0.5);break;
            case 1:display=0xF9;wait(0.5);break;
            case 2:display=0xA4;wait(0.5);break;
            case 3:display=0xB0;wait(0.5);break;
            case 4:display=0x99;wait(0.5);break;
            case 5:display=0x92;wait(0.5);break;
            case 6:display=0x82;wait(0.5);break;
            case 7:display=0xF8;wait(0.5);break;
            case 8:display=0x80;wait(0.5);break;
            case 9:display=0x90;wait(0.5);break;
            }
        }
    }
}
