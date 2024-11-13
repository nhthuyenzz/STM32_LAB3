/*
 * light_traffic.c
 *
 *  Created on: Oct 27, 2024
 *      Author: Admin
 */

#include "light_traffic.h"


int second11, second12, second21, second22;
int count1 = 50;
void setLightInit(){
	HAL_GPIO_WritePin(LED_1_RED_GPIO_Port, LED_1_RED_Pin, GPIO_PIN_RESET);
	HAL_GPIO_WritePin(LED_1_GREEN_GPIO_Port, LED_1_GREEN_Pin, GPIO_PIN_RESET);
	HAL_GPIO_WritePin(LED_1_YELLOW_GPIO_Port, LED_1_YELLOW_Pin, GPIO_PIN_RESET);

	HAL_GPIO_WritePin(LED_2_RED_GPIO_Port, LED_2_RED_Pin, GPIO_PIN_RESET);
	HAL_GPIO_WritePin(LED_2_GREEN_GPIO_Port, LED_2_GREEN_Pin, GPIO_PIN_RESET);
	HAL_GPIO_WritePin(LED_2_YELLOW_GPIO_Port, LED_2_YELLOW_Pin, GPIO_PIN_RESET);
}

void setTimeInit(){
	red_time = RED_TIME;
	green_time = GREEN_TIME;
	amber_time = AMBER_TIME;
	red_time_temp = red_time;
	green_time_temp = green_time;
	amber_time_temp = amber_time;
	second11 = red_time/10;
	second12 = red_time%10;
}

void setRed(){
	HAL_GPIO_WritePin(LED_RED_GPIO_Port, LED_RED_Pin, GPIO_PIN_SET);
	HAL_GPIO_WritePin(LED_GREEN_GPIO_Port, LED_GREEN_Pin, GPIO_PIN_RESET);
	HAL_GPIO_WritePin(LED_YELLOW_GPIO_Port, LED_YELLOW_Pin, GPIO_PIN_RESET);
}

//void setGreen(){
//	HAL_GPIO_WritePin(LED_RED_GPIO_Port, LED_RED_Pin, GPIO_PIN_RESET);;
//	HAL_GPIO_WritePin(LED_GREEN_GPIO_Port, LED_GREEN_Pin, GPIO_PIN_SET);
//	HAL_GPIO_WritePin(LED_YELLOW_GPIO_Port, LED_YELLOW_Pin, GPIO_PIN_RESET);
//}
//
//void setYellow(){
//	HAL_GPIO_WritePin(LED_RED_GPIO_Port, LED_RED_Pin, GPIO_PIN_RESET);
//	HAL_GPIO_WritePin(LED_GREEN_GPIO_Port, LED_GREEN_Pin, GPIO_PIN_RESET);
//	HAL_GPIO_WritePin(LED_YELLOW_GPIO_Port, LED_YELLOW_Pin, GPIO_PIN_SET);
//}

void setRed_1(){
	HAL_GPIO_WritePin(LED_1_RED_GPIO_Port, LED_1_RED_Pin, GPIO_PIN_SET);
	HAL_GPIO_WritePin(LED_1_GREEN_GPIO_Port, LED_1_GREEN_Pin, GPIO_PIN_RESET);
	HAL_GPIO_WritePin(LED_1_YELLOW_GPIO_Port, LED_1_YELLOW_Pin, GPIO_PIN_RESET);
}

void setGreen_1(){
	HAL_GPIO_WritePin(LED_1_RED_GPIO_Port, LED_1_RED_Pin, GPIO_PIN_RESET);;
	HAL_GPIO_WritePin(LED_1_GREEN_GPIO_Port, LED_1_GREEN_Pin, GPIO_PIN_SET);
	HAL_GPIO_WritePin(LED_1_YELLOW_GPIO_Port, LED_1_YELLOW_Pin, GPIO_PIN_RESET);
}

