#include "expression_tree.h"
#include <cassert>
#include <sstream>
#include <cctype>
#include <cassert>
using namespace std;

expression_tree::expression_tree (const std::string& op,
				  const expression_tree& left,
				  const expression_tree& right)
{
  assert ((op == "+") || (op == "*"));
  node = new binary_tree_node<std::string> (op, left.node,
					    right.node);
}

bool all_digits (const string& s)
// return whether all characters is s are digits
{
  size_t i = 0;
  while (i < s.length() && isdigit (s[i]))
    i++;
  return i == s.length();
}

expression_tree::expression_tree (const std::string& value)
{
  node = new binary_tree_node<std::string>(value);
}

int toInt(std::string s){
    assert(all_digits(s));
    return std::atoi(s.c_str());
}

int expression_tree::evaluate(const binary_tree_node<std::string>* n)
{
    if(n -> data() == "+"){
        return evaluate(n -> left()) + evaluate(n -> right());
    }
    if(n -> data() == "*"){
        return evaluate(n -> right()) + evaluate(n -> right());
    }

    return toInt(n->data());
}
