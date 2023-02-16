#include <iostream>
#include <stdlib.h>
#include <vector>
#include <time.h>

#include "binary_tree.hpp"

using namespace std;

int getRandomNumber(int min, int max) {
  return min + rand()%(max - min + 1);
}

int main() {
  srand(time(0));

  int randNumber = rand();

  cout << getRandomNumber(1, 20) << endl;

  BinaryTree<int> tree = BinaryTree<int>();
  vector<int> numbers;
  int random = 0;

  for(int i = 0; i < 20; i++) {
    random = getRandomNumber(1, 100);
    numbers.push_back(random);
    tree.addElement(random);
  }
  
  //
  for(int i = 0; i < 20; i++) {
    cout << numbers.at(i) << " ";
  }
  cout << endl;
  tree.inOrder();
  cout << endl;
  tree.inOrderReverse();

   cout << "Element quantity: " << tree.elementQuantity << endl;
  return 0;
}