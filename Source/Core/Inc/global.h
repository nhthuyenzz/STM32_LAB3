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
#define AUTO_RED_1 		2
#define AUTO_GREEN_1 	3
#define AUTO_YELLOW_1	4

#define AUTO_RED_2 		5
#define AUTO_GREEN_2 	6
#define AUTO_YELLOW_2	7

#define MAN_RED 	12
#define MAN_YELLOW	13
#define MAN_GREEN	14

extern int status1;
extern int status2;

#endif /* INC_GLOBAL_H_ */
