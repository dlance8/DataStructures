#ifndef _EXPRESSION_TREE_H_
#define _EXPRESSION_TREE_H_

#include "bintree.h"
#include <cstdlib>
#include <string>

using namespace main_savitch_10;

class expression_tree
{
public:
  expression_tree (const std::string& op,
		   const expression_tree& left,
		   const expression_tree& right);
  // precondition: op is either "+" or "-"
  // postcondition: expression tree with root containing op & left & right
  //                as subtrees has been created
  
  expression_tree (const std::string& value);
  // precondition: value represents an integer
  // postcondition: expression tree with value in root and no children has
  //                has been create

//  ~expression_tree();

//  expression_tree (const expression_tree& other);

  // expression_tree& operator = (const expression_tree& other);
  int toInt(std::string s);
  
  int evaluate(const binary_tree_node<std::string>* n);
  // return: value of arithmetic expression represented by expression tree
  const binary_tree_node<std::string>* get_node () const {return node;}

private:
  binary_tree_node<std::string>* node;
};




#endif
