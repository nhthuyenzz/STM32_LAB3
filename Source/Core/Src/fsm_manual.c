/*
 * fsm_manual.c
 *
 *  Created on: Oct 30, 2024
 *      Author: Admin
 */

#include "fsm_manual.h"

void fsm_manual_run(){
	switch (status1){
	case MAN_RED:
		setRed_1();
		if (timer1_flag == 1){
			status1 = AUTO_RED_1;
			setTimer1(5000);
		}

		if (isButton0Pressed() == 1){
			status1 = MAN_GREEN;
			setTimer1(10000);
		}
		break;
	case MAN_GREEN:
		setGreen_1();
		if (timer1_flag == 1){
			status1 = AUTO_GREEN_1;
			setTimer1(5000);
		}

		if (isButton0Pressed() == 1){
			status1 = MAN_YELLOW;
			setTimer1(10000);
		}
		break;
	case MAN_YELLOW:
		setYellow_1();
		if (timer1_flag == 1){
			status1 = AUTO_YELLOW_1;
			setTimer1(5000);
		}

		if (isButton0Pressed() == 1){
			status1 = MAN_RED;
			setTimer1(10000);
		}
		break;
	default:
		break;
	}
}
