enum {left, right};

struct Buggy
{
   short x, y;
   char width, height, dir, frame;
} buggy;

char car[4][3][7] =
{
  {",_ \\_ ",
   "|____;",
   "(-)(-)"},

  {",_ \\_ ",
   "|____;",
   "(\\)(\\)"},

  {",_ \\_ ",
   "|____;",
   "(|)(|)"},

  {",_ \\_ ",
   "|____;",
   "(/)(/)"}
};

void exitFoo()
{
   echo();
   curs_set(1);
   endwin();
   system("xset r rate");
   exit(0);
}
