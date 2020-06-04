void keyboard()
{
	switch(getch())
	{
      case KEY_LEFT:  buggy.x--; buggy.dir = left;  break;
      case KEY_RIGHT: buggy.x++; buggy.dir = right; break;
      defaul: break;
	}
}
