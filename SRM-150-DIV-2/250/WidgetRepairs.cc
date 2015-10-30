
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
#include <vector>

using namespace std;

class WidgetRepairs
{
  public:
    int days(vector <int> arrivals, int numPerDay)
    {
      int days = 0;
      for (int x = 0; x < arrivals.size(); x++)
      {
        int tot = arrivals[x];
        while(tot > 0)
        {
          tot = tot - numPerDay;
          days++;
        }
      }



      return days;
    }
};

