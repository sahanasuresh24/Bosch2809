#include <W78E052.h>
void mIsr_Ex0(void) interrupt 0
{
	int i,j;
	short sBitPosition;
	for(sBitPosition=0x1;sBitPosition<=0x80;sBitPosition=sBitPosition<<1)
	{
		P0=sBitPosition;
		for(i=0;i<0x7FF;i++)
			for(j=0;j<0x7FF;j++);
	}
	
}
void mIsr_Ex1(void) interrupt 2
{
	int i,j;
	short sBitPosition;
	for(sBitPosition=0x1;sBitPosition<=0x80;sBitPosition=sBitPosition<<1)
	{
		P1=sBitPosition;
		for(i=0;i<0x7FF;i++)
			for(j=0;j<0x7FF;j++);
	}
}
void main()
{
	int i,j;
	short sBitPosition;
	EX0=1;
	IT0=1;
	EX1=1;
	IT1=0;
	EA=1;
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