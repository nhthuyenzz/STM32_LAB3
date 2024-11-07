/*
 * fsm_auto.c
 *
 *  Created on: Oct 27, 2024
 *      Author: Admin
 */


#include "global.h"

void fsm_automatic_run1(){
	switch(status1){
	case INIT:
		//TODO
		setInit();

		status1 = AUTO_RED_1;
		setTimer1(5000);
		break;

	case AUTO_RED_1:
		setRed_1();
		if (timer1_flag == 1){
			status1 = AUTO_GREEN_1;
			setTimer1(3000);
		}

//		if (isButton0Pressed() == 1){
//			status1 = MAN_RED;
//			setTimer1(10000);
//		}
		break;

	case AUTO_GREEN_1:
		setGreen_1();
		if (timer1_flag == 1){
			status1 = AUTO_YELLOW_1;
			setTimer1(2000);
		}

		break;


	case AUTO_YELLOW_1:
		setYellow_1();

		if (timer1_flag == 1){
			status1 = AUTO_RED_1;
			setTimer1(5000);
		}
		break;

	default:
		break;
	}
}


void fsm_automatic_run2(){
	switch (status2){
	case INIT:
		setInit();
		status2 = AUTO_GREEN_2;
		setTimer2(3000);
		break;
	case AUTO_RED_2:
		setRed_2();
		if (timer2_flag == 1){
			status2 = AUTO_GREEN_2;
			setTimer2(3000);
		}

//		if (isButton0Pressed() == 1){
//			status2 = MAN_RED;
//			setTimer2(10000);
//		}
		break;

	case AUTO_GREEN_2:
		setGreen_2();
		if (timer2_flag == 1){
			status2 = AUTO_YELLOW_2;
			setTimer2(2000);
		}

		break;


	case AUTO_YELLOW_2:
		setYellow_2();

		if (timer2_flag == 1){
			status2 = AUTO_RED_2;
			setTimer2(5000);
		}
		break;
	default:
		break;
	}
}
//const int MAX_LED = 4;
//int led_buffer[4] = {1, 2, 3, 4};
//int hour = 15, minute = 59, second = 0;
//void display7SEG(int num){
//	switch(num){
//	case 0:
//		HAL_GPIO_WritePin(SEG_0_GPIO_Port, SEG_0_Pin, RESET);
//		HAL_GPIO_WritePin(SEG_1_GPIO_Port, SEG_1_Pin, RESET);
//		HAL_GPIO_WritePin(SEG_2_GPIO_Port, SEG_2_Pin, RESET);
//		HAL_GPIO_WritePin(SEG_3_GPIO_Port, SEG_3_Pin, RESET);
//		HAL_GPIO_WritePin(SEG_4_GPIO_Port, SEG_4_Pin, RESET);
//		HAL_GPIO_WritePin(SEG_5_GPIO_Port, SEG_5_Pin, RESET);
//		HAL_GPIO_WritePin(SEG_6_GPIO_Port, SEG_6_Pin, SET);
//		break;
//	case 1:
//		HAL_GPIO_WritePin(SEG_0_GPIO_Port, SEG_0_Pin, SET);
//		HAL_GPIO_WritePin(SEG_1_GPIO_Port, SEG_1_Pin, RESET);
//		HAL_GPIO_WritePin(SEG_2_GPIO_Port, SEG_2_Pin, RESET);
//		HAL_GPIO_WritePin(SEG_3_GPIO_Port, SEG_3_Pin, SET);
//		HAL_GPIO_WritePin(SEG_4_GPIO_Port, SEG_4_Pin, SET);
//		HAL_GPIO_WritePin(SEG_5_GPIO_Port, SEG_5_Pin, SET);
//		HAL_GPIO_WritePin(SEG_6_GPIO_Port, SEG_6_Pin, SET);
//		break;
//	case 2:
//		HAL_GPIO_WritePin(SEG_0_GPIO_Port, SEG_0_Pin, RESET);
//		HAL_GPIO_WritePin(SEG_1_GPIO_Port, SEG_1_Pin, RESET);
//		HAL_GPIO_WritePin(SEG_2_GPIO_Port, SEG_2_Pin, SET);
//		HAL_GPIO_WritePin(SEG_3_GPIO_Port, SEG_3_Pin, RESET);
//		HAL_GPIO_WritePin(SEG_4_GPIO_Port, SEG_4_Pin, RESET);
//		HAL_GPIO_WritePin(SEG_5_GPIO_Port, SEG_5_Pin, SET);
//		HAL_GPIO_WritePin(SEG_6_GPIO_Port, SEG_6_Pin, RESET);
//			break;
//	case 3:
//		HAL_GPIO_WritePin(SEG_0_GPIO_Port, SEG_0_Pin, RESET);
//		HAL_GPIO_WritePin(SEG_1_GPIO_Port, SEG_1_Pin, RESET);
//		HAL_GPIO_WritePin(SEG_2_GPIO_Port, SEG_2_Pin, RESET);
//		HAL_GPIO_WritePin(SEG_3_GPIO_Port, SEG_3_Pin, RESET);
//		HAL_GPIO_WritePin(SEG_4_GPIO_Port, SEG_4_Pin, SET);
//		HAL_GPIO_WritePin(SEG_5_GPIO_Port, SEG_5_Pin, SET);
//		HAL_GPIO_WritePin(SEG_6_GPIO_Port, SEG_6_Pin, RESET);
//			break;
//	case 4:
//		HAL_GPIO_WritePin(SEG_0_GPIO_Port, SEG_0_Pin, SET);
//		HAL_GPIO_WritePin(SEG_1_GPIO_Port, SEG_1_Pin, RESET);
//		HAL_GPIO_WritePin(SEG_2_GPIO_Port, SEG_2_Pin, RESET);
//		HAL_GPIO_WritePin(SEG_3_GPIO_Port, SEG_3_Pin, SET);
//		HAL_GPIO_WritePin(SEG_4_GPIO_Port, SEG_4_Pin, SET);
//		HAL_GPIO_WritePin(SEG_5_GPIO_Port, SEG_5_Pin, RESET);
//		HAL_GPIO_WritePin(SEG_6_GPIO_Port, SEG_6_Pin, RESET);
//			break;
//	case 5:
//		HAL_GPIO_WritePin(SEG_0_GPIO_Port, SEG_0_Pin, RESET);
//		HAL_GPIO_WritePin(SEG_1_GPIO_Port, SEG_1_Pin, SET);
//		HAL_GPIO_WritePin(SEG_2_GPIO_Port, SEG_2_Pin, RESET);
//		HAL_GPIO_WritePin(SEG_3_GPIO_Port, SEG_3_Pin, RESET);
//		HAL_GPIO_WritePin(SEG_4_GPIO_Port, SEG_4_Pin, SET);
//		HAL_GPIO_WritePin(SEG_5_GPIO_Port, SEG_5_Pin, RESET);
//		HAL_GPIO_WritePin(SEG_6_GPIO_Port, SEG_6_Pin, RESET);
//			break;
//	case 6:
//		HAL_GPIO_WritePin(SEG_0_GPIO_Port, SEG_0_Pin, RESET);
//		HAL_GPIO_WritePin(SEG_1_GPIO_Port, SEG_1_Pin, SET);
//		HAL_GPIO_WritePin(SEG_2_GPIO_Port, SEG_2_Pin, RESET);
//		HAL_GPIO_WritePin(SEG_3_GPIO_Port, SEG_3_Pin, RESET);
//		HAL_GPIO_WritePin(SEG_4_GPIO_Port, SEG_4_Pin, RESET);
//		HAL_GPIO_WritePin(SEG_5_GPIO_Port, SEG_5_Pin, RESET);
//		HAL_GPIO_WritePin(SEG_6_GPIO_Port, SEG_6_Pin, RESET);
//			break;
//	case 7:
//		HAL_GPIO_WritePin(SEG_0_GPIO_Port, SEG_0_Pin, RESET);
//		HAL_GPIO_WritePin(SEG_1_GPIO_Port, SEG_1_Pin, RESET);
//		HAL_GPIO_WritePin(SEG_2_GPIO_Port, SEG_2_Pin, RESET);
//		HAL_GPIO_WritePin(SEG_3_GPIO_Port, SEG_3_Pin, SET);
//		HAL_GPIO_WritePin(SEG_4_GPIO_Port, SEG_4_Pin, SET);
//		HAL_GPIO_WritePin(SEG_5_GPIO_Port, SEG_5_Pin, SET);
//		HAL_GPIO_WritePin(SEG_6_GPIO_Port, SEG_6_Pin, SET);
//			break;
//	case 8:
//		HAL_GPIO_WritePin(SEG_0_GPIO_Port, SEG_0_Pin, RESET);
//		HAL_GPIO_WritePin(SEG_1_GPIO_Port, SEG_1_Pin, RESET);
//		HAL_GPIO_WritePin(SEG_2_GPIO_Port, SEG_2_Pin, RESET);
//		HAL_GPIO_WritePin(SEG_3_GPIO_Port, SEG_3_Pin, RESET);
//		HAL_GPIO_WritePin(SEG_4_GPIO_Port, SEG_4_Pin, RESET);
//		HAL_GPIO_WritePin(SEG_5_GPIO_Port, SEG_5_Pin, RESET);
//		HAL_GPIO_WritePin(SEG_6_GPIO_Port, SEG_6_Pin, RESET);
//			break;
//	case 9:
//		HAL_GPIO_WritePin(SEG_0_GPIO_Port, SEG_0_Pin, RESET);
//		HAL_GPIO_WritePin(SEG_1_GPIO_Port, SEG_1_Pin, RESET);
//		HAL_GPIO_WritePin(SEG_2_GPIO_Port, SEG_2_Pin, RESET);
//		HAL_GPIO_WritePin(SEG_3_GPIO_Port, SEG_3_Pin, RESET);
//		HAL_GPIO_WritePin(SEG_4_GPIO_Port, SEG_4_Pin, SET);
//		HAL_GPIO_WritePin(SEG_5_GPIO_Port, SEG_5_Pin, RESET);
//		HAL_GPIO_WritePin(SEG_6_GPIO_Port, SEG_6_Pin, RESET);
//			break;
//	default:
//			break;
//	}
//}
//
//void update7SEG (int index){
//	index = index%4;
//	switch (index){
//	case 0:
//		  HAL_GPIO_WritePin(EN0_GPIO_Port, EN0_Pin, RESET);
//		  HAL_GPIO_WritePin(EN1_GPIO_Port, EN1_Pin, SET);
//		  HAL_GPIO_WritePin(EN2_GPIO_Port, EN2_Pin, SET);
//		  HAL_GPIO_WritePin(EN3_GPIO_Port, EN3_Pin, SET);
//		display7SEG(led_buffer[index]);
//		break;
//	case 1:
//		  HAL_GPIO_WritePin(EN0_GPIO_Port, EN0_Pin, SET);
//		  HAL_GPIO_WritePin(EN1_GPIO_Port, EN1_Pin, RESET);
//		  HAL_GPIO_WritePin(EN2_GPIO_Port, EN2_Pin, SET);
//		  HAL_GPIO_WritePin(EN3_GPIO_Port, EN3_Pin, SET);
//		display7SEG(led_buffer[index]);
//		break;
//	case 2:
//		  HAL_GPIO_WritePin(EN0_GPIO_Port, EN0_Pin, SET);
//		  HAL_GPIO_WritePin(EN1_GPIO_Port, EN1_Pin, SET);
//		  HAL_GPIO_WritePin(EN2_GPIO_Port, EN2_Pin, RESET);
//		  HAL_GPIO_WritePin(EN3_GPIO_Port, EN3_Pin, SET);
//		 display7SEG(led_buffer[index]);
//		break;
//	case 3:
//		  HAL_GPIO_WritePin(EN0_GPIO_Port, EN0_Pin, SET);
//		  HAL_GPIO_WritePin(EN1_GPIO_Port, EN1_Pin, SET);
//		  HAL_GPIO_WritePin(EN2_GPIO_Port, EN2_Pin, SET);
//		  HAL_GPIO_WritePin(EN3_GPIO_Port, EN3_Pin, RESET);
//		display7SEG(led_buffer[index]);
//		break;
//	default:
//		break;
//	}
//}
//
//void updateClockBuffer(){
//	  second += 10;
//	  if (second >= 60){
//		  second = 0;
//		  minute++;
//	  }
//	  if (minute >= 60){
//		  minute = 0;
//		  hour++;
//	  }
//	  if (hour >= 24){
//		  hour = 0;
//	  }
//	  led_buffer[0] = hour/10;
//	  led_buffer[1] = hour%10;
//	  led_buffer[2] = minute/10;
//	  led_buffer[3] = minute%10;
//
//}


//void fsm_auto_run(){
//
//	switch(status){
//
//	}
//}


