#ifndef __ACTIVITY_1_H__
#define __ACTIVITY_1_H__
/**
 * @file activity1.h
 * @author anoop
 * @brief check for switch and control led
 * @version 0.1
 * @date 2021-04-27
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#define F_CPU 16000000UL 	/**< Clock Frequency of MCU is 16 MHz */
#include <avr/io.h>
#include <util/delay.h>

/**
 * @brief && 2 switches and control led
 * 
 * @param[in] delay_time Delay in Micro seconds
 * 
 */
void activity1();

#endif /* __ACTIVITY_1_H__ */