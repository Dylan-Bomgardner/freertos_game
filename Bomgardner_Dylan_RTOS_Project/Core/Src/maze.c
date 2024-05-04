/*
 * maze.c
 *
 *  Created on: Apr 19, 2024
 *      Author: dylan
 */
#include "maze.h"

extern RNG_HandleTypeDef hrng;
extern wall_t wall_list[];
extern waypoint_t waypoint_list[NUM_WAYPOINTS];
extern hole_t hole_list[];
extern int wall_tracker;
extern int hole_tracker;
void maze_generation(void) {
	//initialize the TRNG
	//HAL_RNG_Init(&hrng);
	uint8_t cells_x = (240 / CELL_SIZE) - 1;
	uint8_t cells_y = (320 / CELL_SIZE) - 2;
	cell_t maze[cells_x][cells_y];
	uint32_t random_data;
	int random_number;
	wall_tracker = 0;

	HAL_RNG_GenerateRandomNumber(&hrng, &random_data);

	srand(random_data);


	maze[LOCATION1_X / CELL_SIZE][LOCATION1_y / CELL_SIZE].type = 's';
	waypoint_list[0].x = (LOCATION1_X / CELL_SIZE) * CELL_SIZE + (CELL_SIZE / 2);
	waypoint_list[0].y = (LOCATION1_y / CELL_SIZE) * CELL_SIZE + (CELL_SIZE / 2);
	waypoint_list[0].complete = 1;

	maze[LOCATION2_X / CELL_SIZE][LOCATION2_y / CELL_SIZE].type = 'w';
	waypoint_list[1].x = (LOCATION2_X / CELL_SIZE) * CELL_SIZE + (CELL_SIZE / 2);
	waypoint_list[1].y = (LOCATION2_y / CELL_SIZE) * CELL_SIZE + (CELL_SIZE / 2);

	maze[LOCATION3_X / CELL_SIZE][LOCATION3_y / CELL_SIZE].type = 'w';
	waypoint_list[2].x = (LOCATION3_X / CELL_SIZE) * CELL_SIZE + (CELL_SIZE / 2);
	waypoint_list[2].y = (LOCATION3_y / CELL_SIZE) * CELL_SIZE + (CELL_SIZE / 2);

	maze[LOCATION4_X / CELL_SIZE][LOCATION4_y / CELL_SIZE].type = 'w';
	waypoint_list[3].x = (LOCATION4_X / CELL_SIZE) * CELL_SIZE + (CELL_SIZE / 2);
	waypoint_list[3].y = (LOCATION4_y / CELL_SIZE) * CELL_SIZE + (CELL_SIZE / 2);

	LCD_Clear(0,LCD_COLOR_BACKGROUND);
	for(int i = 0; i < cells_x; i++) {
		for(int j = 0; j < cells_y; j++) {
			maze[i][j].x = i * CELL_SIZE + (CELL_SIZE / 2);
			maze[i][j].y = j * CELL_SIZE + (CELL_SIZE / 2);
			random_number = rand()%100;
			if(maze[i][j].type == 's' || maze[i][j].type == 'w') {
//				maze[i][j].x = maze[i][j].x;
//				maze[i][j].y = maze[i][j].y
			}
			if(maze[i][j].type != 's' && maze[i][j].type != 'w') {
				if(random_number < VL_WALL_PROBABILITY) {
					maze[i][j].type = 'v';
					wall_list[wall_tracker].start_coord[0] = maze[i][j].x - (CELL_SIZE / 2);
					wall_list[wall_tracker].start_coord[1] = maze[i][j].y - (CELL_SIZE / 2);
					wall_list[wall_tracker].end_coord[0] =   maze[i][j].x + (CELL_SIZE / 2);
					wall_list[wall_tracker].end_coord[1] =   maze[i][j].y - (CELL_SIZE / 2);
					wall_tracker++;
				}
				else if(random_number < VR_WALL_PROBABILITY + VL_WALL_PROBABILITY) {
					maze[i][j].type = 'V';
					wall_list[wall_tracker].start_coord[0] = maze[i][j].x - (CELL_SIZE / 2);
					wall_list[wall_tracker].start_coord[1] = maze[i][j].y + (CELL_SIZE / 2);
					wall_list[wall_tracker].end_coord[0]   = maze[i][j].x + (CELL_SIZE / 2);
					wall_list[wall_tracker].end_coord[1]   = maze[i][j].y + (CELL_SIZE / 2);
					wall_tracker++;
				}
				else if(random_number < VR_WALL_PROBABILITY + VL_WALL_PROBABILITY + HB_WALL_PROBABILITY) {
					maze[i][j].type = 'h';
					wall_list[wall_tracker].start_coord[0] = maze[i][j].x - (CELL_SIZE / 2);
					wall_list[wall_tracker].start_coord[1] = maze[i][j].y - (CELL_SIZE / 2);
					wall_list[wall_tracker].end_coord[0]   = maze[i][j].x - (CELL_SIZE / 2);
					wall_list[wall_tracker].end_coord[1]   = maze[i][j].y + (CELL_SIZE / 2);
					wall_tracker++;
				}
				else if(random_number < VR_WALL_PROBABILITY + VL_WALL_PROBABILITY + HB_WALL_PROBABILITY + HT_WALL_PROBABILITY) {
					maze[i][j].type = 'H';
					wall_list[wall_tracker].start_coord[0] = maze[i][j].x + (CELL_SIZE / 2);
					wall_list[wall_tracker].start_coord[1] = maze[i][j].y - (CELL_SIZE / 2);
					wall_list[wall_tracker].end_coord[0]   = maze[i][j].x + (CELL_SIZE / 2);
					wall_list[wall_tracker].end_coord[1]   = maze[i][j].y + (CELL_SIZE / 2);
					wall_tracker++;
				}
				else if(random_number < VR_WALL_PROBABILITY + VL_WALL_PROBABILITY + HB_WALL_PROBABILITY + HT_WALL_PROBABILITY + HOLE_PROBABILITY) {
					maze[i][j].type = 'o';
					hole_list[hole_tracker].x = maze[i][j].x;
					hole_list[hole_tracker].y = maze[i][j].y;
					hole_tracker++;
				}
				else maze[i][j].type == 'e';
			}
			//maze[i][j].type = 'e';
//			if(maze[i][j].type == 's') LCD_Draw_Circle_Fill((uint16_t)maze[i][j].x, (uint16_t)maze[i][j].y, CELL_SIZE / 2, LCD_COLOR_GREY);
//			else if(maze[i][j].type == 'w') LCD_Draw_Circle_Fill((uint16_t)maze[i][j].x, (uint16_t)maze[i][j].y, CELL_SIZE / 2, LCD_COLOR_RED);
//			else if(maze[i][j].type == 'v') LCD_Draw_Vertical_Line(maze[i][j].x - (CELL_SIZE / 2), maze[i][j].y - (CELL_SIZE / 2), CELL_SIZE, LCD_COLOR_BLACK);
//			else if(maze[i][j].type == 'V') LCD_Draw_Vertical_Line(maze[i][j].x - (CELL_SIZE / 2), maze[i][j].y + (CELL_SIZE / 2), CELL_SIZE, LCD_COLOR_BLACK);
//			else if(maze[i][j].type == 'h') LCD_Draw_Horizontal_Line(maze[i][j].x - (CELL_SIZE / 2), maze[i][j].y - (CELL_SIZE / 2), CELL_SIZE, LCD_COLOR_BLACK);
//			else if(maze[i][j].type == 'H') LCD_Draw_Horizontal_Line(maze[i][j].x + (CELL_SIZE / 2), maze[i][j].y - (CELL_SIZE / 2), CELL_SIZE, LCD_COLOR_BLACK);
//			else if(maze[i][j].type == 'o') LCD_Draw_Circle_Fill((uint16_t)maze[i][j].x, (uint16_t)maze[i][j].y, CELL_SIZE / 2, LCD_COLOR_MAGENTA);
//

//			if(maze[i][j].type == 's') {
//				waypoint_list[0].x = i;
//				waypoint_list[0].y = j;
//			}
//			else if(maze[i][j].type == 'w') {
//				//LCD_Draw_Circle_Fill((uint16_t)maze[i][j].x, (uint16_t)maze[i][j].y, CELL_SIZE / 2, LCD_COLOR_RED);
//
//			}
//			else if(maze[i][j].type == 'v') //LCD_Draw_Vertical_Line(maze[i][j].x - (CELL_SIZE / 2), maze[i][j].y - (CELL_SIZE / 2), CELL_SIZE, LCD_COLOR_BLACK);
//			else if(maze[i][j].type == 'V') //LCD_Draw_Vertical_Line(maze[i][j].x - (CELL_SIZE / 2), maze[i][j].y + (CELL_SIZE / 2), CELL_SIZE, LCD_COLOR_BLACK);
//			else if(maze[i][j].type == 'h') //LCD_Draw_Horizontal_Line(maze[i][j].x - (CELL_SIZE / 2), maze[i][j].y - (CELL_SIZE / 2), CELL_SIZE, LCD_COLOR_BLACK);
//			else if(maze[i][j].type == 'H') //LCD_Draw_Horizontal_Line(maze[i][j].x + (CELL_SIZE / 2), maze[i][j].y - (CELL_SIZE / 2), CELL_SIZE, LCD_COLOR_BLACK);
//			else if(maze[i][j].type == 'o') //LCD_Draw_Circle_Fill((uint16_t)maze[i][j].x, (uint16_t)maze[i][j].y, CELL_SIZE / 2, LCD_COLOR_MAGENTA);
//			//else LCD_Draw_Circle_Fill((uint16_t)maze[i][j].x, (uint16_t)maze[i][j].y, CELL_SIZE / 2, LCD_COLOR_BLUE);
		}
	}

//	for(int i = 0; i < wall_tracker; i++) {
//		if(wall_list[i].start_coord[0] == wall_list[i].end_coord[0]) {
//		LCD_Draw_Horizontal_Line(wall_list[i].start_coord[0], wall_list[i].start_coord[1], wall_list[i].end_coord[1] - wall_list[i].start_coord[1], LCD_COLOR_BLACK);
//		}
//		else if (wall_list[i].start_coord[1] == wall_list[i].end_coord[1]){
//		LCD_Draw_Vertical_Line(wall_list[i].start_coord[0], wall_list[i].start_coord[1], wall_list[i].end_coord[0] - wall_list[i].start_coord[0], LCD_COLOR_BLACK);
//
//		}
//	}
//	for(int i = 0; i < hole_tracker; i++) {
//	LCD_Draw_Circle_Fill((uint16_t)hole_list[i].x, (uint16_t)hole_list[i].y, CELL_SIZE / 2, LCD_COLOR_MAGENTA);
//	}



}

