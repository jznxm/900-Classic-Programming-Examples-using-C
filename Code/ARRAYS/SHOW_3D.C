#include <stdio.h>

int main(void)
{
  int row, column, table;

  float values[2][3][5] = {
      {{1.0, 2.0, 3.0, 4.0, 5.0},
       {6.0, 7.0, 8.0, 9.0, 10.0},
       {11.0, 12.0, 13.0, 14.0, 15.0}},

      {{16.0, 17.0, 18.0, 19.0, 20.0},
       {21.0, 22.0, 23.0, 24.0, 25.0},
       {26.0, 27.0, 28.0, 29.0, 30.0}}};

  for (row = 0; row < 2; row++)
    for (column = 0; column < 3; column++)
      for (table = 0; table < 5; table++)
        printf("values[%d][%d][%d] = %f\n", row, column, table,
               values[row][column][table]);
  return 0;
}
