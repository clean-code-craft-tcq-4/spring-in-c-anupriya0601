#include "emailAlerter.h"
#include <stdio.h>

void emailAlerter() {
    emailAlertCallCount++;
    printf("emailAlertCallCount: %d",emailAlertCallCount);
}