#include <W78E052.h>
#define TIMER0_VALUE_10mSec 0xDC00
#define TIMER0_H ((TIMER0_VALUE_10mSec & 0xFF00)>>8)
#define TIMER0_L (TIMER0_VALUE_10mSec & 0x00FF )

#define TIMER1_VALUE_10mSec 0xDC00
#define TIMER1_H ((TIMER0_VALUE_10mSec & 0xFF00)>>8)
#define TIMER1_L (TIMER0_VALUE_10mSec & 0x00FF )

#define LED P10
void timer_interrupt () interrupt 1
{
	static int i=0;
	static short sBitPosition=0x01;
	TL0 = TIMER0_L; //0x00
	TH0 = TIMER0_H; //0xDC
	/* loop for 100*10msec=1000msec/1sec */
	
	if(i>=1000 && sBitPosition<=0x80)
	{
		P0=sBitPosition;
		sBitPosition=sBitPosition<<1;
		if(sBitPosition>0x80)
	{
		sBitPosition=0x01;
	}
		i=0;
	}
	else
	{
		i++;
		
	}
	
}
void timer_interrupt2 () interrupt 3
{
	static int i=0;
	static short sBitPosition=0x01;
	TL1 = TIMER1_L; //0x00
	TH1 = TIMER1_H; //0xDC
	/* loop for 100*10msec=1000msec/1sec */
	
	if(i>=3000 && sBitPosition<=0x80)
	{
		P1=sBitPosition;
		sBitPosition=sBitPosition<<1;
		if(sBitPosition>0x80)
	{
		sBitPosition=0x01;
	}
		i=0;
	}
	else
	{
		i++;
		
	}
	
}
void main()
{
	int i,j;
	short sBitPosition;
	TMOD = 0x01;
	
	TH0 = TIMER0_H;
	TL0 = TIMER0_L; 
	ET0=1;
	EA=1;
	TR0=1;
	
	TH1 = TIMER1_H;
	TL1 = TIMER1_L;
	ET1=1;
	TR1=1;
	while(1)
	{
			for(sBitPosition=0x1;sBitPosition<=0x80;sBitPosition=sBitPosition<<1)
	{
		P2=sBitPosition;
		for(i=0;i<0x7FF;i++)
			for(j=0;j<0x7FF;j++);
	}
	}
}