#include<stdio.h>
struct Time {
    int hours;
    int minutes;
    int seconds;
};

int main(){
    struct Time time1,time2,sumTime;
    printf("Enter Time 1 (hours minutes seconds): ");
    scanf("%d %d %d",&time1.hours,&time1.minutes,&time1.seconds);

    printf("Enter Time 2 (hours minutes seconds): ");
    scanf("%d %d %d",&time2.hours,&time2.minutes,&time2.seconds);

    int totalSeconds = time1.seconds + time2.seconds;
    sumTime.seconds = totalSeconds % 60;
    int carryMinutes = totalSeconds / 60;

    int totalMinutes = time1.minutes + time2.minutes;
    sumTime.minutes = totalMinutes % 60;
    int carryHours = totalMinutes / 60;

    sumTime.hours = time1.hours + time2.hours + carryHours;

    printf("\n Time 1: %dh %dm %ds\n",time1.hours,time1.minutes,time1.seconds);
    printf("Time 2: %dh %dm %ds\n",time2.hours,time2.minutes,time2.seconds);
    printf("Sum Time: %dh %dm %ds\n",sumTime.hours,sumTime.minutes,sumTime.seconds);

    return 0;

}
