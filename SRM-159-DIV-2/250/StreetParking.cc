
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

class StreetParking
{
  public:
    int freeParks(string street)
    {
      int countParkings = 0;
      for (int x = 0; x < street.size(); x++) {
        if(street[x] != '-') {
          continue;
        }

        if((street[x + 2]) && (street[x + 2] == 'B')){
          continue; 
        }

        if(street[x + 1]){
          if(street[x + 1] != '-') {
            continue;
          } 
        }

        if(street[x -1]){
          if(street[x -1] == 'S') { 
            continue;
          }
        }

        countParkings++;
      }

      return countParkings;
    }
};

