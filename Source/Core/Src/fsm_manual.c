/*
 * fsm_manual.c
 *
 *  Created on: Oct 30, 2024
 *      Author: Admin
 */

#include "fsm_manual.h"
int counter = 0;
void fsm_manual_run(){
	switch (status){
	case MAN_RED:
		if (timer_led_flag == 1){
			setToggleRed();
			setTimerLed(500);
		}

		if (timer1_flag == 1){
			status = RED_GREEN;
			setTimer1(5000);
		}

		if (isButton1Pressed() == 1){
			status = MAN_YELLOW;
			setTimer1(10000);
		}

		if (isButton2Pressed() == 1){
			status = SET_RED;
			setTimer1(10000);
		}
		break;
	case MAN_GREEN:
		if (timer_led_flag == 1){
			setToggleGreen();
			setTimerLed(500);
		}
		if (timer1_flag == 1){
			status = RED_GREEN;
			setTimer1(5000);
		}

		if (isButton1Pressed() == 1){
			status = RED_GREEN;
			setTimer1(10000);
		}

		if (isButton2Pressed() == 1){
			status = SET_GREEN;
			setTimer1(10000);
		}
		break;
	case MAN_YELLOW:
		if (timer_led_flag == 1){
			setToggleYellow();
			setTimerLed(500);
		}
		if (timer1_flag == 1){
			status = RED_GREEN;
			setTimer1(5000);
		}

		if (isButton1Pressed() == 1){
			status = MAN_GREEN;
			setTimer1(10000);
		}

		if (isButton2Pressed() == 1){
			status = SET_AMBER;
			setTimer1(10000);
		}
		break;
	default:
		break;
	}
}
