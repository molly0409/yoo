//
//  main.c
//  sharkGame
//

#include <stdio.h>
#include <string.h> 
// ----- EX. 1 : Preparation------------
#include <stdlib.h>
#include <time.h>
// ----- EX. 1 : Preparation------------
#include "board.h"

// ----- EX. 4 : player ------------
#define N_PLAYER            3
// ----- EX. 4 : player ------------

#define MAX_CHARNAME        200

// ----- EX. 3 : board ------------
#define MAX_DIE             6

// ----- EX. 4 : player ------------
#define PLAYERSTATUS_LIVE   0
#define PLAYERSTATUS_DIE    1
#define PLAYERSTATUS_END    2

int player_position[N_PLAYER];
char player_name[N_PLAYER][MAX_CHARNAME];
int player_coin[N_PLAYER];
int player_status[N_PLAYER]; //0 - live, 1 - die, 2 - end
char player_statusString[3][MAX_CHARNAME] = {"LIVE", "DIE", "END"};

//player turn number
int player_tn[N_PLAYER];
// ----- EX. 4 : player ------------

// ----- EX. 3 : board ------------

int rolldie(void)
{
    return rand()%MAX_DIE+1;
}
// ----- EX. 3 : board ------------

// ----- EX. 1 : Preparation------------
void opening(void)
{
    printf("==============================================================\n");
    printf("==============================================================\n");
    printf("==========                SHARK GAME!!!                =======\n");
    printf("==============================================================\n");
    printf("==============================================================\n");
}
// ----- EX. 1 : Preparation------------

// ----- EX. 6 : game end ------------
int game_end(void)
{
    int i;
    int flag_end = 1;
    
    //if all the players are died?
    for (i=0;i<N_PLAYER;i++)
    {
        if (player_status[i] == PLAYERSTATUS_LIVE)
        {
            flag_end = 0;
            break;
        }
    }
    
    return flag_end;
}
// ----- EX. 6 : game end ------------

// ----- EX. 4 : player ------------

void printPlayerPosition(int player)
{
    int i;
    
    for (i=0;i<N_BOARD;i++)
    {
        printf("|");
        if (player_position[player] == i)
            printf("%c", player_name[player][0]);
        else
        {
            if (board_getBoardStatus(i) == BOARDSTATUS_NOK)
                printf("X");
            else
                printf(" ");
        }
    }
    printf("|\n");
}

void printPlayerStatus(void)
{
    int i;
    printf("player status ---\n");
    for (i=0;i<N_PLAYER;i++)
    {
        printf("%s : pos %i, coin %i, status %s\n", player_name[i], player_position[i], player_coin[i], player_statusString[player_status[i]]);
        printPlayerPosition(i);
    }
    printf("-----------------\n");
}
// ----- EX. 4 : player ------------

// ----- EX. 5 : shark ------------
void checkDie(void)
{
    int i;
    for (i=0;i<N_PLAYER;i++)
    {
        if (board_getBoardStatus(player_position[i]) == BOARDSTATUS_NOK&&player_position[i]!=19)
        {
            printf("%s in pos %i has died!! (coin %i)\n", player_name[i], player_position[i], player_coin[i]);
            player_status[i] = PLAYERSTATUS_DIE;
        }
    }
}
// ----- EX. 5 : shark ------------

// ----- EX. 6 : game end ------------
int getAlivePlayer(void)
{
	int i;
	int cnt=0;
	for(i=0;i<N_PLAYER;i++)
	{
		if(player_status[i]==PLAYERSTATUS_END)
		{
			cnt++;
		}
	}
	
	return cnt;
}

int getWinner(void)
{
    int i;
    int winner=0;
    int max_coin=-1;
    int player_turn_number=N_BOARD;
    
    for(i=0;i<N_PLAYER;i++)
    {
    	if(player_status[i]==PLAYERSTATUS_END)
    	{
    		if(player_coin[i]>max_coin)
    		{
    			max_coin=player_coin[i];
    			winner=i;
			}
		}
			
	}
	
	//if player_coin same
	for(i=0;i<N_PLAYER;i++)
	{
		if(player_coin[i]==max_coin&&player_status[i]==PLAYERSTATUS_END)
		{
			if(player_tn[i]<player_turn_number)
			{
				player_turn_number=player_tn[i];
				winner=i;
			}
		}
	}
    //if player_coin and turn same
	for(i=0;i<N_PLAYER;i++)
	{
		if(player_turn_number==player_tn[i]&&winner>i&&player_coin[i]==max_coin&&player_status[i]==PLAYERSTATUS_END)
		{
			winner=i;
		}
	}
    return winner;
}
// ----- EX. 6 : game end ------------


int main(int argc, const char * argv[]) {
    
    int i;
    int turn=0;
	
// ----- EX. 1 : Preparation------------
    srand((unsigned) time(NULL));
    opening();
// ----- EX. 1 : Preparation------------

// ----- EX. 2 : structuring ------------
    //step1 : initialization
    //step1-1 : board initialization
    board_initBoard();
	
// ----- EX. 4 : player ------------
    //step1-2 : initialize player
    for (i=0;i<N_PLAYER;i++)
    {
        player_position[i] = 0;
        player_coin[i] = 0;
        player_status[i] = PLAYERSTATUS_LIVE;
        //use player_tn when player_coin is same
		player_tn[i]=0;
        printf("Player %i's name: ", i);
        scanf("%s", player_name[i]); 
    }
// ----- EX. 4 : player ------------

    //step 2. : game start, turn loop
    do {
    	
		int dieResult=0;
        int coinResult;
        int dum;
		int pos=0;
// ----- EX. 4 : player ------------
        if (player_status[turn] != PLAYERSTATUS_LIVE)
        {
            turn = (turn + 1)%N_PLAYER;
            continue;
        }
// ----- EX. 4 : player ------------
        
        //step 2-1. status printing
// ----- EX. 3 : board ------------
		board_printBoardStatus();
		dieResult = rolldie();
		pos+=dieResult;
		
// ----- EX. 3 : board ------------
// ----- EX. 4 : player ------------
        printPlayerStatus();
// ----- EX. 4 : player ------------

        //step 2-2. rolling die
// ----- EX. 4 : player ------------
        printf("%s turn!! ", player_name[turn]);
        printf("Press any key to roll a die!\n");
        scanf("%d", &dum);
        fflush(stdin);
// ----- EX. 4 : player ------------
        
        
		player_tn[turn]++;
        
        //step 2-3. moving
        player_position[turn]+=dieResult;
		
		if(player_position[turn]<N_BOARD-1)
		{
   			
		}
		else if(player_position[turn]>=N_BOARD-1)
		{
			player_status[turn]=PLAYERSTATUS_END;
		    player_position[turn]=(N_BOARD-1);
		}
		
		printf("Die result:%d %s moved to %d \n",dieResult,player_name[turn],player_position[turn]);
		
		//step 2-4. coin
        coinResult=board_getBoardCoin(pos);
        
		if(coinResult>0)
		{
			player_coin[turn]+=coinResult;
			printf("player: %s get %d coin! \n",player_name[turn],coinResult);	
		}
		
		
//change turn
		turn = (turn + 1)%N_PLAYER;		
        
//shark		
		if(turn==0||game_end() == 1)
		{
			int shark_pos;
			
			shark_pos=board_stepShark();
			printf("Shark moved to %i\n",shark_pos);
			//check die
			checkDie();
		}

		//step 2-5. end process
		game_end();
		
// ----- EX. 6 : game end ------------
    } while(game_end() == 0);

    //step 3. game end process
    printf("GAME END!!\n");
    if(getAlivePlayer()!=0)
    {
    	printf("%i players are alive! winner is %s\n", getAlivePlayer(), player_name[getWinner()]);
	}
    else
    	printf("No winner.");
// ----- EX. 6 : game end ------------
    
// ----- EX. 2 : structuring ------------

    return 0;
}
