
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

class SetPartialOrder
{
  public:
    string compareSets(vector <int> a, vector <int> b)
    {
      int countA = a.size();
      int countB = b.size();

      string result = "INCOMPARABLE";
      int found = 0;
      for (int x = 0; x < a.size(); x++) {
        for (int y = 0; y< b.size(); y++) {
          if(a[x] == a[y]) {
            found++;
          }

        }
      } 

      if(found == countA && countA == countB) {
        result = "EQUAL"; 
      } 
      if(found == countA && countA < countB) {
        result = "LESS"; 
      }
      if(found == countA && countA > countB) {
        result = "GREATER"; 
      }

      return result;
    }


};

