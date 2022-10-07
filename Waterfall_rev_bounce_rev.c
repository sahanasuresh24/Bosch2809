/* ###################################################################
**     Filename    : ProcessorExpert.c
**     Project     : ProcessorExpert
**     Processor   : MKL25Z128VLK4
**     Version     : Driver 01.01
**     Compiler    : GNU C Compiler
**     Date/Time   : 2022-09-28, 13:39, # CodeGen: 0
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
#include "Byte1.h"
#include "BitsIoLdd2.h"
/* Including shared modules, which are used for whole project */
#include "PE_Types.h"
#include "PE_Error.h"
#include "PE_Const.h"
#include "IO_Map.h"

/* User includes (#include below this line is not maintained by Processor Expert) */

/*lint -save  -e970 Disable MISRA rule (6.3) checking. */
void waterfall();
void waterfall(){
	int i;
	Byte1_PutVal(0x70);
	for(i=0;i<0x50fff;i++);
	Byte1_PutVal(0xb0);
	for(i=0;i<0x50fff;i++);
	Byte1_PutVal(0xd0);
	for(i=0;i<0x50fff;i++);
	Byte1_PutVal(0xe0);
	for(i=0;i<0x50fff;i++);
	Byte1_PutVal(0xf8);
	for(i=0;i<0x50fff;i++);
	  Byte1_PutVal(0xf4);
	for(i=0;i<0x50fff;i++);
	Byte1_PutVal(0xf2);
	for(i=0;i<0x50fff;i++);
	Byte1_PutVal(0xf1);
	for(i=0;i<0x50fff;i++);
}
void waterfall_rev();
void waterfall_rev(){
	int i;
	Byte1_PutVal(0xf1);
		  for(i=0;i<0x50fff;i++);
		  Byte1_PutVal(0xf2);
		  		  for(i=0;i<0x50fff;i++);
		  Byte1_PutVal(0xf4);
		  for(i=0;i<0x50fff;i++);
		  Byte1_PutVal(0xf8);
		  for(i=0;i<0x50fff;i++);
		  Byte1_PutVal(0xe0);
		  for(i=0;i<0x50fff;i++);
		  Byte1_PutVal(0xd0);
		  for(i=0;i<0x50fff;i++);
		  Byte1_PutVal(0xb0);
		  for(i=0;i<0x50fff;i++);
		  Byte1_PutVal(0x70);
		  for(i=0;i<0x50fff;i++); 
	
}
void bounce();
void bounce(){
	int i;
	Byte1_PutVal(0x70);
		for(i=0;i<0x50fff;i++);
		Byte1_PutVal(0xb0);
		for(i=0;i<0x50fff;i++);
		Byte1_PutVal(0xd0);
		for(i=0;i<0x50fff;i++);
		Byte1_PutVal(0xe0);
		for(i=0;i<0x50fff;i++);
		Byte1_PutVal(0xf8);
		for(i=0;i<0x50fff;i++);
		Byte1_PutVal(0xf4);
		for(i=0;i<0x50fff;i++);
		Byte1_PutVal(0xf2);
		for(i=0;i<0x50fff;i++);
		Byte1_PutVal(0xf1);
		for(i=0;i<0x50fff;i++);
	Byte1_PutVal(0xf1);
			  for(i=0;i<0x50fff;i++);
			  Byte1_PutVal(0xf2);
			  		  for(i=0;i<0x50fff;i++);
			  Byte1_PutVal(0xf4);
			  for(i=0;i<0x50fff;i++);
			  Byte1_PutVal(0xf8);
			  for(i=0;i<0x50fff;i++);
			  Byte1_PutVal(0xe0);
			  for(i=0;i<0x50fff;i++);
			  Byte1_PutVal(0xd0);
			  for(i=0;i<0x50fff;i++);
			  Byte1_PutVal(0xb0);
			  for(i=0;i<0x50fff;i++);
	Byte1_PutVal(0xb0);
		for(i=0;i<0x50fff;i++);
		Byte1_PutVal(0xd0);
		for(i=0;i<0x50fff;i++);
		Byte1_PutVal(0xe0);
		for(i=0;i<0x50fff;i++);
		Byte1_PutVal(0xf8);
		for(i=0;i<0x50fff;i++);
		Byte1_PutVal(0xf4);
		for(i=0;i<0x50fff;i++);
		Byte1_PutVal(0xf2);
		for(i=0;i<0x50fff;i++);
		Byte1_PutVal(0xf1);
		for(i=0;i<0x50fff;i++);
	Byte1_PutVal(0xf1);
			  for(i=0;i<0x50fff;i++);
			  Byte1_PutVal(0xf2);
			  		  for(i=0;i<0x50fff;i++);
			  Byte1_PutVal(0xf4);
			  for(i=0;i<0x50fff;i++);
			  Byte1_PutVal(0xf8);
			  for(i=0;i<0x50fff;i++);
			  Byte1_PutVal(0xe0);
			  for(i=0;i<0x50fff;i++);
			  Byte1_PutVal(0xd0);
			  for(i=0;i<0x50fff;i++);
	Byte1_PutVal(0xd0);
		for(i=0;i<0x50fff;i++);
		Byte1_PutVal(0xe0);
		for(i=0;i<0x50fff;i++);
		Byte1_PutVal(0xf8);
		for(i=0;i<0x50fff;i++);
		Byte1_PutVal(0xf4);
		for(i=0;i<0x50fff;i++);
		Byte1_PutVal(0xf2);
		for(i=0;i<0x50fff;i++);
		Byte1_PutVal(0xf1);
		for(i=0;i<0x50fff;i++);
	Byte1_PutVal(0xf1);
			  for(i=0;i<0x50fff;i++);
			  Byte1_PutVal(0xf2);
			  		  for(i=0;i<0x50fff;i++);
			  Byte1_PutVal(0xf4);
			  for(i=0;i<0x50fff;i++);
			  Byte1_PutVal(0xf8);
			  for(i=0;i<0x50fff;i++);
			  Byte1_PutVal(0xe0);
			  for(i=0;i<0x50fff;i++);
	Byte1_PutVal(0xe0);
		for(i=0;i<0x50fff;i++);
		Byte1_PutVal(0xf8);
		for(i=0;i<0x50fff;i++);
		Byte1_PutVal(0xf4);
		for(i=0;i<0x50fff;i++);
		Byte1_PutVal(0xf2);
		for(i=0;i<0x50fff;i++);
		Byte1_PutVal(0xf1);
		for(i=0;i<0x50fff;i++);
	Byte1_PutVal(0xf1);
			  for(i=0;i<0x50fff;i++);
			  Byte1_PutVal(0xf2);
			  		  for(i=0;i<0x50fff;i++);
			  Byte1_PutVal(0xf4);
			  for(i=0;i<0x50fff;i++);
			  Byte1_PutVal(0xf8);
			  for(i=0;i<0x50fff;i++);
	Byte1_PutVal(0xf8);
		for(i=0;i<0x50fff;i++);
		Byte1_PutVal(0xf4);
		for(i=0;i<0x50fff;i++);
		Byte1_PutVal(0xf2);
		for(i=0;i<0x50fff;i++);
		Byte1_PutVal(0xf1);
		for(i=0;i<0x50fff;i++);
	Byte1_PutVal(0xf1);
			  for(i=0;i<0x50fff;i++);
			  Byte1_PutVal(0xf2);
			  		  for(i=0;i<0x50fff;i++);
			  Byte1_PutVal(0xf4);
			  for(i=0;i<0x50fff;i++);
	Byte1_PutVal(0xf4);
		for(i=0;i<0x50fff;i++);
		Byte1_PutVal(0xf2);
		for(i=0;i<0x50fff;i++);
		Byte1_PutVal(0xf1);
		for(i=0;i<0x50fff;i++);
	Byte1_PutVal(0xf1);
			  for(i=0;i<0x50fff;i++);
			  Byte1_PutVal(0xf2);
			  		  for(i=0;i<0x50fff;i++);

		Byte1_PutVal(0xf2);
		for(i=0;i<0x50fff;i++);
		Byte1_PutVal(0xf1);
		for(i=0;i<0x50fff;i++);
	Byte1_PutVal(0xf1);
			  for(i=0;i<0x50fff;i++);
		
}
void bounce_rev();
void bounce_rev(){
	int i;
	Byte1_PutVal(0xf1);
			  for(i=0;i<0x50fff;i++);
			  Byte1_PutVal(0xf2);
			  		  for(i=0;i<0x50fff;i++);
			  Byte1_PutVal(0xf4);
			  for(i=0;i<0x50fff;i++);
			  Byte1_PutVal(0xf8);
			  for(i=0;i<0x50fff;i++);
			  Byte1_PutVal(0xe0);
			  for(i=0;i<0x50fff;i++);
			  Byte1_PutVal(0xd0);
			  for(i=0;i<0x50fff;i++);
			  Byte1_PutVal(0xb0);
			  for(i=0;i<0x50fff;i++);
			  Byte1_PutVal(0x70);
			  for(i=0;i<0x50fff;i++); 
	Byte1_PutVal(0x70);
		for(i=0;i<0x50fff;i++);
		Byte1_PutVal(0xb0);
		for(i=0;i<0x50fff;i++);
		Byte1_PutVal(0xd0);
		for(i=0;i<0x50fff;i++);
		Byte1_PutVal(0xe0);
		for(i=0;i<0x50fff;i++);
		Byte1_PutVal(0xf8);
		for(i=0;i<0x50fff;i++);
		  Byte1_PutVal(0xf4);
		for(i=0;i<0x50fff;i++);
		Byte1_PutVal(0xf2);
		for(i=0;i<0x50fff;i++);
	Byte1_PutVal(0xf2);
			  		  for(i=0;i<0x50fff;i++);
			  Byte1_PutVal(0xf4);
			  for(i=0;i<0x50fff;i++);
			  Byte1_PutVal(0xf8);
			  for(i=0;i<0x50fff;i++);
			  Byte1_PutVal(0xe0);
			  for(i=0;i<0x50fff;i++);
			  Byte1_PutVal(0xd0);
			  for(i=0;i<0x50fff;i++);
			  Byte1_PutVal(0xb0);
			  for(i=0;i<0x50fff;i++);
			  Byte1_PutVal(0x70);
			  for(i=0;i<0x50fff;i++); 
	Byte1_PutVal(0x70);
		for(i=0;i<0x50fff;i++);
		Byte1_PutVal(0xb0);
		for(i=0;i<0x50fff;i++);
		Byte1_PutVal(0xd0);
		for(i=0;i<0x50fff;i++);
		Byte1_PutVal(0xe0);
		for(i=0;i<0x50fff;i++);
		Byte1_PutVal(0xf8);
		for(i=0;i<0x50fff;i++);
		  Byte1_PutVal(0xf4);
		for(i=0;i<0x50fff;i++);
	Byte1_PutVal(0xf4);
			  for(i=0;i<0x50fff;i++);
			  Byte1_PutVal(0xf8);
			  for(i=0;i<0x50fff;i++);
			  Byte1_PutVal(0xe0);
			  for(i=0;i<0x50fff;i++);
			  Byte1_PutVal(0xd0);
			  for(i=0;i<0x50fff;i++);
			  Byte1_PutVal(0xb0);
			  for(i=0;i<0x50fff;i++);
			  Byte1_PutVal(0x70);
			  for(i=0;i<0x50fff;i++);
	Byte1_PutVal(0x70);
		for(i=0;i<0x50fff;i++);
		Byte1_PutVal(0xb0);
		for(i=0;i<0x50fff;i++);
		Byte1_PutVal(0xd0);
		for(i=0;i<0x50fff;i++);
		Byte1_PutVal(0xe0);
		for(i=0;i<0x50fff;i++);
		Byte1_PutVal(0xf8);
		for(i=0;i<0x50fff;i++);
	Byte1_PutVal(0xf8);
			  for(i=0;i<0x50fff;i++);
			  Byte1_PutVal(0xe0);
			  for(i=0;i<0x50fff;i++);
			  Byte1_PutVal(0xd0);
			  for(i=0;i<0x50fff;i++);
			  Byte1_PutVal(0xb0);
			  for(i=0;i<0x50fff;i++);
			  Byte1_PutVal(0x70);
			  for(i=0;i<0x50fff;i++);
	Byte1_PutVal(0x70);
		for(i=0;i<0x50fff;i++);
		Byte1_PutVal(0xb0);
		for(i=0;i<0x50fff;i++);
		Byte1_PutVal(0xd0);
		for(i=0;i<0x50fff;i++);
		Byte1_PutVal(0xe0);
		for(i=0;i<0x50fff;i++);
	Byte1_PutVal(0xe0);
			  for(i=0;i<0x50fff;i++);
			  Byte1_PutVal(0xd0);
			  for(i=0;i<0x50fff;i++);
			  Byte1_PutVal(0xb0);
			  for(i=0;i<0x50fff;i++);
			  Byte1_PutVal(0x70);
			  for(i=0;i<0x50fff;i++);
	Byte1_PutVal(0x70);
		for(i=0;i<0x50fff;i++);
		Byte1_PutVal(0xb0);
		for(i=0;i<0x50fff;i++);
		Byte1_PutVal(0xd0);
		for(i=0;i<0x50fff;i++);
	Byte1_PutVal(0xd0);
			  for(i=0;i<0x50fff;i++);
			  Byte1_PutVal(0xb0);
			  for(i=0;i<0x50fff;i++);
			  Byte1_PutVal(0x70);
			  for(i=0;i<0x50fff;i++);
	Byte1_PutVal(0x70);
		for(i=0;i<0x50fff;i++);
		Byte1_PutVal(0xb0);
		for(i=0;i<0x50fff;i++);
	 Byte1_PutVal(0xb0);
			  for(i=0;i<0x50fff;i++);
			  Byte1_PutVal(0x70);
			  for(i=0;i<0x50fff;i++);
	
}
int main(void)
/*lint -restore Enable MISRA rule (6.3) checking. */
{
	
  /* Write your local variable definition here */
  /*** Processor Expert internal initialization. DON'T REMOVE THIS CODE!!! ***/
  PE_low_level_init();
  
  /*** End of Processor Expert internal initialization.                    ***/

  /* Write your code here */
  
  while(1)
  {
	  int i;
	  //waterfall();
	  //for(i=0;i<0x100fff;i++);
	  //waterfall_rev();
	  //for(i=0;i<0x100fff;i++);
	  //bounce();
	  //for(i=0;i<0x100fff;i++);
	  bounce_rev();
  }
 
  
  /* For example: for(;;) { } */

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
