#include <stdio.h>
#include <dos.h>
#include <io.h>

int main(void)
{
  char path[64] = "D:\\TEMP\\";

  int handle;

  if ((handle = creat(path, 0)) == -1)
    printf("Error creating file\n");
  else
  {
    printf("Complete path: %s\n", path);
    close(handle);
  }
  return 0;
}
