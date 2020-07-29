#include <xc.h>
#include "uart.h"

void putch(char data) {
    while (!IFS0bits.U1TXIF);
    U1TXREG = data;
}

uint8_t getch(void) {
    while (!IFS0bits.U1RXIF);
    return U1RXREG;
}