#include <stdio.h>
#include "split.h"

int main() {
    int start_minutes = on_work();
    int end_minutes = off_work();
    
    int min_day = end_minutes - start_minutes;
    
    int week_minutes = min_day * 7;
    int hours = week_minutes / 60;
    int minutes = week_minutes % 60;
    
    printf("Работа в неделю: %d часов %d минут\n", hours, minutes);
    
    return 0;
}