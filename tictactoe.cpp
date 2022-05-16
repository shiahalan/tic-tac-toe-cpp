#include <iostream>
#include "tictactoefuncs.hpp"


int main() {
  char board[] = {'_', '_', '_', '_', '_', '_', '_', '_', '_'};
  char piece = 'X';
  int place;
  int correct = 0;

  intro();

  while (true) {
    display_board(board);

    if (is_full(board)) {
      std::cout << "Tie! There are no more spaces!\n";
      break;
    }

    whos_turn(piece);
    std::cin >> place;

    if (place >= 1 && place <= 9) {
      if (is_empty(board, place)) {
        board[place - 1] = piece;
        correct = 1;
      } else {
        std::cout << "\nThat spot is not empty!\n";
      }
    } 

    if (winner(board, piece)) {
      break;
    }

    if (correct == 1) {
      if (piece == 'X') {
      piece = 'O';
      } else {
        piece = 'X';
      }
    } else {
      std::cout << "\nInvalid choice!\n";
    }
    correct = 0;
  }

  char nothing;
  std::cout << "Type anything and enter to exit (or use ctrl + c): ";
  std::cin >> nothing;

  return 0;
}