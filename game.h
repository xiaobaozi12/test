#define ROW1 3
#define COL1 3
void InitBoard(char board[ROW1][COL1], int row, int col);//声明
void  DisplayBoard(char board[ROW1][COL1], int row, int col);//棋盘
void playermove(char board[ROW1][COL1],int row,int col);//人移动
void computermove(char board[ROW1][COL1], int row, int col);//电脑移动
char win(char board[ROW1][COL1], int row, int col);//判断