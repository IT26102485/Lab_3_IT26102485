#include <stdio.h>

int main(void)
{
    double takeoff_speed_kmh;
    double distance;
    double takeoff_speed_ms;
    double acceleration;
    double time;

    printf("Enter takeoff speed (km/hr): ");
    scanf("%lf", &takeoff_speed_kmh);

    printf("Enter catapult distance (meters): ");
    scanf("%lf", &distance);

    takeoff_speed_ms = takeoff_speed_kmh / 3.6;

    acceleration = (takeoff_speed_ms * takeoff_speed_ms)
                   / (2.0 * distance);

    time = takeoff_speed_ms / acceleration;

    printf("Acceleration: %.2f m/s^2\n", acceleration);
    printf("Time to takeoff speed: %.2f seconds\n", time);

    return 0;
}
