
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

class FarmvilleDiv2
{
  public:
    int minTime(vector <int> time, vector <int> cost, int budget)
    {

      vector <int> orderCost;
      vector <int> orderTime;

      // 5 4 3 2 1 
      // 5 4 3 2 1 
      //
      // 4 5 
      orderCost = cost;
      orderTime = time;

      for(int y = 0; y < cost.size(); y++)
      {
        for(int a = 0; a < orderCost.size(); a++)
        {
       if(cost[y]
        }
      }


      vector <int> processed;
      int totalTime = 0;
      int lowest = 0;
      int i;
      while(budget > 0)
      {
        for(i = 0; i < time.size(); i++)
        {
          if(std::find(processed.begin(), processed.end(), i) != processed.end()) {
            continue;
          } else {
            if(cost[i] < cost[lowest])
            {
              lowest = i;
            }
            processed.push_back(i);
          }

        }

        time[i]--;
        budget -= cost[i];

        if(processed.size() == time.size())
        {
          break;
        }
      }
      cout << time[i] << endl;
      cout << cost[i] << endl;
      cout << budget << endl;

      totalTime += time[i];

      return totalTime;
    }
};

