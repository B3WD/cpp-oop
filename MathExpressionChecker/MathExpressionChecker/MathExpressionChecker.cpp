#include "MathExpressionChecker.h"

#include <algorithm>
#include <stack>
#include <iostream>

bool checkParentesis(std::string exp)
{
	std::stack<char> s;

	for (char c : exp) {
		if (c == '(' || c == '[' || c == '{') {
			s.push(c);
		}
		else if (c == ')' || c == ']' || c == '}') {
			if (s.empty()) { return false; }
			else if (s.top() == '(' && c != ')') { return false; }
			else if(s.top() == '[' && c != ']') { return false; }
			else if(s.top() == '{' && c != '}') { return false; }
			s.pop();
		}
	}

	return true;
}

bool checkOps(std::string exp)
{
	int sz = exp.length();
	char c, pr, nx;

	for (int i = 0; i < sz; i++) {
		c = exp[i];
		if (c == '+' || c == '-' || c == '*' || c == '/') {
			if (i == 0) { return false; }
			if (i == sz - 1) { return false; }

			pr = exp[i - 1];
			if (!(('0' <= pr && pr <= '9') || (pr == ')' || pr == ']' || pr == '}'))) { return false; }

			nx = exp[i + 1];
			if (!(('0' <= nx && nx <= '9') || (nx == '(' || nx == '[' || nx == '{'))) { return false; }
		}
	}

	return true;
}

bool checkExp(std::string exp)
{
	if (checkParentesis(exp) && checkOps(exp)) { return true; }

	return false;
}
