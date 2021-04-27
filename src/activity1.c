#include "activity1.h"

/**
 * @brief Checks if both switches are closed and switches LED on if successful
 * 
 */

void activity1()
{
if((!(PIND&(1<<PD0))) & (!(PIND&(2<<PD0))))
        {
            PORTB|=(1<<PB0);
            _delay_ms(20);
        }
        else
        {
            PORTB&=~(1<<PB0);
            _delay_ms(20);
        }
}