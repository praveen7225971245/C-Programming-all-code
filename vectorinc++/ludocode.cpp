#include <iostream>
#include <vector>

class Ludo {
private:
    std::vector<int> board;
    int position;

public:
    Ludo() : board(52, 0), position(0) {}

    void moveToken(int steps) {
        position = (position + steps) % 52;
        std::cout << "Token moved to position " << position << std::endl;
    }

    void displayBoard() {
        for (int i = 0; i < board.size(); i++) {
            if (i == position) {
                std::cout << "T ";
            } else {
                std::cout << ". ";
            }
        }
        std::cout << std::endl;
    }
};

int main() {
    Ludo game;
    game.displayBoard();

    int steps;
    std::cout << "Enter steps to move: ";
    std::cin >> steps;

    game.moveToken(steps);
    game.displayBoard();

    return 0;
}
