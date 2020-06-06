#include <stdlib.h>

#define MAP_WIDTH  1100
#define MAP_HEIGHT 43

char map[MAP_HEIGHT][MAP_WIDTH];

void mapLoad(const char *fileName)
{
   short n = 0;
   FILE *fmap;

   if ((fmap = fopen(fileName, "r")) != NULL)
   {
      while (!feof(fmap) && n < MAP_HEIGHT)
      {
         fgets(map[n], MAP_WIDTH, fmap);
         n++;
      }
   }
   else
   {
      puts("Error: it file is not exist!");
      exit(1);
   }
}
