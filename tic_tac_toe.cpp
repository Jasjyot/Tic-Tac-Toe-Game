#include<iostream>
using namespace std;
short flag=0;
char matrix[3][3]={'1','2','3','4','5','6','7','8','9'};
char player='X';
void draw()
{
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            cout<<matrix[i][j]<<" ";
        }
        cout<<"\n";
    }
}
void input()
{
    int a;
    cout<<"Enter the number of the field:";
    cin>>a;

    if(a==1)
    {   if(matrix[0][0]!='X' && matrix[0][0]!='O')
        {
            matrix[0][0]=player;
            flag=0;
        }
        else
        { cout<<"The field has already been assigned.\n";
         flag=1;
        }
    }
   
   else if(a==2)
    {   if(matrix[0][1]!='X' && matrix[0][1]!='O')
        {
            matrix[0][1]=player;
            flag=0;
        }
        else
        { cout<<"The field has already been assigned.\n";
         flag=1;
        }
    }
    else if(a==3)
    {   if(matrix[0][2]!='X' && matrix[0][2]!='O')
        {
            matrix[0][2]=player;
            flag=0;
        }
        else
        { cout<<"The field has already been assigned.\n";
         flag=1;
        }
    }
    else if(a==4)
    {   if(matrix[1][0]!='X' && matrix[1][0]!='O')
        {
            matrix[1][0]=player;
            flag=0;
        }
        else
        { cout<<"The field has already been assigned.\n";
         flag=1;
        }
    }
    else if(a==5)
    {   if(matrix[1][1]!='X' && matrix[1][1]!='O')
        {
            matrix[1][1]=player;
            flag=0;
        }
        else
        { cout<<"The field has already been assigned.\n";
         flag=1;
        }
    }
    else if(a==6)
    {   if(matrix[1][2]!='X' && matrix[1][2]!='O')
        {
            matrix[1][2]=player;
            flag=0;
        }
        else
        { cout<<"The field has already been assigned.\n";
         flag=1;
        }
    }
    else if(a==7)
    {   if(matrix[2][0]!='X' && matrix[2][0]!='O')
        {
            matrix[2][0]=player;
            flag=0;
        }
        else
        { cout<<"The field has already been assigned.\n";
         flag=1;
        }
    }
   else if(a==8)
    {   if(matrix[2][1]!='X' && matrix[2][1]!='O')
        {
            matrix[2][1]=player;
            flag=0;
        }
        else
        { cout<<"The field has already been assigned.\n";
         flag=1;
        }
    }
    else if(a==9)
    {   if(matrix[2][2]!='X' && matrix[2][2]!='O')
        {
            matrix[2][2]=player;
            flag=0;
        }
        else
        { cout<<"The field has already been assigned.\n";
         flag=1;
        }
    }
}
void togglePlayer()
{
    if(player=='X')
    {
        player='O';
    }
    else
    {
        player='X';
    }
}
char win()
{
    if(matrix[0][0]=='O' && matrix[0][1]=='O'&& matrix[0][2]=='O')
    {
        return 'O';
    }
    else if(matrix[1][0]=='O'&& matrix[1][1]=='O'&& matrix[1][2]=='O')
    {
        return 'O';
    }
    else if(matrix[2][0]=='O'&& matrix[2][1]=='O'&& matrix[2][2]=='O')
    {
        return 'O';
    }
    else if(matrix[0][0]=='O'&& matrix[1][0]=='O'&& matrix[2][0]=='O')
    {
        return 'O';
    }
    else if(matrix[0][1]=='O'&& matrix[1][1]=='O'&& matrix[2][1]=='O')
    {
        return 'O';
    }
    else if(matrix[0][2]=='O'&& matrix[1][2]=='O'&& matrix[2][2]=='O')
    {
        return 'O';
    }
    else if(matrix[0][0]=='O'&& matrix[1][1]=='O'&& matrix[2][2]=='O')
    {
        return 'O';
    }
    else if(matrix[0][2]=='O'&& matrix[1][1]=='O'&& matrix[2][0]=='O')
    {
        return 'O';
    }
    if(matrix[0][0]=='X' && matrix[0][1]=='X'&& matrix[0][2]=='X')
    {
        return 'X';
    }
    else if(matrix[1][0]=='X'&& matrix[1][1]=='X'&& matrix[1][2]=='X')
    {
        return 'X';
    }
    else if(matrix[2][0]=='X'&& matrix[2][1]=='X'&& matrix[2][2]=='X')
    {
        return 'X';
    }
    else if(matrix[0][0]=='X'&& matrix[1][0]=='X'&& matrix[2][0]=='X')
    {
        return 'X';
    }
    else if(matrix[0][1]=='X'&& matrix[1][1]=='X'&& matrix[2][1]=='X')
    {
        return 'X';
    }
    else if(matrix[0][2]=='X'&& matrix[1][2]=='X'&& matrix[2][2]=='X')
    {
        return 'X';
    }
    else if(matrix[0][0]=='X'&& matrix[1][1]=='X'&& matrix[2][2]=='X')
    {
        return 'X';
    }
    else if(matrix[0][2]=='X'&& matrix[1][1]=='X'&& matrix[2][0]=='X')
    {
        return 'X';
    }
    else 
    return '/';
}

int main()
{
    cout<<"Tic Tac Toe v1.0 \n";
    draw();
    while(1)
    {
    do 
    {
        input();
    }
    while(flag!=0);
    draw();
    if (win()=='X')
    {
    cout<<"X wins the game \n";
    break;
    }
    else if (win()=='O')
    {
        cout<<"O wins the game \n";
        break;
    }
    togglePlayer(); 
    }
    return 0;
}