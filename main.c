#include <stdio.h>

int main()
  {
    int k;
    long long tien = 0;

    scanf("%d", &k);

    if (k <= 50)
    {
        tien = 1678LL * k;
    } 
    else if (k <= 100)
    {
        tien = 1678LL * 50 + 1734LL * (k - 50);
    }
    else if (k <= 200)
    {
        tien = 1678LL * 50 + 1734LL * 50
             + 2014LL * (k - 100);
    } 
    else if (k <= 300)
    {
        tien = 1678LL * 50 + 1734LL * 50
             + 2014LL * 100 + 2536LL * (k - 200);
    } 
    else if (k <= 400)
    {
        tien = 1678LL * 50 + 1734LL * 50
             + 2014LL * 100 + 2536LL * 100
             + 2834LL * (k - 300);
    } 
    else
    {
        tien = 1678LL * 50 + 1734LL * 50
             + 2014LL * 100 + 2536LL * 100
             + 2834LL * 100 + 2927LL * (k - 400);
    }

    printf("%lld\n", tien);


return 0;
}