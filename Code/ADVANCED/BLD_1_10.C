#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  int i;

  struct ListEntry
  {
    int number;
    struct ListEntry *next;
    struct ListEntry *previous;
  } start, *node, *new1;

  start.next = NULL; /* Empty list*/
  start.previous = NULL;
  node = &start; /* Point to the start of the list*/

  for (i = 1; i < 10; i += 2)
  {
    node->next = (struct ListEntry *)malloc(sizeof(struct ListEntry));
    node->next->previous = node;
    node = node->next;
    node->number = i;
    node->next = NULL;
  }

  for (i = 2; i <= 10; i += 2)
  {
    int found = 0;

    new1 = (struct ListEntry *)malloc(sizeof(struct ListEntry));
    new1->number = i;
    node = start.next;

    do
    {
      if ((node->number) > (new1->number))
      {
        new1->next = node;
        new1->previous = node->previous;
        node->previous->next = new1;
        node->previous = new1;
        found = 1;
      }
      else
        node = node->next;
    } while ((node->next) && (!found));

    if (!found)
      if (node->number > new1->number)
      {
        new1->next = node;
        new1->previous = node->previous;
        node->previous->next = new1;
        node->previous = new1;
      }
      else
      {
        new1->next = NULL;
        new1->previous = node;
        node->next = new1;
      }
  }

  /* Display the list*/
  node = start.next;
  do
  {
    printf("%d ", node->number);
    node = node->next;
  } while (node);
}
