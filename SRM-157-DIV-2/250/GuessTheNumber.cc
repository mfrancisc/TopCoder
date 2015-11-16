
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
#include <iostream>
class GuessTheNumber
{
  public:
    int noGuesses(int upper, int answer)
    {
      int lower = 1;
      int x = 0;
      int guesses = 0;
      while (x != answer){
        guesses++;
        x = (lower + upper)/2;
        if(x < answer) {
          lower = x +1; 
        }
        if(x > answer) {
          upper = x - 1; 
        }
      }
      return guesses;
    }
};

