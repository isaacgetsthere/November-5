#include"TicTacToe.h"
#include <iostream>
#include <string>




void TicTacToe::playGame(twoDGrid &ticTacToeGrid)
{

	std::cout << "Player x enter your move" << std::endl;
	std::cout << "allowed moves are" << std::endl;
	std::cout << "a b c" << std::endl;
	std::cout << "d e f" << std::endl;
	std::cout << "g h i" << std::endl;


	std::string playerXMove;

	std::getline(std::cin, playerXMove);

	updateGrid(ticTacToeGrid, playerXMove, "X");

	printTheGrid(ticTacToeGrid);

	std::cout << " " << std::endl;
	std::cout << " " << std::endl;
	std::cout << "now player o move" << std::endl;

	std::string playerOMove;

	std::getline(std::cin, playerOMove);

	updateGrid(ticTacToeGrid, playerOMove, "O");

	printTheGrid(ticTacToeGrid);
}

void TicTacToe::updateGrid(twoDGrid &ticTacToeGrid, std::string theMove, std::string playerID)
{
	if (theMove == "a") 
	{
		ticTacToeGrid[0][0] = playerID;
	}
	else if (theMove == "b")
	{
		ticTacToeGrid[0][1] = playerID;
	}
}

//PascalCase
//camelCase
//snake_case

void TicTacToe::printTheGrid(twoDGrid &ticTacToeGrid)
	{
		for (int row = 0; row < ticTacToeGrid.size(); row++)
		{
			for (int col = 0; col < ticTacToeGrid[0].size(); col++)
			{
				std::cout << ticTacToeGrid[row][col];
			}
		}
	}