void setYellow_1(){
	HAL_GPIO_WritePin(LED_1_RED_GPIO_Port, LED_1_RED_Pin, GPIO_PIN_RESET);
	HAL_GPIO_WritePin(LED_1_GREEN_GPIO_Port, LED_1_GREEN_Pin, GPIO_PIN_RESET);
	HAL_GPIO_WritePin(LED_1_YELLOW_GPIO_Port, LED_1_YELLOW_Pin, GPIO_PIN_SET);
}


void setRed_2(){
	HAL_GPIO_WritePin(LED_2_RED_GPIO_Port, LED_2_RED_Pin, GPIO_PIN_SET);
	HAL_GPIO_WritePin(LED_2_GREEN_GPIO_Port, LED_2_GREEN_Pin, GPIO_PIN_RESET);
	HAL_GPIO_WritePin(LED_2_YELLOW_GPIO_Port, LED_2_YELLOW_Pin, GPIO_PIN_RESET);
}

void setGreen_2(){
	HAL_GPIO_WritePin(LED_2_RED_GPIO_Port, LED_2_RED_Pin, GPIO_PIN_RESET);;
	HAL_GPIO_WritePin(LED_2_GREEN_GPIO_Port, LED_2_GREEN_Pin, GPIO_PIN_SET);
	HAL_GPIO_WritePin(LED_2_YELLOW_GPIO_Port, LED_2_YELLOW_Pin, GPIO_PIN_RESET);
}

void setYellow_2(){
	HAL_GPIO_WritePin(LED_2_RED_GPIO_Port, LED_2_RED_Pin, GPIO_PIN_RESET);
	HAL_GPIO_WritePin(LED_2_GREEN_GPIO_Port, LED_2_GREEN_Pin, GPIO_PIN_RESET);
	HAL_GPIO_WritePin(LED_2_YELLOW_GPIO_Port, LED_2_YELLOW_Pin, GPIO_PIN_SET);
}

void setToggleRed(){//2HZ
    HAL_GPIO_WritePin(LED_1_GREEN_GPIO_Port, LED_1_GREEN_Pin, GPIO_PIN_RESET);
    HAL_GPIO_WritePin(LED_1_YELLOW_GPIO_Port, LED_1_YELLOW_Pin, GPIO_PIN_RESET);
    HAL_GPIO_WritePin(LED_2_GREEN_GPIO_Port, LED_2_GREEN_Pin, GPIO_PIN_RESET);
    HAL_GPIO_WritePin(LED_2_YELLOW_GPIO_Port, LED_2_YELLOW_Pin, GPIO_PIN_RESET);

    // Toggle only the red LEDs on both sets
    HAL_GPIO_TogglePin(LED_1_RED_GPIO_Port, LED_1_RED_Pin);
    HAL_GPIO_TogglePin(LED_2_RED_GPIO_Port, LED_2_RED_Pin);

}

void setToggleGreen(){
	HAL_GPIO_WritePin(LED_1_RED_GPIO_Port, LED_1_RED_Pin, GPIO_PIN_RESET);
	HAL_GPIO_TogglePin(LED_1_GREEN_GPIO_Port, LED_1_GREEN_Pin);
	HAL_GPIO_WritePin(LED_1_YELLOW_GPIO_Port, LED_1_YELLOW_Pin, GPIO_PIN_RESET);

	HAL_GPIO_WritePin(LED_2_RED_GPIO_Port, LED_2_RED_Pin, GPIO_PIN_RESET);
	HAL_GPIO_TogglePin(LED_2_GREEN_GPIO_Port, LED_2_GREEN_Pin);
	HAL_GPIO_WritePin(LED_2_YELLOW_GPIO_Port, LED_2_YELLOW_Pin, GPIO_PIN_RESET);
}

void setToggleYellow(){
	HAL_GPIO_WritePin(LED_1_RED_GPIO_Port, LED_1_RED_Pin, GPIO_PIN_RESET);
	HAL_GPIO_WritePin(LED_1_GREEN_GPIO_Port, LED_1_GREEN_Pin, GPIO_PIN_RESET);
	HAL_GPIO_TogglePin(LED_1_YELLOW_GPIO_Port, LED_1_YELLOW_Pin);

	HAL_GPIO_WritePin(LED_2_RED_GPIO_Port, LED_2_RED_Pin, GPIO_PIN_RESET);
	HAL_GPIO_WritePin(LED_2_GREEN_GPIO_Port, LED_2_GREEN_Pin, GPIO_PIN_RESET);
	HAL_GPIO_TogglePin(LED_2_YELLOW_GPIO_Port, LED_2_YELLOW_Pin);
}

static int get7SEG1Value() {
	switch (status) {
		case RED_GREEN:
			return red_time_temp;
		case RED_AMBER:
			return red_time_temp;
		case GREEN_RED:
			return amber_time_temp;
		case AMBER_RED:
			return green_time_temp;
		case MAN_RED:
			return red_time_temp;
		case MAN_GREEN:
			return green_time_temp;
		case MAN_AMBER:
			return amber_time_temp;
		default:
			break;
	}
	return 0;
}
static int get7SEG2Value() {
	switch (status) {
		case RED_GREEN:
			return green_time_temp;
		case RED_AMBER:
			return amber_time_temp;
		case GREEN_RED:
			return red_time_temp;
		case AMBER_RED:
			return red_time_temp;
		case MAN_RED:
			return red_time_temp;
		case MAN_GREEN:
			return green_time_temp;
		case MAN_AMBER:
			return amber_time_temp;
		default:
			break;
	}
	return 0;
}

void display7SEG(int num){
	switch(num){
	case 0:
		HAL_GPIO_WritePin(SEG_0_GPIO_Port, SEG_0_Pin, RESET);
		HAL_GPIO_WritePin(SEG_1_GPIO_Port, SEG_1_Pin, RESET);
		HAL_GPIO_WritePin(SEG_2_GPIO_Port, SEG_2_Pin, RESET);
		HAL_GPIO_WritePin(SEG_3_GPIO_Port, SEG_3_Pin, RESET);
		HAL_GPIO_WritePin(SEG_4_GPIO_Port, SEG_4_Pin, RESET);
		HAL_GPIO_WritePin(SEG_5_GPIO_Port, SEG_5_Pin, RESET);
		HAL_GPIO_WritePin(SEG_6_GPIO_Port, SEG_6_Pin, SET);
		break;
	case 1:
		HAL_GPIO_WritePin(SEG_0_GPIO_Port, SEG_0_Pin, SET);
		HAL_GPIO_WritePin(SEG_1_GPIO_Port, SEG_1_Pin, RESET);
		HAL_GPIO_WritePin(SEG_2_GPIO_Port, SEG_2_Pin, RESET);
		HAL_GPIO_WritePin(SEG_3_GPIO_Port, SEG_3_Pin, SET);
		HAL_GPIO_WritePin(SEG_4_GPIO_Port, SEG_4_Pin, SET);
		HAL_GPIO_WritePin(SEG_5_GPIO_Port, SEG_5_Pin, SET);
		HAL_GPIO_WritePin(SEG_6_GPIO_Port, SEG_6_Pin, SET);
		break;
	case 2:
		HAL_GPIO_WritePin(SEG_0_GPIO_Port, SEG_0_Pin, RESET);
		HAL_GPIO_WritePin(SEG_1_GPIO_Port, SEG_1_Pin, RESET);
		HAL_GPIO_WritePin(SEG_2_GPIO_Port, SEG_2_Pin, SET);
		HAL_GPIO_WritePin(SEG_3_GPIO_Port, SEG_3_Pin, RESET);
		HAL_GPIO_WritePin(SEG_4_GPIO_Port, SEG_4_Pin, RESET);
		HAL_GPIO_WritePin(SEG_5_GPIO_Port, SEG_5_Pin, SET);
		HAL_GPIO_WritePin(SEG_6_GPIO_Port, SEG_6_Pin, RESET);
			break;
	case 3:
		HAL_GPIO_WritePin(SEG_0_GPIO_Port, SEG_0_Pin, RESET);
		HAL_GPIO_WritePin(SEG_1_GPIO_Port, SEG_1_Pin, RESET);
		HAL_GPIO_WritePin(SEG_2_GPIO_Port, SEG_2_Pin, RESET);
		HAL_GPIO_WritePin(SEG_3_GPIO_Port, SEG_3_Pin, RESET);
		HAL_GPIO_WritePin(SEG_4_GPIO_Port, SEG_4_Pin, SET);
		HAL_GPIO_WritePin(SEG_5_GPIO_Port, SEG_5_Pin, SET);
		HAL_GPIO_WritePin(SEG_6_GPIO_Port, SEG_6_Pin, RESET);
			break;
	case 4:
		HAL_GPIO_WritePin(SEG_0_GPIO_Port, SEG_0_Pin, SET);
		HAL_GPIO_WritePin(SEG_1_GPIO_Port, SEG_1_Pin, RESET);
		HAL_GPIO_WritePin(SEG_2_GPIO_Port, SEG_2_Pin, RESET);
		HAL_GPIO_WritePin(SEG_3_GPIO_Port, SEG_3_Pin, SET);
		HAL_GPIO_WritePin(SEG_4_GPIO_Port, SEG_4_Pin, SET);
		HAL_GPIO_WritePin(SEG_5_GPIO_Port, SEG_5_Pin, RESET);
		HAL_GPIO_WritePin(SEG_6_GPIO_Port, SEG_6_Pin, RESET);
			break;
	case 5:
		HAL_GPIO_WritePin(SEG_0_GPIO_Port, SEG_0_Pin, RESET);
		HAL_GPIO_WritePin(SEG_1_GPIO_Port, SEG_1_Pin, SET);
		HAL_GPIO_WritePin(SEG_2_GPIO_Port, SEG_2_Pin, RESET);
		HAL_GPIO_WritePin(SEG_3_GPIO_Port, SEG_3_Pin, RESET);
		HAL_GPIO_WritePin(SEG_4_GPIO_Port, SEG_4_Pin, SET);
		HAL_GPIO_WritePin(SEG_5_GPIO_Port, SEG_5_Pin, RESET);
		HAL_GPIO_WritePin(SEG_6_GPIO_Port, SEG_6_Pin, RESET);
			break;
	case 6:
		HAL_GPIO_WritePin(SEG_0_GPIO_Port, SEG_0_Pin, RESET);
		HAL_GPIO_WritePin(SEG_1_GPIO_Port, SEG_1_Pin, SET);
		HAL_GPIO_WritePin(SEG_2_GPIO_Port, SEG_2_Pin, RESET);
		HAL_GPIO_WritePin(SEG_3_GPIO_Port, SEG_3_Pin, RESET);
		HAL_GPIO_WritePin(SEG_4_GPIO_Port, SEG_4_Pin, RESET);
		HAL_GPIO_WritePin(SEG_5_GPIO_Port, SEG_5_Pin, RESET);
		HAL_GPIO_WritePin(SEG_6_GPIO_Port, SEG_6_Pin, RESET);
			break;
	case 7:
		HAL_GPIO_WritePin(SEG_0_GPIO_Port, SEG_0_Pin, RESET);
		HAL_GPIO_WritePin(SEG_1_GPIO_Port, SEG_1_Pin, RESET);
		HAL_GPIO_WritePin(SEG_2_GPIO_Port, SEG_2_Pin, RESET);
		HAL_GPIO_WritePin(SEG_3_GPIO_Port, SEG_3_Pin, SET);
		HAL_GPIO_WritePin(SEG_4_GPIO_Port, SEG_4_Pin, SET);
		HAL_GPIO_WritePin(SEG_5_GPIO_Port, SEG_5_Pin, SET);
		HAL_GPIO_WritePin(SEG_6_GPIO_Port, SEG_6_Pin, SET);
			break;
	case 8:
		HAL_GPIO_WritePin(SEG_0_GPIO_Port, SEG_0_Pin, RESET);
		HAL_GPIO_WritePin(SEG_1_GPIO_Port, SEG_1_Pin, RESET);
		HAL_GPIO_WritePin(SEG_2_GPIO_Port, SEG_2_Pin, RESET);
		HAL_GPIO_WritePin(SEG_3_GPIO_Port, SEG_3_Pin, RESET);
		HAL_GPIO_WritePin(SEG_4_GPIO_Port, SEG_4_Pin, RESET);
		HAL_GPIO_WritePin(SEG_5_GPIO_Port, SEG_5_Pin, RESET);
		HAL_GPIO_WritePin(SEG_6_GPIO_Port, SEG_6_Pin, RESET);
			break;
	case 9:
		HAL_GPIO_WritePin(SEG_0_GPIO_Port, SEG_0_Pin, RESET);
		HAL_GPIO_WritePin(SEG_1_GPIO_Port, SEG_1_Pin, RESET);
		HAL_GPIO_WritePin(SEG_2_GPIO_Port, SEG_2_Pin, RESET);
		HAL_GPIO_WritePin(SEG_3_GPIO_Port, SEG_3_Pin, RESET);
		HAL_GPIO_WritePin(SEG_4_GPIO_Port, SEG_4_Pin, SET);
		HAL_GPIO_WritePin(SEG_5_GPIO_Port, SEG_5_Pin, RESET);
		HAL_GPIO_WritePin(SEG_6_GPIO_Port, SEG_6_Pin, RESET);
			break;
	default:
			break;
	}
}

void update7SEG (int index){
	index = index%4;
	switch (index){
	case 0:
		  HAL_GPIO_WritePin(EN0_GPIO_Port, EN0_Pin, RESET);
		  HAL_GPIO_WritePin(EN1_GPIO_Port, EN1_Pin, SET);
		  HAL_GPIO_WritePin(EN2_GPIO_Port, EN2_Pin, SET);
		  HAL_GPIO_WritePin(EN3_GPIO_Port, EN3_Pin, SET);
		  display7SEG(get7SEG1Value()/10);
		break;
	case 1:
		  HAL_GPIO_WritePin(EN0_GPIO_Port, EN0_Pin, SET);
		  HAL_GPIO_WritePin(EN1_GPIO_Port, EN1_Pin, RESET);
		  HAL_GPIO_WritePin(EN2_GPIO_Port, EN2_Pin, SET);
		  HAL_GPIO_WritePin(EN3_GPIO_Port, EN3_Pin, SET);
		  display7SEG(get7SEG1Value()%10);
		break;
	case 2:
		  HAL_GPIO_WritePin(EN0_GPIO_Port, EN0_Pin, SET);
		  HAL_GPIO_WritePin(EN1_GPIO_Port, EN1_Pin, SET);
		  HAL_GPIO_WritePin(EN2_GPIO_Port, EN2_Pin, RESET);
		  HAL_GPIO_WritePin(EN3_GPIO_Port, EN3_Pin, SET);
		  display7SEG(get7SEG2Value()/10);
		break;
	case 3:
		  HAL_GPIO_WritePin(EN0_GPIO_Port, EN0_Pin, SET);
		  HAL_GPIO_WritePin(EN1_GPIO_Port, EN1_Pin, SET);
		  HAL_GPIO_WritePin(EN2_GPIO_Port, EN2_Pin, SET);
		  HAL_GPIO_WritePin(EN3_GPIO_Port, EN3_Pin, RESET);
		  display7SEG(get7SEG2Value()%10);
		break;
	default:
		break;
	}
}



void updateClockBuffer(){

	  second12--;
	  second22--;

	  if (second12 < 0){
		  second12 = 9;
		  second11--;
	  }
	  if (second11 <= 0){
		  second11 = red_time/10;
	  }

	  if(second22 < 0){
		  second22 = 9;
		  second21--;
	  }

	  if (second21 <= 0){
		  second21 = green_time/10;
	  }
	  led_buffer[0] = second11;
	  led_buffer[1] = second12;
	  led_buffer[2] = second21;
	  led_buffer[3] = second22;
}
//
//void updateTime(){
//	if(status == RED)
//}

void updateClock(){
	if(timer2_flag == 1){
		if (index_led > 3){
			index_led = 0;
		}
		update7SEG(index_led++);
		setTimer2(250);
	}

	if(timer3_flag == 1){
		updateClockBuffer();
		setTimer3(1000);
	}
}

