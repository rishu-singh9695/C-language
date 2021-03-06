#include <stdio.h>

typedef struct date
{

    int date;
    int month;
    int year;

} date;

void display(date d)
{

    printf("The date is : %d/%d/%d\n", d.date, d.month, d.year);
}

int datecomp(date d1, date d2)
{
    if (d1.year > d2.year)
    {

        return 1;
    }
    if (d1.year < d2.year)
    {
        return -1;
    }

    if (d1.month > d2.month)
    {
        return 1;
    }
    if (d1.month < d2.month)
    {
        return -1;
    }

    if (d1.date > d2.date)
    {
        return 1;
    }
    if (d1.date < d2.date)
    {
        return -1;
    }

    return 0;
}

int main()
{
    date d1 =
        {3, 5, 2090};
    date d2 =
        {5, 8, 2050};
    display(d1);
    display(d2);
    int a = datecomp(d1, d2);
    printf("date comparison return: %d", a);
    return 0;
}