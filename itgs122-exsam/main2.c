#include <stdio.h>


int area(int len, int wid);

int main()
{
    int l, w;
    printf("please enter length of the area ->\t");
    scanf("%d", &l);
    printf("please enter width of the area ->\t");
    scanf("%d", &w);
    int r = area(l, w);
    printf("the area = %d", r);

    return 0;
}

int area(int len, int wid)
{
    int result = len * wid;
    return result;
}
