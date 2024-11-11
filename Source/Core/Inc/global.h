/*
 * global.h
 *
 *  Created on: Oct 30, 2024
 *      Author: Admin
 */

#ifndef INC_GLOBAL_H_
#define INC_GLOBAL_H_

#include "software_timer.h"
#include "button.h"
#include "light_traffic.h"
#include "main.h"

#define INIT 			1
#define RED_GREEN		2
#define RED_AMBER		3
#define GREEN_RED		4
#define AMBER_RED		5


#define MAN_RED 	12
#define MAN_YELLOW	13
#define MAN_GREEN	14

#define SET_RED			21
#define SET_AMBER		22
#define SET_GREEN		23

extern int fsm_status;
extern int status;

extern int counter;
#endif /* INC_GLOBAL_H_ */
