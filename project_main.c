/**
 * @file project_main.c
 * @author anoop
 * @brief The 2 inputs are button sensor and seat. If passenger is seated
and button is turned on, LED lights up. otherwise it stays off.
 * @version 0.1
 * @date 2021-04-23
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#include "activity1.h"

/**
 * @brief Initialize all the Peripherals and pin configurations
 * 
 */
void peripheral_init(void)
{
	DDRB|=(1<<PB0);
	DDRD&=~(1<<PD0);
	PORTD|=(1<<PD0);
	DDRD&=~(2<<PD0);
	PORTD|=(2<<PD0);
}

/**
 * @brief Main function where code is executed
 * 
 * @return int 
 */
int main(void)
{
	/* Initialize Peripherals */
	peripheral_init();

    while(1)
    {
        activity1();
    }

    return 0;
}
