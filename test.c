#include <stdio.h>
#include <string.h>

typedef struct Me {
  int gpa;
  int age;
  char *name;
} me;


int main() {
  me my_struct;
  me *kumar = &my_struct;
  kumar -> gpa = 1;
  kumar -> age = 10;
  printf("%d %d \n", kumar -> gpa, kumar -> age);
  return 0;
}

