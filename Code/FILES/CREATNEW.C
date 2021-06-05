#include <stdio.h>
#include <dos.h>
#include <io.h>

int main(void)
{
  int handle;

  if ((handle = creat("NEW.DAT", 0)) == -1)
    printf("Error creating NEW.DAT\n");
  else
  {
    printf("File successfully created\n");
    close(handle);
  }
  return 0;
}
