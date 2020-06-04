void keyboard()
{
	switch(getch())
	{
      case KEY_LEFT:  buggy.x--; buggy.dir = left;  break;
      case KEY_RIGHT: buggy.x++; buggy.dir = right; break;

      case '\x1b': exitFoo(); break;

      default: break;
	}
}
