#include "tic.h"

tBoard::tBoard()
{
	square = { BLANK, BLANK, BLANK, BLANK, BLANK, BLANK, BLANK, BLANK, BLANK };
}

bool tBoard::move(symbol m, int x, int y)
{
	if (x == 0 && y == 0 && square[0] == BLANK)
	{
		square[0] = m;
		return true;
	}
	if (x == 0 && y == 1 && square[1] == BLANK)
	{
		square[1] = m;
		return true;
	}
	if (x == 0 && y == 2 && square[2] == BLANK)
	{
		square[2] = m;
		return true;
	}
	if (x == 1 && y == 0 && square[3] == BLANK)
	{
		square[3] = m;
		return true;
	}
	if (x == 1 && y == 1 && square[4] == BLANK)
	{
		square[4] = m;
		return true;
	}
	if (x == 1 && y == 2 && square[5] == BLANK)
	{
		square[5] = m;
		return true;
	}
	if (x == 2 && y == 0 && square[6] == BLANK)
	{
		square[6] = m;
		return true;
	}
	if (x == 2 && y == 1 && square[7] == BLANK)
	{
		square[7] = m;
		return true;
	}
	if (x == 2 && y == 2 && square[8] == BLANK)
	{
		square[8] = m;
		return true;
	}
	return false;
}

bool tBoard::game_over()
{
	//condition for winner
	if (winner() != BLANK)
		return true;
	//condition for tie
	if (square[0] == BLANK)
		return false;
	if (square[1] == BLANK)
		return false;
	if (square[2] == BLANK)
		return false;
	if (square[3] == BLANK)
		return false;
	if (square[4] == BLANK)
		return false;
	if (square[5] == BLANK)
		return false;
	if (square[6] == BLANK)
		return false;
	if (square[7] == BLANK)
		return false;
	if (square[8] == BLANK)
		return false;
}

symbol tBoard::winner()
{
	if (square[0] == square[1] && square[0] == square[2] && square[0] != BLANK)
		return square[0];
	if (square[3] == square[4] && square[3] == square[5] && square[3] != BLANK)
		return square[3];
	if (square[6] == square[7] && square[6] == square[8] && square[6] != BLANK)
		return square[6];
	if (square[0] == square[3] && square[0] == square[6] && square[0] != BLANK)
		return square[0];
	if (square[1] == square[4] && square[1] == square[7] && square[1] != BLANK)
		return square[0];
	if (square[2] == square[5] && square[2] == square[8] && square[2] != BLANK)
		return square[0];
	if (square[0] == square[4] && square[0] == square[8] && square[0] != BLANK)
		return square[0];
	if (square[2] == square[4] && square[2] == square[6] && square[2] != BLANK)
		return square[0];
	return BLANK;
}

//function is used to output table and overload the output operator
void tBoard::table(ostream& os) const
{
	os << " | 0 | 1 | 2 |" << endl;
	os << " +-----------+" << endl;
	os << "0| " << square[0] << " | " << square[1] << " | " << square[2] << " | " << endl;
	os << " +-----------+" << endl;
	os << "1| " << square[3] << " | " << square[4] << " | " << square[5] << " | " << endl;
	os << " +-----------+" << endl;
	os << "2| " << square[6] << " | " << square[7] << " | " << square[8] << " | " << endl;
	os << " +-----------+" << endl;
}

ostream & operator<<(ostream& os, const tBoard& myTable)
{
	myTable.table(os);
	return os;
}