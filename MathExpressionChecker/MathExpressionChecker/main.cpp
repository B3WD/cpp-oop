#include <iostream>

#include "MathExpressionChecker.h"

void t1() {
	std::cout << "======= Check parentesis. =======\n";

	std::string s1("{(2+4)*(8-23)/(3+[2-(1+7)*2])}*[2+3-8]"); //true
	std::string s2 ("2+3]/(4-2)"); //false
	std::string s3("[10+[30/(5-1)]}"); //false
	std::string s4("1+[(1+1)/{1/(1/{1/(1+1)})}]"); //true

	std::cout << s1 << " : " << std::boolalpha << checkParentesis(s1) << "\n";
	std::cout << s2 << " : " << std::boolalpha << checkParentesis(s2) << "\n";
	std::cout << s3 << " : " << std::boolalpha << checkParentesis(s3) << "\n";
	std::cout << s4 << " : " << std::boolalpha << checkParentesis(s4) << "\n";

	std::cout << "\n";
}

void t2() {
	std::cout << "======= Check ops. =======\n";

	std::string s1("1+[(1+1)/{1/(1/{1/(1+1)})}]"); //true
	std::string s2("1+[(1+1+)]"); //false
	std::string s3("1+[+(1+1)]"); //false
	std::string s4("1++[(1+1)]"); //false
	std::string s5("1++[(1+1)]+"); //false

	std::cout << s1 << " : " << std::boolalpha << checkOps(s1) << "\n";
	std::cout << s2 << " : " << std::boolalpha << checkOps(s2) << "\n";
	std::cout << s3 << " : " << std::boolalpha << checkOps(s3) << "\n";
	std::cout << s4 << " : " << std::boolalpha << checkOps(s4) << "\n";
	std::cout << s5 << " : " << std::boolalpha << checkOps(s5) << "\n";

	std::cout << "\n";
}

void t3() {
	std::cout << "======= Check exp. =======\n";

	std::string s1("1+[(1+1)/{1/(1/{1/(1+1)})}]"); //true
	std::string s2("{(2+4)*(8-23)/(3+[2-(1+7)*2])}*[2+3-8]"); //true
	std::string s3("[2*(34-23)/8}"); //false
	std::string s4("(1+3/)"); //false
	std::string s5("(1+3/}"); //false


	std::cout << s1 << " : " << std::boolalpha << checkExp(s1) << "\n";
	std::cout << s2 << " : " << std::boolalpha << checkExp(s2) << "\n";
	std::cout << s3 << " : " << std::boolalpha << checkExp(s3) << "\n";
	std::cout << s4 << " : " << std::boolalpha << checkExp(s4) << "\n";
	std::cout << s5 << " : " << std::boolalpha << checkExp(s5) << "\n";

	std::cout << "\n";
}

int main()
{
	t1();
	t2();
	t3();

	return 0;
}