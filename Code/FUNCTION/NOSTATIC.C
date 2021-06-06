#include <stdio.h>

int main(void)
{
  extern int tip_count;
  extern char title[30];

  void show_title(void);

  printf("The number of tips is %d\n", tip_count);
  printf("The book's title is %s\n", title);
  show_title();
  return 0;
}
