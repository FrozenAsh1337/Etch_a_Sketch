#include <ncurses.h>
int main()
{
	int row,col,ch;
	initscr();
	cbreak();
	keypad(stdscr,TRUE);
	getmaxyx(stdscr,row,col);
	row=row/2;col=col/2-1;
	while(ch!=27)
	{
		ch=getch();
		if(ch=='c') clear();
		if(ch==KEY_UP)
		{
			row--;
			mvprintw(row,col,"|");
			refresh();
		}
		else if(ch==KEY_DOWN)
		{
			row++;
			mvprintw(row,col,"|");
			refresh();
		}
		else if(ch==KEY_LEFT)
		{
			col--;
			mvprintw(row,col,"-");
			refresh();
		}
		else if(ch==KEY_RIGHT)
		{
			col++;
			mvprintw(row,col,"-");
			refresh();
		}
	}
	endwin();
	return 0;
}
