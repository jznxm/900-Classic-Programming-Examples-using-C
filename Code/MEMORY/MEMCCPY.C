#include <stdio.h>
#include <string.h>

int main(void)
{
  char alphabet[27] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
  char target1[27], target2[27];

  memccpy(target1, alphabet, 'E', sizeof(alphabet));
  memcpy(target2, alphabet, sizeof(alphabet));

  printf("target1: %s\n", target1);
  printf("target2: %s\n", target2);
  return 0;
}
