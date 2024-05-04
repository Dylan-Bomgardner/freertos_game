/*
 * ApplicationCode.h
 *
 *  Created on: Nov 14, 2023
 *      Author: xcowa
 */

#ifndef INC_APPLICATIONCODE_H_
#define INC_APPLICATIONCODE_H_

#include "LCD_Driver.h"
#include "Gyro_Driver.h"
#include "cmsis_os.h"
#include "maze.h"
#include "main.h"
//#include "math.h"
/***
 * Version
 */
#define VERSION 1 //Version
#define BALL_FALL 1

/***
 * Physics
 */
#define GRAVITY 9000U //kg*cm/s^2
#define UPDATE_FREQUENCY 50 //HZ
#define PIN_AT_CENTER 1 //TODO
#define ANGLE_GAIN 1000

/***
 * Drone
 */
#define MAX_TIME 1000 //ms
#define DRAIN_RATE 4000 //per second
#define MIN_ACTIVATION_ENERGY 6000 //mJ

#define MAX_ENERGY 15000 //mJ
#define RECHARGE_RATE 1000 //mW

#define DRONE_DIAMETER 10 //mm

/***
 * Maze
 */
#define TIME_TO_COMPLETE 120 //s
#define CELL_SIZE 20 //pixels
#define WIDTH 15 //cells
#define HEIGHT 15 //cells
#define VL_WALL_PROBABILITY 15 //Pr*1000
#define VR_WALL_PROBABILITY 15
#define HT_WALL_PROBABILITY 25 //Pr*1000
#define HB_WALL_PROBABILITY 25
#define HOLE_PROBABILITY 7 //Pr*1000

#define HOLE_DIAMETER 11 //mm
#define HARD_EDGED 0 //bool
#define WAYPOINT_NUMBER 4 //num
#define WAYPOINT_DIAMETER 90 //mm
#define WAYPOINT_REUSE 1 //bool

//Starting point for the game
#define NUM_WAYPOINTS 4
#define LOCATION1_X 50
#define LOCATION1_y 50

#define LOCATION2_X 130
#define LOCATION2_y 50
#define LOCATION3_X 130
#define LOCATION3_y 130
#define LOCATION4_X 50
#define LOCATION4_y 130

/***
 * Testing Waypoints
 */

//In a line
//#define LOCATION2_X 80
//#define LOCATION2_y 50
//#define LOCATION3_X 100
//#define LOCATION3_y 50
//#define LOCATION4_X 120
//#define LOCATION4_y 50

//Farther Away
//#define LOCATION2_X 200
//#define LOCATION2_y 50
//#define LOCATION3_X 200
//#define LOCATION3_y 200
//#define LOCATION4_X 50
//#define LOCATION4_y 200


#define REDLED_PORT LD4_GPIO_Port
#define REDLED_PIN LD4_Pin
#define GREENLED_PORT LD3_GPIO_Port
#define GREENLED_PIN LD3_Pin

/*
 * @brief Type for the wall, start coords x,y end coords x, y
 */
typedef struct wall_t{
	int start_coord[2];
	int end_coord[2];
}wall_t;

/*
 * @brief Type for the maze cells, x, y, and type.
 */
typedef struct cell_t {
	uint16_t x;
	uint16_t y;
	char type;
}cell_t;

/*
 * @brief Type for the waypoint, x, y, and bool for if it has been reached.
 */
typedef struct waypoint_t {
	uint16_t x;
	uint16_t y;
	uint8_t complete;
}waypoint_t;

/*
 * @brief Type for the hole, x, y.
 */
typedef struct hole_t {
	uint16_t x;
	uint16_t y;
}hole_t;

/*
 * @brief Initializes the LCD, Gyro, and the maze.
 */
void ApplicationInit(void);

/*
 * @brief Initialize the map.
 */
void map_init(void);
//initialize the game struct
void game_init(void);

//initialize the itcs
void itc_init(void);

/*
 * @brief Output the screen to lose the game.
 */
void lose_game(void);

/*
 * @brief Output the screen to win the game.
 */
void win_game(void);

/*
 * @brief Check if the drone is in the waypoint.
 */
uint8_t in_waypoint(void);

/*
 * @brief Check if the drone is in the hole.
 */
uint8_t in_hole(void);

/*
 * @brief Draw the tilt indication in the bottom right.
 */
void draw_tilt_indication(void);

/*
 * @brief Acquire the gyro data.
 */
void gyro_callback(void* argument);

/*
 *@brief Update the position of the ball and the angle the board is tilted at. Check collisions with walls and holes.
 */
void physics_callback(void* argument);

/*
 * @brief Keep track of the time elapsed.
 */
void game_time_callback(void* argument);

/*
 * @brief Update the lcd screen with the walls, holes, time, tilt indication, and the ball position.
 */
void lcd_led_callback(void* argument);

/*
 * @brief Update the current energy
 */
void disruptor_callback(void* argument);

/*
 * @brief Light the green led based on the current energy.
 */
void monitor_callback(void* argument);

/*
 * @brief Light the red led based on the current energy.
 */
void monitor2_callback(void* argument);

/*
 * @brief Timer for the disruptor to decide when to end it.
 */
void disruptor_timer_callback(void* argument);
#endif /* INC_APPLICATIONCODE_H_ */
