#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>
#include "file_input_output.h"

void read_lines(FILE *file_ptr, my_string *array) {

  my_string text;
  int numberOfLines;
  int index = 0;
  fscanf(file_ptr, "%d", &numberOfLines);
  printf("%d\n", numberOfLines);
  while (index < numberOfLines) {

    fscanf(file_ptr, "%s", &text.str);
    array[index] = text;
    index++;
  }

}

void print_lines_to_terminal(my_string *array) {

    printf("The file contained: \n");
    for (int index = 0; index < sizeof(array); index++) {
      printf("%s\n", array[index].str);
    }

 }

void main()
{
  FILE *file_ptr;
  my_string array[10];

  if ((file_ptr = fopen("mytestfile.dat", "r")) == NULL)
    printf("File could not be opened");
  else
    read_lines(file_ptr, array);
    print_lines_to_terminal(array);

 fclose(file_ptr);
}
