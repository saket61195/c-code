#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int i = 4;
    double d = 4.0;
    char s[] = "HackerRank ";

    int k;
    double m;
    // Declare second integer, double, and String variables.
    scanf("%d", &k);
    scanf("%lf", &m);
    char a[100];
    // Read and save an integer, double, and String to your variables.
    printf("%d\n", i + k);
    // Print the sum of both integer variables on a new line.
    printf("%.1lf\n", d + m);
    // Print the sum of the double variables on a new line.
    scanf("% [^\n]s", &a);
    fgets(a, 200, stdin);
    // Concatenate and print the String variables on a new line
    // The 's' variable above should be printed first.
    printf("%s", s);
    printf("%s", a);

    return 0;