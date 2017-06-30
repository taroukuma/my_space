#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char **argv) {
  char *temp = "sudo tee /sys/class/backlight/intel_backlight/brightness <<< ";
  char *command = malloc(strlen(temp) + 4);
  strcpy(command, temp);
  strcat(command, argv[1]);
  system(command);
  free(command);
}
