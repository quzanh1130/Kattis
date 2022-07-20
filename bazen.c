#include <stdio.h>

int main()
{
    float x, y;
    scanf("%f %f",&x,&y);


    float a, b;
    if(y == 0.0)
    {
        if(x <= 125.0)
        {
            b = 250.0*125/(250 - x);
            a = 250.0 - b;
            printf("%0.2f %0.2f",a,b);
        }
        else
        {
            b = 250.0*125/x;
            printf("0.00 %0.2f",b);
        }
    }
    else if(x == 0.0)
    {
        if(y <= 125.0)
        {
            a = 250.0*125/(250-y);
            b = 250.0 - a;
            printf("%0.2f %0.2f",a,b);
        }
        else
        {
            a = 250.0*125/y;
            printf("%0.2f 0.00",a);
        }
    }
    else
    {
        if(x <= 125.0)
        {
            a = 250.0-250.0*125/y;
            printf("%0.2f 0.00",a);
        }
        else
        {
            b = 250.0-250.0*125/x;
            printf("0.00 %0.2f",b);
        }
    }

    return 0;
}