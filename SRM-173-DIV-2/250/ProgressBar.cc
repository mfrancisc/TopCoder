
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

class ProgressBar
{
  public:
    string showProgress(vector <int> taskTimes, int tasksCompleted)
    {
      int sumComp =0;
      for(int i = 0; i< tasksCompleted; i++) {
        sumComp = taskTimes[i] + sumComp; 
      }

      int sumTot =0;
      for(int x = 0; x < taskTimes.size(); x++) {
        sumTot = taskTimes[x] + sumTot; 
      }

      double percent = 0.0;
      percent = double(sumComp * 100) / sumTot;
      int nrLoad = (percent * 20) / 100;

      string loading = "";
      for(int a =0; a < nrLoad; a++) {
        loading = loading + "#"; 
      }

      int points = 20 - nrLoad;
      for(int b =0; b < points; b++) {
        loading = loading + "."; 
      }
      return loading;
    }
};

