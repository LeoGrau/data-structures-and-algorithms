#ifndef BINARY_TREE_HPP
#define BINARY_TREE_HPP

template <class T>
class BinaryTreeNode
{
private:
  BinaryTreeNode<T> *left;
  BinaryTreeNode<T> *right;
  T data;
public:
  BinaryTreeNode();
};

class BinaryTree
{
};

#endif