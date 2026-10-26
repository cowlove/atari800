#ifndef PBI_H_
#define PBI_H_

#include "atari.h"
#include <stdio.h>

int PBI_Initialise(int *argc, char *argv[]);
void PBI_Exit(void);
int PBI_ReadConfig(char *string, char *ptr);
void PBI_WriteConfig(FILE *fp);
void PBI_Reset(void);
UBYTE PBI_D1GetByte(UWORD addr, int no_side_effects);
void PBI_D1PutByte(UWORD addr, UBYTE byte);
int PBI_CSIM_D1FFWrite(UBYTE byte);
void PBI_CSIM_D830Write(UBYTE byte);
void PBI_CSIM_CycleTick(unsigned int cycles);
int PBI_CSIM_TakeNMI(void);
void PBI_CSIM_RequestNMI(void);
int PBI_CSIM_ROMActive(void);
void PBI_CSIM_SaveROM(void);
void PBI_CSIM_RestoreROM(void);
extern UBYTE pbiROM[0x800];
UBYTE PBI_D6GetByte(UWORD addr, int no_side_effects);
void PBI_D6PutByte(UWORD addr, UBYTE byte);
UBYTE PBI_D7GetByte(UWORD addr, int no_side_effects);
void PBI_D7PutByte(UWORD addr, UBYTE byte);
extern int PBI_IRQ;
extern int PBI_D6D7ram;
void PBI_StateSave(void);
void PBI_StateRead(void);
#define PBI_NOT_HANDLED -1
/* #define PBI_DEBUG */
#endif /* PBI_H_ */
