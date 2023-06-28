#ifndef SUDOKU_INSTRUCTIONS_H
#define SUDOKU_INSTRUCTIONS_H

#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
#include <cstdlib>
#include <ctime>
#include <algorithm>
#include <cstring>
#include "Sudoku.h"
using namespace std;

void processInstr(int argc, char* argv[]);
void outputToFile(const vector<vector<int>>& puzzle, ofstream& outfile);
void paramError();
vector<vector<int>> readFromFile(ifstream& infile);
bool levelConvert(int level,int&low,int &high);
bool getLowHigh(string arg, int &low,int&high);
void nInsProcess(int argc, char* argv[]);
void help();

#endif //SUDOKU_INSTRUCTIONS_H
