#include<lpc214x.h>

void delay( unsigned int d)
{ unsigned int x,y;
   for(x=0;x<d;x++)
   {
     for(y=0;y<1275;y++)
	 {
	 }
	 }
	 }
	 int main()
	 {
	    PINSEL0=0x00000000;
		PINSEL1=0x00000000;
		IODIR0=0x0000ffff;
		IODIR1=0x00000000;
		IOSET1=(1<<16)|(1<<20)|(1<<24);
		while(1)
		{
		   if(( IOPIN1 & 0x01110000)==0x01100000)
		   {
		      IOSET0=0x0000AAAA;
		   delay(200);
		   IOCLR0=0x0000AAAA;
		   delay(100);
		   IOSET0=0x00005555;
		   delay(200);
		   IOCLR0=0x00005555;
		   delay(100);}

		  if(( IOPIN1 &0x01110000)==0x01010000)
		   { 
		       IOSET0=0x00000001;
		   delay(20);
		   IOCLR0=0x00000001;
		   delay(10);
		   IOSET0=0x00000002;
		   delay(20);
		   IOCLR0=0x00000002;
		   delay(10);
		   IOSET0=0x00000004;
		   delay(20);
		   IOCLR0=0x00000004;
		   delay(10);
		   IOSET0=0x00000008;
		   delay(20);
		   IOCLR0=0x00000008;
		   delay(10);
		   	 IOSET0=0x00000010;
		   delay(20);
		   IOCLR0=0x000000010;
		   delay(10);
		   IOSET0=0x00000020;
		   delay(20);
		   IOCLR0=0x00000020;
		   delay(10);
		   IOSET0=0x00000040;
		   delay(20);
		   IOCLR0=0x00000040;
		   delay(10);
		   IOSET0=0x00000080;
		   delay(20);
		   IOCLR0=0x00000080;
		   delay(10);
		 IOSET0=0x00000100;
		   delay(20);
		   IOCLR0=0x000000100;
		   delay(10);
		   IOSET0=0x00000200;
		   delay(20);
		   IOCLR0=0x00000200;
		   delay(10);
		   IOSET0=0x00000400;
		   delay(20);
		   IOCLR0=0x00000400;
		   delay(10);
		   IOSET0=0x00000800;
		   delay(20);
		   IOCLR0=0x00000800;
		   delay(10);
		   	 IOSET0=0x00001000;
		   delay(20);
		   IOCLR0=0x000001000;
		   delay(10);
		   IOSET0=0x00002000;
		   delay(20);
		   IOCLR0=0x00002000;
		   delay(10);
		   IOSET0=0x00004000;
		   delay(20);
		   IOCLR0=0x00004000;
		   delay(10);
		   IOSET0=0x00008000;
		   delay(20);
		   IOCLR0=0x00008000;
		   delay(10);}
		   if((IOPIN1 & 0x01110000)==0x00110000)
		   {
		    IOSET0=0x00000001;
			delay(50);
			IOSET0=0x00000003;
			delay(50);
			IOSET0=0x00000007;
			delay(50);
			IOSET0=0x00000008;
			delay(50);
		   IOSET0=0x00000010;
			delay(50);
			IOSET0=0x00000030;
			delay(50);
			IOSET0=0x00000070;
			delay(50);
			IOSET0=0x00000080;
			delay(50);
			IOSET0=0x00000100;
			delay(50);
			IOSET0=0x00000300;
			delay(50);
			IOSET0=0x00000700;
			delay(50);
			IOSET0=0x00000800;
			delay(50);
				IOSET0=0x00001000;
			delay(50);
			IOSET0=0x00003000;
			delay(50);
			IOSET0=0x00007000;
			delay(50);
			IOSET0=0x00008000;
			delay(50);
			IOCLR0=0x0000ffff;
			delay(50);
		     }
		    
			else
			{
			  IOCLR1=0x11110000;
			  }
			  }
			  }
