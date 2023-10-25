#include <iostream>
using namespace std;


void start(char board[3][3]) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            board[i][j] = ' ';
        }
    }
}


void display(const char board[3][3]) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << board[i][j];
            if (j < 2) {
                cout << " | ";
            }
        }
        cout << endl;
        if (i < 2) {
            cout << "---------" << endl;
        }
    }
    cout << endl;
}


bool win(const char board[3][3], char player) {
    for (int i = 0; i < 3; i++) {
        if (board[i][0] == player && board[i][1] == player && board[i][2] == player) {
            return true; 
        }
        if (board[0][i] == player && board[1][i] == player && board[2][i] == player) {
            return true; 
        }
    }
    if (board[0][0] == player && board[1][1] == player && board[2][2] == player) {
        return true; 
    }
    if (board[0][2] == player && board[1][1] == player && board[2][0] == player) {
        return true; 
    }
    return false;
}

bool draw(const char board[3][3]) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (board[i][j] == ' ') {
                return false;
            }
        }
    }
    return true;
}

int main() {
    char board[3][3];
    char player = 'X';
    bool gameOver = false;

    start(board);

    while (!gameOver) {
        cout << "Tic-Tac-Toe " << endl;
        display(board);
        cout << "Player " << player << ", enter your move (row and column): ";
        int row, col;
        cin >> row >> col;

        if (row < 0 || row > 2 || col < 0 || col > 2 || board[row][col] != ' ') {
            cout << "error in entering the move. Try again." << endl;
            continue;
        }

        board[row][col] = player;

        if (win(board, player)) {
            cout << "Player " << player << " wins!" << endl;
            gameOver = true;
        } else if (draw(board)) {
            cout << "It's a draw!" << endl;
            gameOver = true;
        }


        player = (player == 'X') ? 'O' : 'X';
    }

    display(board);

    char playAgain;
    cout << "Play again? (y/n): ";
    cin >> playAgain;

    if (playAgain == 'y' || playAgain == 'Y') {
        start(board);
        player = 'X';
        gameOver = false;
        main();
    } else {
        cout << "Thanks for playing!" << endl;
    }

    return 0;
}
