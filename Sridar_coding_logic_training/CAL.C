#include<stdio.h> // etch or aitch
#include<stdlib.h>
//12.23

#define LT 218
#define LB 192
#define RT 191
#define RB 217
#define LST 195
#define RST 180
#define TT 194
#define BT 193
#define CROSS 197
#define VL 179
#define HL 196
#define SP 32
#define BS 8
#define MAXROWS 25
#define MAXCOLS 80
#define WIDTH 5
#define DIM 7
#define LEFT 75
#define RIGHT 77
#define UP 72
#define DOWN 80
#include<windows.h>
void gotoxy(int x, int y) // col , row  x is col and y is row
{
  COORD coord;
  coord.X = x;
  coord.Y = y;
  SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}
void drawDabba()
{
    int row;
    int col;
    int ctr1;
    int ctr2;
    int ctr3;
    int ctr4;

    col = (MAXCOLS - ( (DIM * WIDTH) + (DIM+1))) / 2;
    row = (MAXROWS - ( DIM + DIM + 1) )/ 2;
    gotoxy(col, row);
    printf("%c", LT);
    for( ctr2 = 0; ctr2 < DIM; ctr2 +=1)
    {
    for(ctr1 = 0; ctr1 < WIDTH ;ctr1+=1)
    {
    printf("%c", HL);

    }
    printf("%c", TT);
    }
    printf("%c%c", BS, RT);
    for( ctr3 = 0; ctr3 < DIM; ctr3+=1)
    {
    row+=1;
    gotoxy(col, row);
    for( ctr2 = 0; ctr2 <= DIM; ctr2+=1)
    {
    printf("%c", VL);
    for(ctr1 = 0; ctr1 < WIDTH ;ctr1+=1)
    {
    printf("%c", SP);

    }
    }
    row+=1;
    gotoxy(col, row);
    printf("%c", LST);
    for( ctr2 = 0; ctr2 < DIM; ctr2 +=1)
    {
    for(ctr1 = 0; ctr1 < WIDTH ;ctr1+=1)
    {
    printf("%c", HL);

    }
    printf("%c", CROSS);
    }
    printf("%c%c", BS, RST);
    }
        gotoxy(col, row);

    printf("%c", LB);

    for( ctr2 = 0; ctr2 < DIM; ctr2 +=1)
    {
    for(ctr1 = 0; ctr1 < WIDTH ;ctr1+=1)
    {
    printf("%c", HL);

    }
    printf("%c", BT);
    }
    printf("%c%c", BS, RB);


}
void col_heading()
{
    int row;
    int col;
    char *days[] = {"SUN","MON","TUE","WED","THU","FRI","SAT"};
    col = (MAXCOLS - ( (DIM * WIDTH) + (DIM+1))) / 2;
    row = (MAXROWS - ( DIM + DIM + 1) )/ 2;
    row += 1;
    col += 2;
    int ctr;
    for( ctr = 0; ctr < DIM; ctr += 1)
    {
        gotoxy(col + ctr * (WIDTH+1), row);
        printf("%s",days[ctr]);

    }
}
int DayOfWeek( int y, int m, int d ) /* returns Day of Week:
0 = Sunday, 1= Monday...
*/
{
static int t[] = { 0, 3, 2, 5, 0, 3, 5, 1, 4, 6, 2, 4 };
y -= m < 3;
return (y + y/4 - y/100 + y/400 + t[m-1] + d) % 7;
} /*--DayOfWeek( )--------*/

void calendar(int mm, int year)
{
    int row;
    int col;
    char *months[] = {"","January","February","March","April","May","June","July",\
    "August","September","October","November","December"};
    int dim [] = {0,31,28,31,30,31,30,31,31,30,31,30,31};
    col = (MAXCOLS - ( (DIM * WIDTH) + (DIM+1))) / 2;
    row = (MAXROWS - ( DIM + DIM + 1) )/ 2;
    row += 3;
    col += 3;
    int ctr;
    int dayNum;
    gotoxy(34, 3);
    printf("%10s, %d", months[ mm ] , year);
    dim [ 2 ] += ( ( (year%4==0)  && (year%100!=0)) || (year%400==0))?1: 0;
    for( ctr = DayOfWeek(year, mm, 1), dayNum = 1; dayNum <= dim [ mm ]; dayNum +=1)
    {
        gotoxy(col + ctr * (WIDTH+1), row);
        printf("%02d",dayNum);
        ctr += 1;
        if ( ctr == DIM)
        {
            ctr =0;
            row += 2;
        }

    }
}
void clean()
{
    int row;
    int col;
    col = (MAXCOLS - ( (DIM * WIDTH) + (DIM+1))) / 2;
    row = (MAXROWS - ( DIM + DIM + 1) )/ 2;
    row += 3;
    col += 3;
    int r;
    int c;
    for( r = 0; r < DIM ; r +=1 )
    {
        for( c =  0; c < DIM; c+=1)
        {
            gotoxy(col + (c * 6), row + (r*2));
            printf("  ");
        }
    }
}
#include<conio.h>
int main()
{
    int month;
    int year;
    int key;
    month = 9;
    year = 2002;
    drawDabba();
    col_heading();

    do
    {
        clean();
    calendar(month,year);
    key = getch();
     key = getch();
    switch ( key )
    {
        case LEFT : month -=1; break;
        case RIGHT : month += 1; break;
        case DOWN : year -=1; break;
        case UP : year +=1 ; break;
    }
    if ( month == 0)
    {
         month = 12;
         year -=1;
    }
    if ( month == 13)
    {
        month = 1;
        year +=1;
    }
    }while (key!=27);
    return EXIT_SUCCESS;
}
















