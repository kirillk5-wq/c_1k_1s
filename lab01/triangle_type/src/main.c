/* Аудиторна робота с.58 #6 */

//double max = (fabs(a) < fabs(b)) ? (fabs(b) < fabs(c) ? c : b) : (fabs(a) < fabs(c) ? c : a);

#include "app.h"

#define MAX_OF_3(a, b, c) (fabs(a) < fabs(b)) ? (fabs(b) < fabs(c) ? (c) : (b)) : (fabs(a) < fabs(c) ? (c) : (a))

int main()
{
    double a, b, c;

    printf("Enter a, b, c: ");

    int ret = scanf("%lf %lf %lf", &a, &b, &c);

    //==, !=
    //fabs(a - b) < 1e-9
    //a~b
    if (ret != 3)
    {
        printf("Invalid input\n");
        return 1;
    }
	double max = MAX_OF_3(a, b, c);


	if (fabs(a + b) < c || fabs(a + c) < b || fabs(b + c) < a)
	{
		printf("Triangle does not exist\n");
	}

    else if (fabs(max) < 1e-12)

    { printf("All sides are zero\n");
    }

    else if (fabs(a - b) < 1e-3 && fabs(a - c) < 1e-3 && fabs(b - c) < 1e-3)
    {
        printf("Triangle has all equal sides\n");
    }

    else if (fabs(a - b) < 1e-3 || fabs(a - c) < 1e-3 || fabs(b - c) < 1e-3)
    {
        printf("Triangle is isosceles\n");
    }

    else if (fabs(a * a + b * b - c * c) < 1e-3 || fabs(a * a + c * c - b * b) < 1e-3 || fabs(b * b + c * c - a * a) < 1e-3)
    {
        printf("Triangle is right-angled\n");
    }

    else
    {
        printf("Triangle is scalene\n");
    }


    return 0;
}