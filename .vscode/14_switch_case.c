#include <stdio.h>
int main()
{

    // SWITCH CASE GENERLY WE USE IT FOR TAKING RATING TYPE THINGS

    int rating;
    printf("Enter the rating between 1 to 5\n ");
    scanf("%d", &rating);

    switch (rating)
    {
    case 1:
        printf("the rating is 1");
        break;
    case 2:
        printf("your rating is 2");
        break;
    case 3:
        printf("your rating is 3");
        break;
    case 4:
        printf("your rating is 4");
        break;
    case 5:
        printf("your rating is 5");
        break;
    default:
        printf("invalid rating");
    }

    return 0;
}