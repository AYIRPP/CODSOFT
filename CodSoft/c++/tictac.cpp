#include <iostream>
#include <vector>

using namespace std;

// Function prototypes
void displayBoard(const vector<vector<char>>& board);
bool makeMove(vector<vector<char>>& board, int row, int col, char player);
bool checkWin(const vector<vector<char>>& board, char player);
bool checkDraw(const vector<vector<char>>& board);
void switchPlayer(char& player);

int main() {
    char playAgain = 'y';
    while (playAgain == 'y') {
        vector<vector<char>> board(3, vector<char>(3, ' '));
        char currentPlayer = 'X';
        bool gameWon = false;
        bool gameDraw = false;

        while (!gameWon && !gameDraw) {
            displayBoard(board);
            int row, col;
            cout << "Player " << currentPlayer << ", enter your move (row and column): ";
            cin >> row >> col;

            if (row >= 1 && row <= 3 && col >= 1 && col <= 3 && makeMove(board, row - 1, col - 1, currentPlayer)) {
                gameWon = checkWin(board, currentPlayer);
                if (gameWon) {
                    displayBoard(board);
                    cout << "Player " << currentPlayer << " wins!" << endl;
                } else {
                    gameDraw = checkDraw(board);
                    if (gameDraw) {
                        displayBoard(board);
                        cout << "The game is a draw!" << endl;
                    } else {
                        switchPlayer(currentPlayer);
                    }
                }
            } else {
                cout << "Invalid move. Try again." << endl;
            }
        }

        cout << "Do you want to play again? (y/n): ";
        cin >> playAgain;
    }

    cout << "Thanks for playing!" << endl;
    return 0;
}

void displayBoard(const vector<vector<char>>& board) {
    cout << "\n  1 2 3" << endl;
    for (int i = 0; i < 3; ++i) {
        cout << i + 1 << " ";
        for (int j = 0; j < 3; ++j) {
            cout << board[i][j];
            if (j < 2) cout << "|";
        }
        cout << endl;
        if (i < 2) cout << "  -----" << endl;
    }
    cout << endl;
}

bool makeMove(vector<vector<char>>& board, int row, int col, char player) {
    if (board[row][col] == ' ') {
        board[row][col] = player;
        return true;
    }
    return false;
}

bool checkWin(const vector<vector<char>>& board, char player) {
    // Check rows and columns
    for (int i = 0; i < 3; ++i) {
        if ((board[i][0] == player && board[i][1] == player && board[i][2] == player) ||
            (board[0][i] == player && board[1][i] == player && board[2][i] == player)) {
            return true;
        }
    }
    // Check diagonals
    if ((board[0][0] == player && board[1][1] == player && board[2][2] == player) ||
        (board[0][2] == player && board[1][1] == player && board[2][0] == player)) {
        return true;
    }
    return false;
}

bool checkDraw(const vector<vector<char>>& board) {
    for (const auto& row : board) {
        for (char cell : row) {
            if (cell == ' ') {
                return false;
            }
        }
    }
    return true;
}

void switchPlayer(char& player) {
    player = (player == 'X') ? 'O' : 'X';
}
