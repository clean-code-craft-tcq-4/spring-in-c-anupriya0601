#include "ledAlerter.h"

void ledAlerter() {
    ledAlertCallCount++;
    printf("ledAlertCallCount: %d",ledAlertCallCount);
}