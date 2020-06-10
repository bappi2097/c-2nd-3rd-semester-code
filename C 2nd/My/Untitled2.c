#include <stdio.h>
int main()
{
    double hr,km;
    double lt;
    scanf("%lf",&hr);
    scanf("%lf",&km);
    lt=(hr*km)/12;
    printf("%.3lf\n",lt);
    return 0;
}
