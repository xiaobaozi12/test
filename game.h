#define ROW1 3
#define COL1 3
void InitBoard(char board[ROW1][COL1], int row, int col);//����
void  DisplayBoard(char board[ROW1][COL1], int row, int col);//����
void playermove(char board[ROW1][COL1],int row,int col);//���ƶ�
void computermove(char board[ROW1][COL1], int row, int col);//�����ƶ�
char win(char board[ROW1][COL1], int row, int col);//�ж