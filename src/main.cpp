#include "mbed.h"

DigitalOut myled(LED);
//Serial pc(USBTX, USBRX); // tx, rx

int main()
{
  //  int myled;
  //    pc.baud(9600);
  //    pc.printf("hello world\n");  
  while(1) {
    //    pc.printf("hello world\n");
	myled = 1;
wait(3);
	myled = 0;
	wait(3);
  }
}
