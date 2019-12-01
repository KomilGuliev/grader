/**
 * @ Author: Komil Guliev
 * @ Create Time: 2019-11-27 13:54:57
 * @ Modified by: Komil Guliev
 * @ Modified time: 2019-12-01 12:58:23
 * @ Description:
 */
#include "grader.h"

using namespace std;

int		main()
{
	string			variant = "var_1";

	// compiling the code
	try {
		system("g++ user_task1.cpp -o binary_1");
		system("g++ user_task2.cpp -o binary_2");
	} catch(exception e)
	{
		cout << "Doesn't compile!";
	}

	system("./binary < tests/var_1/1/input_01 > user_out");

	return 0;
}