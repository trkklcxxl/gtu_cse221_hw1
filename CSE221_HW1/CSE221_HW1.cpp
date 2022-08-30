#include<iostream>
#include<string>
#include<vector>
//char ch = static_cast<char>(i); type casting
//enum MonthsLength{jan_Length=31,,etc.}; #enum types
//enum class Days{moonday,tuesday etc..}; #strong enum types 

using namespace std;
enum class CellState{peg,empty,none}; //if there is nothing to display than cellstate=none

vector < vector<char>>currentGameBoard; //this will be de argument of DisplayBoard() function;

vector < vector<char>>gameBoard1(8); //we create a vector with 8 rows
vector < vector<char>>gameBoard2(10);
vector < vector<char>>gameBoard3(9);
vector < vector<char>>gameBoard4(8);
vector < vector<char>>gameBoard5(10);
vector < vector<char>>gameBoard6(6);
int boardType; //take boardtype from user in welcome screen


void DrawBoards()
{
	gameBoard1[0] = { ' ','a','b','c','d','e','f','g' };
	gameBoard2[0] = { ' ','a','b','c','d','e','f','g','h','i'};
	gameBoard3[0] = { ' ','a','b','c','d','e','f','g','h'};
	gameBoard4[0] = { ' ','a','b','c','d','e','f','g' };
	gameBoard5[0] = { ' ','a','b','c','d','e','f','g','h','i' };
	gameBoard6[0] = { ' ','a','b','c','d','e' };
	for (int i = 1; i< 8; i++)
	{
		gameBoard1[i] = vector<char>(8); //every column has 8 member
		for (int j = 0; j < 8; j++)
		{
		 
			
			if( (i==1&&j==1)|| (i == 1 && j == 2) || (i == 1 && j == 6) || (i == 1 && j == 7))
			{
				
				gameBoard1[i][j] = ' ';
			}
			else if (j==0)
			{
				std::string cast_variable = to_string(i);  //char ´dan integer a dönüþüm yapýnca ascii karakterleri alýyordu biz de böyle yaptýk
				char* iValue = const_cast<char*>(cast_variable.c_str());
				gameBoard1[i][0]=iValue[0];
		
			}
			else if ((i==2&&j==1)||(i==2&&j==7))
			{
				gameBoard1[i][j] = ' ';
			}
			else if (i==3&&j==4)
			{
				gameBoard1[i][j] = '.';
			}
			else if ((i == 7 && j == 1) || (i == 7 && j == 2) || (i == 7 && j == 6) || (i == 7 && j == 7))
			{

				gameBoard1[i][j] = ' ';
			}
			else if ((i == 6 && j == 1) || (i == 6 && j == 7))
			{
				gameBoard1[i][j] = ' ';
			}
			else
			{
				gameBoard1[i][j] = 'p';
			}

		
		}
		
	}  //gamebýard1
	for (int i = 1; i < 10; i++)
	{
		gameBoard2[i] = vector<char>(10); //every column has 8 member
		for (int j = 0; j < 10; j++)
		{
			
			if (j == 0) //this block is the same for all boards
			{
				std::string cast_variable = to_string(i);  //char ´dan integer a dönüþüm yapýnca ascii karakterleri alýyordu biz de böyle yaptýk
				char* iValue = const_cast<char*>(cast_variable.c_str());
				gameBoard2[i][0] = iValue[0];
			}
			
			else if ((i==1&&j==1)||(i == 1 && j == 2) || (i == 1 && j == 3)|| (i == 1 && j == 7) || (i == 1 && j == 8) || (i == 1 && j == 9) || (i == 2 && j == 1) || (i == 2 && j == 2) || (i == 2 && j == 3) || (i == 2 && j == 7) || (i == 2 && j == 8) || (i == 2 && j == 9) || (i == 3 && j == 1) || (i == 3 && j == 2) || (i == 3 && j == 3) || (i == 3 && j == 7) || (i == 3 && j == 8) || (i == 3 && j == 9) || (i == 7 && j == 1) || (i == 7 && j == 2) || (i == 7 && j == 3) || (i == 7 && j == 7) || (i == 7 && j == 8) || (i == 7 && j == 9) || (i == 8 && j == 1) || (i == 8 && j == 2) || (i == 8 && j == 3) || (i == 8 && j == 7) || (i == 8 && j == 8) || (i == 8 && j == 9) || (i == 9 && j == 1) || (i == 9 && j == 2) || (i == 9 && j == 3) || (i == 9 && j == 7) || (i == 9 && j == 8) || (i == 9 && j == 9))
			{
				gameBoard2[i][j] = ' ';
			}
			else if (i==5&&j==5)
			{
				gameBoard2[i][j] = '.';
			}		
			else
			{
				gameBoard2[i][j] = 'p';
			}
		
		}

	}  //gameboard2
	for (int i = 1; i < 9; i++)
	{
		gameBoard3[i] = vector<char>(9); //every column has 8 member
		for (int j = 0; j < 9; j++)
		{

			if (j == 0) //this block is the same for all boards
			{
				std::string cast_variable = to_string(i);  //char ´dan integer a dönüþüm yapýnca ascii karakterleri alýyordu biz de böyle yaptýk
				char* iValue = const_cast<char*>(cast_variable.c_str());
				gameBoard3[i][0] = iValue[0];
			}

			else if ((i == 1 && j == 1) || (i == 1 && j == 2) || (i == 1 && j == 6) || (i == 1 && j == 7) || (i == 1 && j == 8) || (i == 2 && j == 1) || (i == 2 && j == 2) || (i == 2 && j == 6) || (i == 2 && j == 7) || (i == 2 && j == 8)  || (i == 3 && j == 1) || (i == 3 && j == 2) || (i == 3 && j == 6) || (i == 3 && j == 7) || (i == 3 && j == 8)  || (i == 7 && j == 1) || (i == 7 && j == 2) || (i == 7 && j == 6) || (i == 7 && j == 7) || (i == 7 && j == 8)  || (i == 8 && j == 1) || (i == 8 && j == 2) || (i == 8 && j == 6) || (i == 8 && j == 7) || (i == 8 && j == 8) )
			{
				gameBoard3[i][j] = ' ';
			}
			else if (i == 5 && j == 4)
			{
				gameBoard3[i][j] = '.';
			}
			else
			{
				gameBoard3[i][j] = 'p';
			}

		}

	}  //gameboard3
	for (int i = 1; i < 8; i++)
	{
		gameBoard4[i] = vector<char>(8); //every column has 8 member
		for (int j = 0; j < 8; j++)
		{

			if (j == 0) //this block is the same for all boards
			{
				std::string cast_variable = to_string(i);  //char ´dan integer a dönüþüm yapýnca ascii karakterleri alýyordu biz de böyle yaptýk
				char* iValue = const_cast<char*>(cast_variable.c_str());
				gameBoard4[i][0] = iValue[0];
			}

			else if ((i == 1 && j == 1) || (i == 1 && j == 2) || (i == 1 && j == 6) || (i == 1 && j == 7)  || (i == 2 && j == 1) || (i == 2 && j == 2) || (i == 2 && j == 6) || (i == 2 && j == 7) || (i == 6 && j == 1) || (i == 6 && j == 2) || (i == 6 && j == 6) || (i == 6 && j == 7) || (i == 7 && j == 1) || (i == 7 && j == 2) || (i == 7 && j == 6) || (i == 7 && j == 7)   )
			{
				gameBoard4[i][j] = ' ';
			}
			else if (i == 4 && j == 4)
			{
				gameBoard4[i][j] = '.';
			}
			else
			{
				gameBoard4[i][j] = 'p';
			}

		}

	}  //gameboard4
	for (int i = 1; i < 10; i++)
	{
		gameBoard5[i] = vector<char>(10); //every column has 8 member
		for (int j = 0; j < 10; j++)
		{

			if (j == 0) //this block is the same for all boards
			{
				std::string cast_variable = to_string(i);  //char ´dan integer a dönüþüm yapýnca ascii karakterleri alýyordu biz de böyle yaptýk
				char* iValue = const_cast<char*>(cast_variable.c_str());
				gameBoard5[i][0] = iValue[0];
			}

			else if ((i == 1 && j == 1)||(i == 1 && j == 2) || (i == 1 && j == 3) || (i == 1 && j == 4) || (i == 1 && j == 6) || (i == 1 && j == 7) || (i == 1 && j == 8) || (i == 1 && j == 9))
			{
				gameBoard5[i][j] = ' ';
			}
			else if ((i == 2 && j == 1)||(i == 2 && j == 2) || (i == 2 && j == 3)  || (i == 2 && j == 7) || (i == 2 && j == 8) || (i == 2 && j == 9))
			{
				gameBoard5[i][j] = ' ';
			}
			else if ((i == 3 && j == 1) || (i == 3 && j == 2) || (i == 3 && j == 8) || (i == 3 && j == 9))
			{
				gameBoard5[i][j] = ' ';
			}
			else if ((i == 4 && j == 1)  || (i == 4 && j == 9))
			{
				gameBoard5[i][j] = ' ';
			}
			else if ((i == 6 && j == 1) || (i == 6 && j == 9))
			{
				gameBoard5[i][j] = ' ';
			}
			else if ((i == 7 && j == 1) || (i == 7 && j == 2) || (i == 7 && j == 8) || (i == 7 && j == 9))
			{
				gameBoard5[i][j] = ' ';
			}
			else if ((i == 8 && j == 1) || (i == 8 && j == 2) || (i == 8 && j == 3) || (i == 8 && j == 7) || (i == 8 && j == 8) || (i == 8 && j == 9))
			{
				gameBoard5[i][j] = ' ';
			}

			else if ((i == 9 && j == 1) || (i == 9 && j == 2) || (i == 9 && j == 3) || (i == 9 && j == 4) || (i == 9 && j == 6) || (i == 9 && j == 7) || (i == 9 && j == 8) || (i == 9 && j == 9))
			{
				gameBoard5[i][j] = ' ';
			}
			
			else if (i == 5 && j == 5)
			{
				gameBoard5[i][j] = '.';
			}
			else
			{
				gameBoard5[i][j] = 'p';
			}

		}

	}  //gameboard5
	for (int i = 1; i < 6; i++)
	{
		gameBoard6[i] = vector<char>(6); //every column has 8 member
		for (int j = 0; j < 6; j++)
		{

			if (j == 0) //this block is the same for all boards
			{
				std::string cast_variable = to_string(i);  //char ´dan integer a dönüþüm yapýnca ascii karakterleri alýyordu biz de böyle yaptýk
				char* iValue = const_cast<char*>(cast_variable.c_str());
				gameBoard6[i][0] = iValue[0];
			}
			/*
			else if ((i == 1 && j == 1) || (i == 1 && j == 2) || (i == 1 && j == 6) || (i == 1 && j == 7) || (i == 2 && j == 1) || (i == 2 && j == 2) || (i == 2 && j == 6) || (i == 2 && j == 7) || (i == 6 && j == 1) || (i == 6 && j == 2) || (i == 6 && j == 6) || (i == 6 && j == 7) || (i == 7 && j == 1) || (i == 7 && j == 2) || (i == 7 && j == 6) || (i == 7 && j == 7))
			{
				gameBoard6[i][j] = ' ';
			}
			else if (i == 4 && j == 4)
			{
				gameBoard6[i][j] = '.';
			}
			*/
			else
			{
				gameBoard6[i][j] = 'p';
			}

		}

	}  //gameboard6
	
}
void DisplayBoard(vector<vector<char>>gameBoard) //this is for show current board
{

	for (int i = 0; i < gameBoard.size(); i++)
	{
		for (int j = 0; j < gameBoard[i].size(); j++)
		{
			cout << gameBoard[i][j];

		}
		cout << endl;
	}
	
}
void WelcomeScreen()
{
	char GameState; // this represents the game will start or the user want to close the program

	string welcome =
		"\t\t\t\tWelcome to the Peg Solitaire Game\n"
		"\t\t\t\tPress . to Start Game\n"
		"\t\t\t\tPress x to close program\n";
		

	while(true)
	{
		cout << welcome<<endl; //display welcome screen text
		cin >> GameState;
		cout << endl;
		if (GameState=='.') //this means user wants to start game
		{
			
			DisplayBoard(gameBoard1); //draw all the boards and let the user choose one of them
			cout << "Game Board: 1" << endl<<endl;
			DisplayBoard(gameBoard2);
			cout << "Game Board: 2" << endl<<endl;
			DisplayBoard(gameBoard3);
			cout << "Game Board: 3" << endl<<endl;
			DisplayBoard(gameBoard4);
			cout << "Game Board: 4" << endl<<endl;
			DisplayBoard(gameBoard5);
			cout << "Game Board: 5" << endl<<endl;
			DisplayBoard(gameBoard6);
			cout << "Game Board: 6" << endl<<endl;
			cout << "Please select the board you want to play: ";
			cin >> boardType; //take the board type entered

			if (boardType==1)
			{
				currentGameBoard = gameBoard1;
				break;
			}
			else if (boardType == 2)
			{
				currentGameBoard = gameBoard2;
				break;
			}
			else if (boardType == 3)
			{
				currentGameBoard = gameBoard3;
				break;
			}
			else if (boardType == 4)
			{
				currentGameBoard = gameBoard4;
				break;
			}
			else if (boardType == 5)
			{
				currentGameBoard = gameBoard5;
				break;
			}
			else if (boardType == 6)
			{
				currentGameBoard = gameBoard6;
				break;
			}
			else
			{
				continue;
			}


			
		}
		else if (GameState=='x') //user wants to exit game so break 
		{
			break;
		}
		else //if the key entered does not make sense then repeat the loop until reach a logical key
		{
			cout << "Wrong key dude, try again and be sure that you enter the right key at this time!\n\n";
			continue;
			
		}
	}



}
void GameEngiene()
{

	DisplayBoard(currentGameBoard);

}


int main()
{
	DrawBoards();
	//DisplayBoard(gameBoard6);
	WelcomeScreen();
	GameEngiene();





	


}