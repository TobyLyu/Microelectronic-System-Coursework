#include "mbed.h"

BusOut display(p5,p6,p7,p8,p9,p10,p11,p12);
Timer t;

int main() {
    t.reset();
    t.start();
    while(t.read()<=10){
        for(int i=0;i<4;i++){
        switch(i){
            case 0:display=0x89;break;
            case 1:display=0x86;break;
            case 2:display=0xC7;break;
            case 3:display=0x8C;break;
            }
            wait(0.2);
        }
       // display=0xFF;
        wait(0.1);
    }
}
