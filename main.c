#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <ncurses.h>

#include "buggy.h"
#include "map.h"
#include "keyboard.h"
#include "logic.h"
#include "draw.h"

int main()
{
   mapLoad("Maps/map1");
   buggy.x = 1;
   buggy.y = 1;

   initscr();
   noecho();
   curs_set(0);
   keypad(stdscr, 1);
   getmaxyx(stdscr, stty_height, stty_width);
   halfdelay(1);

   system("xset r rate 120 8");

   while(1)
   {
      keyboard();
      logic();
      clear();
      draw();
      mvaddch(stty_height/2, stty_width/2, '@');
      refresh();
   }
   system("xset r rate");
   curs_set(1);
   endwin();

   return 0;
}
