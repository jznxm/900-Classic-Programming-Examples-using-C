#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  int i;

  struct ListEntry
  {
    int number;
    struct ListEntry *next;
  } start, *node;

  start.next = NULL; /* Empty list*/

  node = &start; /* Point to the start of the list*/

  for (i = 1; i <= 10; i++)
  {
    node->next = (struct ListEntry *)malloc(sizeof(struct ListEntry));
    node = node->next;
    node->number = i;
    node->next = NULL;
  }

  /* Display the list*/

  node = start.next;

  while (node)
  {
    printf("%d ", node->number);
    node = node->next;
  }
  return 0;
}
