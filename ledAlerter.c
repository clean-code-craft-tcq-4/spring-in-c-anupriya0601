#include "ledAlerter.h"
#include <stdio.h>

void ledAlerter() {
    ledAlertCallCount++;
    printf("ledAlertCallCount: %d",ledAlertCallCount);
}