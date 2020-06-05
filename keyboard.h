void keyboard()
{
	switch(getch())
	{
      case KEY_LEFT:  buggy.x--; buggy.dir = left;  buggy.frame = (buggy.frame > 0) ? buggy.frame-1 : 3; break;
      case KEY_RIGHT: buggy.x++; buggy.dir = right; buggy.frame = (buggy.frame < 3) ? buggy.frame+1 : 0; break;

      case '\x1b': exitFoo(); break;

      default: break;
	}
}
