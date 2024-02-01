#include <stdio.h>
#include <stdlib.h>

// int main()
// {
//   FILE *fptr;
//   fptr = fopen("ascendNum.txt","a");
//   for (int i = 0; i < 100000; i = i + 2)
//   {
//     fprintf(fptr, "%d\n", i);
//   }
//   return 0;
// }

// int main()
// {
//   FILE *fptr;
//   fptr = fopen("descendNum.txt","a");
//   for (int i = 100000; i > 0; i = i - 2)
//   {
//     fprintf(fptr, "%d\n", i);
//   }
//   return 0;
// }

int main()
{
  FILE *fptr;
  fptr = fopen("randomNum.txt","a");
  for (int i = 0; i < 100000; i = i + 2)
  {
    int random = rand() % 200000;
    fprintf(fptr, "%d\n", random);
  }
  return 0;
}