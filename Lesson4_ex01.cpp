#include <iostream>
#include <string>
using namespace std;
int main() {
	enum Square {
		Empty = 0,
		Pawn,
		Rook,
		Knight,
		Bishop,
		King,
		Queen
	};
	Square chessboard[8][8];

	// the rooks
	chessboard[0][0] = chessboard[0][7] = Rook;
	chessboard[7][0] = chessboard[7][7] = Rook;
	
	return 0;
}