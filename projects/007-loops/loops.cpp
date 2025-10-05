#include <iostream>

int main() {
  // ---------- FOR LOOP ----------
  for (int i = 0; i < 10; i++) {
    if (i == 3) {
      // Skip when i == 3 (Don't print)
      continue;
    }
    if (i == 9) {
      // Stop the loop completely when i == 9
      break;
    }
    std::cout << "i: " << i << "\n";
  }

  // ---------- WHILE LOOP ----------
  int j = 0;
  // Keep looping while j <= 10
  while (j <= 10) {
    if (j == 3) {
      // Skip when j == 3 (Don't print)
      j++;
      continue;
    }
    if (j == 9) {
      // Stop the loop completely when j == 9
      break;
    }
    std::cout << "j: " << j << "\n";
    j++;
  }
  
  // ---------- DO WHILE LOOP ----------
  int k = 0;
  // Loop runs at least once
  do {
    if (k == 3) {
      // Skip when k == 3 (Don't print)
      k++;
      continue;
    }
    if (k == 9) {
      // Stop loop completely when k == 9
      break;
    }
    std::cout << "k: " << k << "\n";
    k++;
  } while (k <= 10); // Condition checked at the end

  return 0;
}