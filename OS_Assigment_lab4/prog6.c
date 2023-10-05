#include <stdio.h>
#define INFINITY ((float)1.0 / 0.0)

int main(int argc, char *argv[]) {
  int ABC[3];
  int max, min, avg, sum;

  printf("Enter the three numbers A B and C with a space between each number or press enter after every number\n");

  //input
  for (int i = 0; i < 3; i++) {
    scanf("%d", &ABC[i]);
  }
  
  //for loop
  max = ABC[0];
  min = ABC[0];
  sum = 0;
  for (int i = 0; i < 3; i++) {

    if (max < ABC[i]) 
      max = ABC[i];

    if (min > ABC[i]) {
      min = ABC[i];}

    sum = sum + ABC[i];
  }
  avg = sum / 3;

  //output
  printf("The Maximum is %d\n", max);
  printf("The  Minimum is %d\n", min);
  printf("The Average is %d\n", avg);

}
