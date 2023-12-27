#include<iostream>
#include<stdlib.h>
using namespace std;

// class 
class game
{
    char a[3][3];
    public:
    int move;
    game()
    {
        int k=49;
        for(int i=0; i<3 ; i++)
        {
            for(int j=0 ; j<3 ; j++)
            {
                a[i][j]=k;
                k++;
            }
        }
    }
    void board();
    void play(int);
    int win(int);
} players;
// board structure
void game :: board()
{
    cout<<" "<<a[0][0]<<" "<<" |"<<" "<<a[0][1]<<" "<<" |"<<" "<<a[0][2]<<"  "<<endl; 
    cout<<"_"<<"|"<<"_"<<"|"<<"_"<<endl;
    cout<<" "<<a[1][0]<<" "<<" |"<<" "<<a[1][1]<<" "<<" |"<<" "<<a[1][2]<<"  "<<endl; 
    cout<<"_"<<"|"<<"_"<<"|"<<"__"<<endl;
    cout<<" "<<a[2][0]<<" "<<" |"<<" "<<a[2][1]<<" "<<" |"<<" "<<a[2][2]<<"  "<<endl; 
    cout<<"    "<<"|"<<"    "<<"|"<<"    "<<endl;
}
// for moves
void game :: play(int flag)
{
    if(move==1)
    {
        switch(flag)
        {
            case 1:a[0][0]=120;
                break;
            case 2:a[0][0]=111;
                break;
        }
    }
    else if(move==2)
    {
        switch(flag)
        {
            case 1:a[0][1]=120;
                break;
            case 2:a[0][1]=111;
                break;
        }
    }
    else if(move==3)
    {
        switch(flag)
        {
            case 1:a[0][2]=120;
                break;
            case 2:a[0][2]=111;
                break;
        }
    }
    else if(move==4)
    {
        switch(flag)
        {
            case 1:a[1][0]=120;
                break;
            case 2:a[1][0]=111;
                break;
        }
    }
    else if(move==5)
    {
         switch(flag)
        {
            case 1:a[1][1]=120;
                break;
            case 2:a[1][1]=111;
                break;
        }
    }
    else if(move==6)
    {
         switch(flag)
        {
            case 1:a[1][2]=120;
                break;
            case 2:a[1][2]=111;
                break;
        }
    }
    else if(move==7)
    {
        switch(flag)
        {
            case 1:a[2][0]=120;
                break;
            case 2:a[2][0]=111;
                break;
        }
    }
    else if(move==8)
    {
        switch(flag)
        {
            case 1:a[2][1]=120;
                break;
            case 2:a[2][1]=111;
                break;
        }
    }
    else if(move==9)
    {
        switch(flag)
        {
            case 1:a[2][2]=120;
                break;
            case 2:a[2][2]=111;
                break;
        }
    }
}
int game :: win(int flag)
{
    int num;
    if(flag==1)
    {
        num=120;
    }
    else if(flag==2)
    {
        num=111;
    }
    bool c1= a[0][0] == a[0][1] and a[0][1]==a[0][2];
    bool c2= a[1][0] == a[1][1] and a[1][1]==a[1][2];
    bool c3= a[2][0] == a[2][1] and a[2][1]==a[2][2];
    bool c4= a[0][0] == a[1][0] and a[1][0]==a[2][0];
    bool c5= a[0][1] == a[1][1] and a[1][1]==a[2][1];
    bool c6= a[0][2] == a[1][2] and a[1][2]==a[2][2];
    bool c7= a[0][0] == a[1][1] and a[1][1]==a[2][2];
    bool c8= a[0][2] == a[1][1] and a[1][1]==a[2][0];
    if((c1 or c2 or c3 or c4 or c5 or c6 or c7 or c8) and (num==a[0][0] or num==a[0][1] or num==a[0][2]) )
    {
        return 1;
    }
    return 0;
}
int start_game()
{
    int flag_x=1;
    int flag_o=2;
    int moves=0;
    players.board();
    while(1)
    {
        cout<<"X TURN:"<<endl;
        cin>>players.move;
        system("Cls"); 
        players.play(flag_x);
        players.board();
        ++moves;
        if(players.win(flag_x))
        {
            cout<<"X WINS"<<endl;
            return 0;
        }
        if(moves==9)
        {
            cout<<"MATCH DRAW"<<endl;
            return 0;
        }
        cout<<"O TURN:"<<endl;
        cin>>players.move;
        ++moves;
        system("Cls"); 
        players.play(flag_o);
        players.board();
        if(players.win(flag_o))
        {
            cout<<"O WINS"<<endl;
            return 0;
        }
        
    }
    
    
}
int main()
{
    start_game();
}