#include <cstdlib>
#include <iostream>
#include "expression_tree.h"

using namespace std;


expression_tree build_expression_tree();
// return: expression tree

int main ()
{
  expression_tree t = build_expression_tree();
  int value = t.evaluate(t.get_node());
  cout << "value: " << value << endl;
  return EXIT_SUCCESS;
}

expression_tree build_expression_tree()
{
  expression_tree t1 ("1");
  expression_tree t2 ("2"); 
  expression_tree t3 ("3");
  expression_tree t4 ("4");
  expression_tree t5 ("5");
  expression_tree t6 ("*", t1, t2);
  expression_tree t7 ("+", t4, t5);
  expression_tree t8 ("*", t3, t7);
  expression_tree t9 ("+", t6, t8);
  return t9;
}
/*
binary_tree_node<string>* build_expression_tree()
{
  binary_tree_node<string>* t1 = new binary_tree_node<string>("1");
  binary_tree_node<string>* t2 = new binary_tree_node<string>("2");
  binary_tree_node<string>* t3 = new binary_tree_node<string>("3");
  binary_tree_node<string>* t4 = new binary_tree_node<string>("4");
  binary_tree_node<string>* t5 = new binary_tree_node<string>("5");
  binary_tree_node<string>* t6 = new binary_tree_node<string>("*", t1, t2);
  binary_tree_node<string>* t7 = new binary_tree_node<string>("+", t4, t5);
  binary_tree_node<string>* t8 = new binary_tree_node<string>("*", t3, t7);
  binary_tree_node<string>* t9 = new binary_tree_node<string>("+", t6, t8);
  return t9;
  }*/
