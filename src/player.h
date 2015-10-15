#include <list>
#include "board.h"
using namespace std;

class player {
    bool humanPlayer;

    int n;

    pair<int, list<int>> computerMove(unordered_map<int, list<int>> validMoves);

    pair<int, list<int>>  interactiveMove(unordered_map<int, list<int>> validMoves);

public:
    int symbol;
    int playerId;
    player(bool a, bool b, int c, int d);

    pair<int, list<int>> selectMove(othelloBoard board, unordered_map<int, list<int>> validMoves);
};