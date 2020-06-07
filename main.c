#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <ncurses.h>
#include <locale.h>

#include "buggy.h"
#include "map.h"
#include "keyboard.h"
#include "logic.h"
#include "draw.h"

int main()
{
   setlocale(LC_ALL, "");
   mapLoad("Maps/map1");
   buggy.x = 5;
   buggy.y = 10;
   buggy.width = 6;
   buggy.height = 3;
   buggy.frame = 0;
   buggy.rot = 0;
   buggy.whellFrame = 0;
   buggy.icon = "🢂";

   initscr();
   noecho();
   curs_set(0);
   keypad(stdscr, 1);
   getmaxyx(stdscr, stty_height, stty_width);
   raw();
   timeout(100);

   system("xset r rate 120 8");

   while(true)
   {
      keyboard();
      logic();
      clear();
      draw();
      refresh();
   }

   system("xset r rate");
   curs_set(1);
   endwin();

   return -1;
}
