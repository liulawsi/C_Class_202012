
 #include <stdio.h>
 #include <stdlib.h>
 #include <stdbool.h>

 char map[15][40] = {"@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@"
                ,"@X        @@@@@          @@@@@@@@@@@@@@@"
                ,"@ @@@@@@@ @  @@@@@ @@@@@@@@@@@@@@      @"
                ,"@ @@@@@@@ @@ @@                   @@@@ @"
                ,"@      @@    @@@@@ @@@@@@@@@@ @@@@@@@@ @"
                ,"@@@@@@ @@@@@@@@@@@   @@@@@@@@ @@     @ @"
                ,"@      @@@@@@   @@@@ @@   !@@ @@ @@@ @ @"
                ,"@ @@@@@@@     @@@@@@ @@ @@@@@ @@ @@@ @ @"
                ,"@ @@@@@   @@@@@@@@@@ @@ @@@@@ @@  @@ @ @"
                ,"@       @               @@@@@  @@ @  @ @"
                ,"@ @@@@@ @@@@@@ @@@@@@@@@@@@@@@ @@ @@@@ @"
                ,"@   @@@   @@@@ @@@ @@@@@       @@      @"
                ,"@@@ @@@@@ @@@@@@@@    @@@@ @@@@@@@@@@@@@"
                ,"@@  @@             @@@@@@@             @"
                ,"@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@"};

 int Go(int y, int x)
 {
     bool found = false;
     if (map[y][x] == '!') return true;
     else
     {
         map[y][x] = '$';
         if ((map[y][x+1] == ' ') || (map[y][x+1] == '!'))
             if (Go(y, x+1)) found = true;
         if ((map[y+1][x] == ' ') || (map[y+1][x] == '!'))
             if (Go(y+1, x)) found = true;
         if ((map[y][x-1] == ' ') || (map[y][x-1] == '!'))
             if (Go(y, x-1)) found = true;
         if ((map[y-1][x] == ' ') || (map[y-1][x] == '!'))
             if (Go(y-1, x)) found = true;

         if (found) map[y][x] = '+';
         else map[y][x] = '.';
         return found;
     }
 }

 void showMap()
 {
     for(int y = 0; y < 15; y++)
     {
         for(int x = 1; x < 40; x++)
         {
             printf("%c", map[y][x]);
         }
         printf("\n");
     }
     printf("\n\n");
 }
 int main()
 {
     showMap();
     Go(1,1);
     showMap();

     return 0;
 }

