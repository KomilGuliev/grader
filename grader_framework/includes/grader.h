/**
 * @ Author: Komil Guliev
 * @ Create Time: 2019-11-27 15:21:18
 * @ Modified by: Komil Guliev
 * @ Modified time: 2019-12-01 12:56:42
 * @ Description:
 */

#ifndef GRADER_H
# define GRADER_H

# include <cstdlib>
# include <iostream>
# include <sstream>
# include <fstream>

using namespace std;

// GLOBAL VARIABLES
stringstream		trace;
int					variant;
string				test_path = "/src/tests/var_01/01/input_01";

// PROTOTYPES
int					diff(string &correct_filepath);
void				set_testpath(int variant, int task, int test);


#endif