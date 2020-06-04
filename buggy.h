enum {left, right};

struct Buggy
{
   short x, y;
   char width, height, dir;
} buggy;

char car1[3][7] =
{
   " _ \\_ ",
   "|__ _\'",
   "\'o` o`"
};

void exitFoo()
{
   echo();
   curs_set(1);
   endwin();
   system("xset r rate");
   exit(0);
}
