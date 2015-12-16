
// {{{ VimCoder 0.3.6 <-----------------------------------------------------
// vim:filetype=cpp:foldmethod=marker:foldmarker={{{,}}}

#include <algorithm>
#include <bitset>
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <ctime>
#include <deque>
#include <functional>
#include <iomanip>
#include <iostream>
#include <list>
#include <map>
#include <numeric>
#include <queue>
#include <set>
#include <sstream>
#include <stack>
#include <utility>
#include <vector>

using namespace std;

// }}}

class MagicSquare
{
public:
	int missing(vector <int> square)
	{
    int diff = 0;
    int number1 = square[0] + square[1] + square[2];
    int number2 = square[3] + square[4] + square[5];
    if(number1 < number2)
    {
      diff = number2 - number1;
    }
    int number3 = square[6] + square[7] + square[8];
    if(number2 < number3)
    {
      diff = number3 - number2;
    }
    int number4 = square[0] + square[3] + square[6];
    if(number3 < number4)
    {
      diff = number4 - number3;
    }
    int number5 = square[1] + square[4] + square[7];
    if(number4 < number5)
    {
      diff = number5 - number4;
    }
    int number6 = square[2] + square[5] + square[8];
    if(number5 < number6)
    {
      diff = number6 - number5;
    }
    int number7 = square[0] + square[4] + square[8];
    if(number6 < number7)
    {
      diff = number7 - number6;
    }
    int number8 = square[2] + square[4] + square[6];
    if(number7 < number8)
    {
      diff = number8 - number7;
    }


		return diff - 1;
	}
};

