/*
 * button.c
 *
 *  Created on: Oct 26, 2024
 *      Author: Admin
 */

#include "button.h"

int button1_flag = 0;

int KeyReg0 = NORMAL_STATE;
int KeyReg1 = NORMAL_STATE;
int KeyReg2 = NORMAL_STATE;

int KeyReg3 = NORMAL_STATE;
int TimerForKeyPress = 200;

int isButton1Pressed(){
	if (button1_flag == 1){
		button1_flag = 0;
		return 1;
	}
}

void subKeyProcess(){
//	HAL_GPIO_TogglePin(LED_RED_GPIO_Port, LED_RED_Pin);
	button1_flag = 1;
}

void getKeyInput(){
	KeyReg0 = KeyReg1;
	KeyReg1 = KeyReg2;
	KeyReg2 = HAL_GPIO_ReadPin(Button1_GPIO_Port, Button1_Pin);
	if ((KeyReg0 == KeyReg1) && (KeyReg1 == KeyReg2)){
		if (KeyReg3 != KeyReg2){
			KeyReg3 = KeyReg2;
			if (KeyReg2 == PRESSED_STATE)
				//TODO
				subKeyProcess();
				TimerForKeyPress= 200;
		}else {
			TimerForKeyPress--;
			if (TimerForKeyPress == 0){
				KeyReg3 = NORMAL_STATE;
			}
		}

	}
}

