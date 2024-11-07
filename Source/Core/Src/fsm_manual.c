/*
 * fsm_manual.c
 *
 *  Created on: Oct 30, 2024
 *      Author: Admin
 */

#include "fsm_manual.h"

void fsm_manual_run(){
	switch (status){
	case MAN_RED:
		setRed();
		if (timer1_flag == 1){
			status = AUTO_RED;
			setTimer1(5000);
		}

		if (isButton1Pressed() == 1){
			status = MAN_GREEN;
			setTimer1(10000);
		}
		break;
	case MAN_GREEN:
		setGreen();
		if (timer1_flag == 1){
			status = AUTO_GREEN;
			setTimer1(5000);
		}

		if (isButton1Pressed() == 1){
			status = MAN_YELLOW;
			setTimer1(10000);
		}
		break;
	case MAN_YELLOW:
		setYellow();
		if (timer1_flag == 1){
			status = AUTO_YELLOW;
			setTimer1(5000);
		}

		if (isButton1Pressed() == 1){
			status = MAN_RED;
			setTimer1(10000);
		}
		break;
	default:
		break;
	}
}
