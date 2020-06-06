void keyboard()
{
	switch(getch())
	{
      case KEY_LEFT:  buggy.x--; buggy.dir = left;  buggy.whellFrame = (buggy.whellFrame > 0) ? buggy.whellFrame-1 : 3; break;
      case KEY_RIGHT: buggy.x++; buggy.dir = right; buggy.whellFrame = (buggy.whellFrame < 3) ? buggy.whellFrame+1 : 0; break;

      case '\x1b': exitFoo(); break;

      default: break;
	}
}
