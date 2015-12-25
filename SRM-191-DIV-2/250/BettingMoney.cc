
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

class BettingMoney
{
  public:
    int moneyMade(vector <int> amounts, vector <int> centsPerDollar, int finalResult)
    {

      int totalGain = 0;
      for(int i = 0; i < amounts.size(); i++)
      {
        if(i != finalResult)
        {
          totalGain += amounts[i]; 
        }
      }


      totalGain *=100;
      totalGain -= (amounts[finalResult] * centsPerDollar[finalResult]);

      return totalGain;
    }
};

