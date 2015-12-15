
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

class GolfScore
{
public:
	int tally(vector <int> parValues, vector <string> scoreSheet)
	{
    int totalScore = 0;
    for(int c = 0; c < scoreSheet.size(); c++)
    {

      string score = scoreSheet[c];

    if (score == "triple bogey")   totalScore = totalScore + parValues[c] + 3;
      if(score =="double bogey")   totalScore = totalScore + parValues[c] + 2;
      if(score == "bogey")        totalScore = totalScore + parValues[c] + 1;
      if(score == "par")        totalScore = totalScore + parValues[c] + 0;
      if(score == "birdie")        totalScore = totalScore + parValues[c] - 1;
      if(score == "eagle")        totalScore = totalScore + parValues[c] - 2;
      if(score == "albatross")        totalScore = totalScore + parValues[c] - 3;
      if(score == "hole in one")        totalScore = totalScore + 1;
    
    }
      
		return totalScore;
	}
};

