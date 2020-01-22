//Author - Abhiram Dapke
//Date - 12/05/2019
// Tic Tac Toe Game


#include <iostream>

using namespace std;


char matrix[3][3] = {'1','2','3','4','5','6','7','8','9'};
char player = 'x';
int a;
void input()
{
    cout << "enter the number you want in between 0-9";
    cin >> a;
        
    if (a == 1)
        matrix[0][0] = player;
    else if (a == 2)
        matrix[0][1] = player;
    else if (a == 3)
        matrix[0][2] =  player;
    else if (a == 4)
        matrix[1][0] = player;
    else if (a == 5)
        matrix[1][1] = player;
    else if (a == 6)
        matrix[1][2] =  player;
    else if (a == 7)
        matrix[2][0] = player;
    else if (a == 8)
        matrix[2][1] = player;
    else if (a == 9)
        matrix[2][2] =  player;
    
}
void draw()
{
    cout << "Tic tac toe game" << endl;
    int i;int j;
    for (i = 0;i<3;i++)
    {
        for (j=0;j<3;j++)
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}
void changeplayer()
{
    if (player == 'x')
        player = 'o';
    else
        player = 'x';
}
char win()
{   
    //First player
    //rows
    if (matrix[0][0] == 'x' && matrix[0][1] == 'x' && matrix[0][2] =='x')
        return 'x';
    if (matrix[1][0] == 'x' && matrix[1][1] == 'x' && matrix[1][2] =='x')
        return 'x';
    if (matrix[2][0] == 'x' && matrix[2][1] == 'x' && matrix[2][2] =='x')
        return 'x';
        
    //columns    
    if (matrix[0][0] == 'x' && matrix[1][0] == 'x' && matrix[2][0] =='x')
        return 'x';
    if (matrix[0][1] == 'x' && matrix[1][1] == 'x' && matrix[2][1] =='x')
        return 'x';
    if (matrix[0][2] == 'x' && matrix[1][2] == 'x' && matrix[2][2] =='x')
        return 'x';
        
    //diagonals 
    if (matrix[0][0] == 'x' && matrix[1][1] == 'x' && matrix[2][2] =='x')
        return 'x';
    if (matrix[0][2] == 'x' && matrix[1][1] == 'x' && matrix[2][0] =='x')
        return 'x';
        
    //second player
    //rows
    if (matrix[0][0] == 'x' && matrix[0][1] == 'x' && matrix[0][2] =='x')
        return 'o';
    if (matrix[1][0] == 'x' && matrix[1][1] == 'x' && matrix[1][2] =='x')
        return 'o';
    if (matrix[2][0] == 'x' && matrix[2][1] == 'x' && matrix[2][2] =='x')
        return 'o';
        
    //columns    
    if (matrix[0][0] == 'x' && matrix[1][0] == 'x' && matrix[2][0] =='x')
        return 'o';
    if (matrix[0][1] == 'x' && matrix[1][1] == 'x' && matrix[2][1] =='x')
        return 'o';
    if (matrix[0][2] == 'x' && matrix[1][2] == 'x' && matrix[2][2] =='x')
        return 'o';
        
    //diagonals 
    if (matrix[0][0] == 'x' && matrix[1][1] == 'x' && matrix[2][2] =='x')
        return 'o';
    if (matrix[0][2] == 'x' && matrix[1][1] == 'x' && matrix[2][0] =='x')
        return 'o';
    
    return '/';   
}

int main()
{
    draw();
    while (1)
    {
        input();
        draw();
        if (win() == 'x')
        {
            cout << "X wins!";
            break;
        }
        else if (win() == 'o')
        {
            cout << "O wins!";
            break;
        }
        changeplayer();
    }

    return 0;
}
