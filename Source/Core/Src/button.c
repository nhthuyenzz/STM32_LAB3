/*
 * button.c
 *
 *  Created on: Oct 26, 2024
 *      Author: Admin
 */

#include "button.h"

int button0_flag = 0;

int KeyReg0 = NORMAL_STATE;
int KeyReg1 = NORMAL_STATE;
int KeyReg2 = NORMAL_STATE;

int KeyReg3 = NORMAL_STATE;
int TimerForKeyPress = 200;


int isButton0Pressed(){
	if (button0_flag == 1){
		button0_flag = 0;
		return 1;
	}
	return 0;
}

void subKeyProcess(){
//	HAL_GPIO_TogglePin(LED_RED_GPIO_Port, LED_RED_Pin);
	button0_flag = 1;
}

void getKeyInput(){
	KeyReg0 = KeyReg1;
	KeyReg1 = KeyReg2;
	KeyReg2 = HAL_GPIO_ReadPin(Button0_GPIO_Port, Button0_Pin);
	if ((KeyReg0 == KeyReg1) && (KeyReg1 == KeyReg2)){
		if (KeyReg3 != KeyReg2){
			KeyReg3 = KeyReg2;
			if (KeyReg2 == PRESSED_STATE){
				//TODO
				subKeyProcess();
				TimerForKeyPress = 200;
			}
		} else{
			TimerForKeyPress--;
			if (TimerForKeyPress == 0){
				KeyReg3 = NORMAL_STATE;
			}
		}
	}
}
