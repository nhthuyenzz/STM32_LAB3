/*
 * fsm_auto.c
 *
 *  Created on: Oct 27, 2024
 *      Author: Admin
 */


#include "global.h"

void fsm_automatic_run(){
	switch(status){
	case INIT:
		//TODO
		setInit();

		status = RED_GREEN;
		setTimer1(3000);
		break;

	case RED_GREEN:
		setRed_1();
		setGreen_2();
		if (timer1_flag == 1){
			status = RED_AMBER;
			setTimer1(2000);
		}

		if (isButton1Pressed() == 1){
			status = MAN_RED;
			setTimer1(3000);
		}
		break;

	case RED_AMBER:
		setRed_1();
		setYellow_2();
		if (timer1_flag == 1){
			status = GREEN_RED;
			setTimer1(2000);
		}

		if (isButton1Pressed() == 1){
			status = MAN_RED;
			setTimer1(10000);
		}
		break;


	case GREEN_RED:
		setGreen_1();
		setRed_2();
		if (timer1_flag == 1){
			status = AMBER_RED;
			setTimer1(2000);
		}

		if (isButton1Pressed() == 1){
			status = MAN_RED;
			setTimer1(10000);
		}
		break;

	case AMBER_RED:
		setYellow_1();
		setRed_2();
		if (timer1_flag == 1){
			status = RED_GREEN;
			setTimer1(3000);
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


