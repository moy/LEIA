#ifndef H_SIMULATEUR
#define H_SIMULATEUR

#include "structs.h"
#include "debug.h"
#include "screen.h"

/* evaluate a instruction */
void evaluate(const uword opcode, Machine &machine, Param &param, Screen *screen);
/* simulate a program */
void simulate(Machine &machine, Param &param, Screen *screen);
/* debugger */
void fullDebug(Machine &machine, Param &param, Screen *screen);

#endif
