// Accept marks for 3 students , each out of 100. A student qualifies if he scores >= 40 in individual subjects and >= 45 as average.
// Print grades.

#include <stdio.h>
int marks()
{

    int Math, Physics, Chemistry;
    printf("Enter marks for Mathematics : \n");
    scanf("%d", &Math);
    printf("Enter marks for Physics : \n");
    scanf("%d", &Physics);
    printf("Enter marks for Chemistry : \n");
    scanf("%d", &Chemistry);

    if (Physics>0 && Physics < 40)
    {
        printf("Physics     : Fail \n");
    }

    else if (Physics >= 40 && Physics <= 44)
    {
        printf("Physics     : Below Avg \n");
    }
    else if (Physics >= 45 && Physics <= 50)
    {
        printf("Physics     : Avg \n");
    }
    else if (Physics >= 51 && Physics <= 60)
    {
        printf("Physics     : D \n");
    }
    else if (Physics >= 61 && Physics <= 70)
    {
        printf("Physics     : C \n");
    }
    else if (Physics >= 71 && Physics <= 80)
    {
        printf("Physics     : B \n");
    }
    else if (Physics >= 81 && Physics <= 90)
    {
        printf("Physics     : A \n");
    }
    else if (Physics >= 91 && Physics <= 100)
    {
        printf("Physics     : O \n");
    }
    else
    {
        Physics = 0;
        printf("Please enter valid number for Physics \n");
    }

    if (Chemistry < 40)
    {
        printf("Chemistry   : Fail \n");
    }

    else if (Chemistry >= 40 && Chemistry <= 44)
    {
        printf("Chemistry   : Below Avg \n");
    }
    else if (Chemistry >= 45 && Chemistry <= 50)
    {
        printf("Chemistry   : Avg \n");
    }
    else if (Chemistry >= 51 && Chemistry <= 60)
    {
        printf("Chemistry   : D \n");
    }
    else if (Chemistry >= 61 && Chemistry <= 70)
    {
        printf("Chemistry   : C \n");
    }
    else if (Chemistry >= 71 && Chemistry <= 80)
    {
        printf("Chemistry   : B \n");
    }
    else if (Chemistry >= 81 && Chemistry <= 90)
    {
        printf("Chemistry   : A \n");
    }
    else if (Chemistry >= 91 && Chemistry <= 100)
    {
        printf("Chemistry   : O \n");
    }
    else
    {
        Chemistry = 0;
        printf("Please enter valid number for Chemistry \n");
    }

    if (Math < 40)
    {
        printf("Mathematics : Fail \n");
    }

    else if (Math >= 40 && Math <= 44)
    {
        printf("Mathematics : Below Avg \n");
    }
    else if (Math >= 45 && Math <= 50)
    {
        printf("Mathematics : Avg \n");
    }
    else if (Math >= 51 && Math <= 60)
    {
        printf("Mathematics : D \n");
    }
    else if (Math >= 61 && Math <= 70)
    {
        printf("Mathematics : C \n");
    }
    else if (Math >= 71 && Math <= 80)
    {
        printf("Mathematics : B \n");
    }
    else if (Math >= 81 && Math <= 90)
    {
        printf("Mathematics : A \n");
    }
    else if (Math >= 91 && Math <= 100)
    {
        printf("Mathematics : O \n");
    }
    else
    {
        Math = 0;
        printf("Please enter valid number for Mathematics \n");
    }

    int total = Math + Physics + Chemistry;
    float per = (float)total / 300 * 100.0;

    printf("Overall Percentage : %.2f %%\n", per);

    if (per > 0.00 && per < 75.00)
    {

        printf("<--------------Hustle More--------------> ");
    }
    else if (per >= 75.00 && per <= 100.00)
    {

        printf("<--------------Keep it Up Dude--------------> ");
    }
}
int main()
{
    marks();
}