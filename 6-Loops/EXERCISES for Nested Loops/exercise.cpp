#include <iostream>
using namespace std;

void clear_screen()
{
#ifdef WINDOWS
    std::system("cls");
#else
    std::system ("clear");
#endif
}

main()
{
    char board[3][3] = {{'1','2','3'},{'4','5','6'},{'7','8','9'}};
    bool move = true; // true is X, false is O
    int turn_counter = 9;
    char input;

    while(turn_counter) {
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                cout << board[i][j] << " ";
            }
            cout << endl;
        }

        cout << "input move for " << (move ? 'X' : 'O') << ": ";
        cin >> input;

        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                if (input == board[i][j]) {
                    board[i][j] = (move ? 'X' : 'O');
                    move = !move;
                }
            }
        }

        clear_screen();
        turn_counter--;
    }
}