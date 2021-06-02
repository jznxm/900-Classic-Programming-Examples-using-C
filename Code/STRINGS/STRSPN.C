#include <stdio.h>
#include <string.h>

int main(void)
{
  printf("Searching for Abc in AbcDef %ld\n",
         strspn("AbcDef", "Abc"));

  printf("Searching for cbA in AbcDef %ld\n",
         strspn("AbcDef", "cbA"));

  printf("Searching for Def in AbcAbc %ld\n",
         strspn("AbcAbc", "Def"));
  return 0;
}
