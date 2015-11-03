
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

class MostProfitable
{
  public:
    string bestItem(vector <int> costs, vector <int> prices, vector <int> sales, vector <string> items)
    {
      string result = "";
      int profit = 0;
      int partialProfit= 0;
      int itemIndex = 0;
      for(int x = 0; x < items.size(); x++)
      {
        partialProfit = (sales[x] * prices[x]) - (sales[x] * costs[x]);
        if(profit < partialProfit)
        {
            profit = partialProfit;
            itemIndex = x;
          }

      }

      return items[itemIndex];
    }
};

