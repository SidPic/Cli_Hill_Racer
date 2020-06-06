short stty_height;
short stty_width;

void draw()
{
   for(short i = ((buggy.y-stty_height/2 < 0) ? 0 : buggy.y-stty_height); i < ((buggy.y+stty_height/2 < MAP_HEIGHT) ? buggy.y+stty_height/2 : MAP_HEIGHT); i++)
   for (short j = ((buggy.x-stty_width/2 < 0) ? 0 : buggy.x-stty_width); j < ((buggy.x+stty_width/2 < MAP_WIDTH-1) ? buggy.x+stty_width/2 : MAP_WIDTH-1); j++)
   {
   	mvaddch(stty_height/2-buggy.y+i, stty_width/2-buggy.x+j, map[i][j]);
   }
   mvaddstr(stty_height/2, stty_width/2, buggy.icon);
}
