enum {left, right};

struct Buggy
{
   short x, y;
   char width, height, dir, frame, whellFrame, rot, *icon;
} buggy;

void exitFoo()
{
   echo();
   curs_set(1);
   endwin();
   system("xset r rate");
   exit(0);
}
