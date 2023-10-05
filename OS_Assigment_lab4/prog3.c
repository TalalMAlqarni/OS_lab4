#include <stdio.h>

int main(int argc, char *argv[]) {
  char name[20];
  char address[20];
  int age;

  printf("Enter the Name:\n");
  scanf("%[^\n]s", &name);

  printf("Enter the Age:\n");
  scanf("%d", &age);

  getchar();
  printf("Enter the address:\n");
  scanf("%[^\n]s", &address);

  printf("Your name is %s and your age is %d and you live in %s.\n", name, age, address);

  return 0;
}
