#include <stdio.h>

struct Distance
{
    int kilometers;
    float meters;
} dist1, dist2, summation;

int c3_2()
{
    printf("Enter kiloemters and meters for the first distance : \n");
    scanf("%d %f", &dist1.kilometers, &dist1.meters);

    printf("Enter kiloemeters and meters for the second distance : \n");
    scanf("%d %f", &dist2.kilometers, &dist2.meters);

    summation.kilometers = dist1.kilometers + dist2.kilometers;
    summation.meters = dist1.meters + dist2.meters;

    while (summation.meters >= 1000)
    {
        summation.meters = summation.meters - 1000;
        summation.kilometers++;
    }

    printf("Sum is %d kilometers, %.1f meters\n", summation.kilometers, summation.meters);
    return 0;
}
