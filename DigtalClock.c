/* ###################################################################
**     Filename    : ProcessorExpert.c
**     Project     : ProcessorExpert
**     Processor   : MKL25Z128VLK4
**     Version     : Driver 01.01
**     Compiler    : GNU C Compiler
**     Date/Time   : 2022-10-07, 10:19, # CodeGen: 0
**     Abstract    :
**         Main module.
**         This module contains user's application code.
**     Settings    :
**     Contents    :
**         No public methods
**
** ###################################################################*/
/*!
** @file ProcessorExpert.c
** @version 01.01
** @brief
**         Main module.
**         This module contains user's application code.
*/         
/*!
**  @addtogroup ProcessorExpert_module ProcessorExpert module documentation
**  @{
*/         
/* MODULE ProcessorExpert */


/* Including needed modules to compile this module/procedure */
#include "Cpu.h"
#include "Events.h"
#include "TRIGER.h"
#include "BitsIoLdd1.h"
#include "Data.h"
#include "BitsIoLdd2.h"
/* Including shared modules, which are used for whole project */
#include "PE_Types.h"
#include "PE_Error.h"
#include "PE_Const.h"
#include "IO_Map.h"

/* User includes (#include below this line is not maintained by Processor Expert) */

/*lint -save  -e970 Disable MISRA rule (6.3) checking. */
void time(int tm,int um,int ts,int us);
  void time(int tm,int um,int ts,int us)
  {
	  int i;
	  char caVar[]={0x3f,0x06,0x5b,0x4f,0x66,0x6d,0x7d,0x07,0x7f,0x6f,0x77,0x7c,0x39,0x5e,0x79,0x71};
	  TRIGER_PutVal(0x7);
	  Data_PutVal(~caVar[tm]);
	  for(i=0;i<0xfff;i++);
	  TRIGER_PutVal(0xb);
	  	  Data_PutVal(~caVar[um]);
	  	for(i=0;i<0xfff;i++);
	  	TRIGER_PutVal(0xd);
	  		  Data_PutVal(~caVar[ts]);
	  		for(i=0;i<0xfff;i++);
	  		TRIGER_PutVal(0xe);
	  			  Data_PutVal(~caVar[us]);
	  			for(i=0;i<0xfff;i++);
	  
	  
	  
  }
int main(void)
/*lint -restore Enable MISRA rule (6.3) checking. */
{
  /* Write your local variable definition here */

  /*** Processor Expert internal initialization. DON'T REMOVE THIS CODE!!! ***/
  PE_low_level_init();
  /*** End of Processor Expert internal initialization.                    ***/

  /* Write your code here */
  /* For example: for(;;) { } */
  int i,data,j,k,l,m;
  //char caVar[]={0x3f,0x06,0x5b,0x4f,0x66,0x6d,0x7d,0x07,0x7f,0x6f,0x77,0x7c,0x39,0x5e,0x79,0x71};
  //char place[]={0xe,0xc,0x8,0x0};
  
while(1){
//	for(i=0;i<4;i++)
//	{
//		TRIGER_PutVal(place[i]);
		//data_PutVal(caVar[count]);
		//count++;
//		
//	}
//		
//		
	for(i=0;i<6;i++)
	{
		for(j=0;j<10;j++)
		{
			for(k=0;k<6;k++)
			{
				for(l=0;l<10;l++)
				{
					time(i,j,k,l);
//					for(m=0;m<0x100fff;m++);
				}
//				for(m=0;m<0x100fff;m++);
			}
		}
//			for(m=0;m<0x100fff;m++);
	}
		
}	
		
		
		
		
//	TRIGER_PutVal(0x7);	
//	Data_PutVal(~(0x3f));
//	for(i=0;i<0xfff;i++);
//	TRIGER_PutVal(0xb);	
//		Data_PutVal(~(0x06));
//		for(i=0;i<0xfff;i++);
//		TRIGER_PutVal(0xd);	
//			Data_PutVal(~(0x5b));
//			for(i=0;i<0xfff;i++);
//			TRIGER_PutVal(0xe);	
//				Data_PutVal(~(0x4f));
//				
//				
//				
//				for(i=0;i<0xfff;i++);
	

  /*** Don't write any code pass this line, or it will be deleted during code generation. ***/
  /*** RTOS startup code. Macro PEX_RTOS_START is defined by the RTOS component. DON'T MODIFY THIS CODE!!! ***/
  #ifdef PEX_RTOS_START
    PEX_RTOS_START();                  /* Startup of the selected RTOS. Macro is defined by the RTOS component. */
  #endif
  /*** End of RTOS startup code.  ***/
  /*** Processor Expert end of main routine. DON'T MODIFY THIS CODE!!! ***/
  for(;;){}
  /*** Processor Expert end of main routine. DON'T WRITE CODE BELOW!!! ***/
} /*** End of main routine. DO NOT MODIFY THIS TEXT!!! ***/

/* END ProcessorExpert */
/*!
** @}
*/
/*
** ###################################################################
**
**     This file was created by Processor Expert 10.3 [05.08]
**     for the Freescale Kinetis series of microcontrollers.
**
** ###################################################################
*/
