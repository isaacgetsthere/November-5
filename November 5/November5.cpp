#include <iostream>
#include<map> 

#include "TicTacToe.h"


int main()
{

	std::vector<std::vector<std::string>> ticTacToeGrid(3, std::vector<std::string>(3));

	//ticTacToeGrid.
	//std::map<std::string, int> namesToAges =
	//{
	//	{"Joshua", 18},
	//	{""}
	//};


	TicTacToe::playGame(ticTacToeGrid);


}