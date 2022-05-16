#include <iostream>


bool winner(char board[9], char piece) {
  // Horizontal win
  for (int i = 0; i < 9; i += 3) {
    if (board[i] == piece && board[i+1] == piece && board[i+2] == piece) {
      return true;
    }

  }

 // Vertical win
  for (int i = 0; i < 3; i++) {
    if (board[i] == piece && board[i+3] == piece && board[i+6] == piece) {
      return true;
    }
  }

// Forward slash win /
  if (board[0] == piece && board[4] == piece && board[8] == piece) {
    return true;
  }
// Back slash win 
  if (board[2] == piece && board[4] == piece && board[6] == piece) {
    return true;
  }

  return false;
}


void congrat(char piece) {
  std::cout << "Congratulations " << piece << ", you won!\n";
}


bool is_full(char board[9]) {
  int count = 0;
  for (int i = 0; i < 9; i++) {
    if (board[i] == 'X' || board[i] == 'O') {
      count++;
    }
  }
  if (count == 9) {
    return true;
  }
  return false;
}


bool is_empty(char board[9], int place) {
  if (board[place - 1] == '_') {
    return true;
  } 
  return false;
}


void whos_turn(char piece) {
  std::cout << "It is " << piece << "'s turn\n"; 
  std::cout << "What position would you like to place your piece: ";
}


void display_board(char board[9]) {
  std::cout << board[0] << " | " << board[1] << " | " << board[2] << "\n";
  std::cout << "---------\n";
  std::cout << board[3] << " | " << board[4] << " | " << board[5] << "\n";
  std::cout << "---------\n";
  std::cout << board[6] << " | " << board[7] << " | " << board[8] << "\n";
}


void intro() {
  std::cout << "Welcome to Tic Tac Toe!\nChose the place where you want to place your piece.\n================================================\nThe board goes from 1, 2, 3 on the first row\n 4, 5, 6 on the second row, and 7, 8, 9 on the third.\nEach player takes turns after placing a piece.";
  std::cout << "\nExample:\n1 | 2 | 3\n---------\n4 | 5 | 6\n---------\n7 | 8 | 9 \n================================================\n";
}