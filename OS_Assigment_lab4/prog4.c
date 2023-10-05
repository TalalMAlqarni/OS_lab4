#include <stdio.h>

int main(int argc, char *argv[])
{

int M_num;
char th[1][20] = {"th month is"};

printf("Enter the number of the month\n");

scanf("%d",&M_num);

switch (M_num) {
case 1:
    printf("1st month is January\n"); break;
case 2:
    printf("2ed month is February\n"); break;
case 3:
    printf("3rd month is March\n"); break;
case 4:
    printf("%d%s April\n",M_num,th); break;
case 5:
    printf("%d%s May\n",M_num,th); break;
case 6:
    printf("%d%s June\n",M_num,th); break;
case 7:
    printf("%d%s July\n",M_num,th); break;
case 8:
    printf("%d%s August\n",M_num,th); break;
case 9:
    printf("%d%s September\n",M_num,th); break;
case 10:
    printf("%d%s October\n",M_num,th); break;
case 11:
    printf("%d%s November\n",M_num,th); break;
case 12:
    printf("%d%s December\n",M_num,th); break;
default:
    printf("invalid number\n"); break;
    }

}
