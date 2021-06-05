#include <stdio.h>
#include <dos.h>

int main(void)
{
  struct diskfree_t diskinfo;
  long disk_space;

  if (_getdiskfree(0, &diskinfo))
    printf("Error accessing drive C:\n");
  else
  {
    disk_space = (long)diskinfo.avail_clusters *
                 (long)diskinfo.bytes_per_sector *
                 (long)diskinfo.sectors_per_cluster;

    printf("Available disk space %ld\n", disk_space);
  }
  return 0;
}
