#include<stdio.h>
typedef struct
{
    char a[20]; float b, c, d; int e;
} X;
int main()
{
    int f, g;
    float h;
    X y[100];
    scanf("%d", &f);
    for (g = 0; g < f; g++)
    {
        printf("Reading input: \n");
        printf("A:"); scanf("%s", y[g].a);
        printf("B:"); scanf("%f", &y[g].b);
        printf("C:"); scanf("%f", &y[g].c);
        printf("D:"); scanf("%f", &y[g].d);
        printf("E:"); scanf("%d", &y[g].e);
    }
    for (g = 0; g < f; g++)
    {
        h = ((((y[g].b + y[g].c) * 3) + (y[g].d * 4)) / 10);
        if (h < 5) printf("X %s E %d H %f FAILED.", y[g].a, y[g].e, h); else printf("X %s E %d H %f PASSED.", y[g].a, y[g].e, h);
    }
    return 0;
}