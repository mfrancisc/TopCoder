
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

class PassingGrade
{
  public:
    int pointsNeeded(vector <int> pointsEarned, vector <int> pointsPossible, int finalExam)
    {
      int total = 0;

      for(int x = 0; x < pointsPossible.size(); x++){

        total = total + pointsPossible[x]; 
      }
      total = total + finalExam;

      int needed = (total * 65)/100;
      int rest = (total * 65)%100;
      if(rest > 0){
        needed = needed + 1; 
      }
      for(int y=0; y < pointsEarned.size(); y++){
        needed = needed - pointsEarned[y]; 
      }
      if(needed < 0) {
        return 0; 
      }

      if(needed <= finalExam)
      {
        return needed;
      }

      return -1;
    }
};

