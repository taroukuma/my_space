#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char **argv) {
  char cmd_part_one[] = "xrandr --output HDMI-0 --brightness ";
  char cmd_part_two[] = " --gamma 1.2:1.2:1.2";
  if (argv[1][0] != 'r') {
    char *result = malloc(strlen(cmd_part_one) + strlen(cmd_part_two) + 2);
    strcpy(result, cmd_part_one);
    strcat(result, argv[1]);
    strcat(result, cmd_part_two);
    system(result);
    free(result);
  } else {
    char *result = malloc(strlen(cmd_part_one) + 5);
    strcpy(result, cmd_part_one);
    strcat(result, "1");
    system(result);
    free(result);
  }
}
