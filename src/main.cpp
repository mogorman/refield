#include "mbed.h"

DigitalOut myled(P0_19);
Serial pc(USBTX, USBRX); // tx, rx

int main()
{
  myled = 1;
  pc.baud(9600);
  pc.printf("hello world\n");  
  while(1) {
    pc.printf("hello world\n"); 
    wait(100);
	//        myled = 0;
	//        wait(10);
  }
}
