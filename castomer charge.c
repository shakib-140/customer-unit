#include<stdio.h>
#include<conio.h>
int main()
{


    int unit,charge;
    printf("enter the unit of customer=");
    scanf("%d",&unit);


    if(unit>0&&unit<=200)
    {
        charge=unit*0.75;
        printf("the charge is=%d\n",charge);
    }
    else if(unit>200&&unit<=400)
    {
        charge=1000+unit*0.5;
        printf("the charge is=%d",charge);
    }

    else if(unit>400&&unit<=600)
    {
        charge=1200+unit*0.75;
        printf("the charge is=%d",charge);
    }
    else if(unit>600)
    {

        charge=1500+unit*1;
        printf("the charge is=%d",charge);

    }
    else

        printf("not valid unit");


    getch();

}
