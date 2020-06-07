void logic()
{
//   char onGround = false;

   if (buggy.x < 0) buggy.x = 0;
   if (buggy.x >= MAP_WIDTH-2) buggy.x = MAP_WIDTH-3;
   if (buggy.y < 0) buggy.y = 0;
   if (buggy.y >= MAP_HEIGHT) buggy.y = MAP_HEIGHT-1;

   switch(map[buggy.y][buggy.x])
   {
      case '/' : buggy.icon = "🢅";  (buggy.dir == right) ? buggy.y--, buggy.dir = left : buggy.x--, buggy.y++; break;
      case '\\': buggy.icon = "🢆"; (buggy.dir == left) ?  buggy.y--, buggy.dir = right : buggy.x++, buggy.y++; break;
      case '_' : buggy.icon = "🢂"; break;
      case ' ' : buggy.y++; break;
      default  : buggy.y--;
   }
}
