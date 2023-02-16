#ifndef BINARY_TREE_HPP
#define BINARY_TREE_HPP

#include <iostream>
using namespace std;

template <class T>
class BinaryTreeNode
{
public:
  BinaryTreeNode<T> *left;
  BinaryTreeNode<T> *right;
private:
  T data;
public:
  BinaryTreeNode(T data) {
    this->data = data;
    this->left = nullptr;
    this->right = nullptr;
  }
  //get
  T getData() { return data; }
  //set

};

template <class T>
class BinaryTree
{
  public:
  BinaryTreeNode<T> *root;
  int elementQuantity;
  BinaryTree() {
    root = nullptr;
    elementQuantity = 0;
  }

  void _addElement(T data, BinaryTreeNode<T>* &currentNode) {
    if(currentNode == nullptr) {
      currentNode = new BinaryTreeNode<T>(data);
      elementQuantity++;
      return;
    }else {
      if(data < currentNode->getData()) {
        _addElement(data, currentNode->right);
      }else {
        _addElement(data, currentNode->left);
      }
    }
  }

  void _inOrder(BinaryTreeNode<T>* &currentNode) {
    if(currentNode != nullptr) {
      _inOrder(currentNode->left);
      cout << currentNode->getData() << " ";
      _inOrder(currentNode->right);
    }
  }

  void inOrder() {
    _inOrder(root);
  }

  void _inOrderReverse(BinaryTreeNode<T>* &currentNode) {
    if(currentNode != nullptr) {
      _inOrder(currentNode->right);
      cout << currentNode->getData() << " ";
      _inOrder(currentNode->left);
    }
  }

  void inOrderReverse() {
    _inOrderReverse(root);
  }

  void addElement(T data) {
    if(root == nullptr) {
      root = new BinaryTreeNode<T>(data);
      elementQuantity++;
    } else
      _addElement(data, root);
  }

  int getElementQuantity() {
    return elementQuantity;
  }

};

#endif