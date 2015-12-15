
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


class OfficeParking
{
  public:
    int spacesUsed(vector <string> events)
    {

      string buf; // Have a buffer string
      int parks = 0;
      int maxUsed = 0;
      for(int a = 0; a < events.size(); a++)
      {
        stringstream ss(events[a]); // Insert the string into a stream

        while (ss >> buf){

          if(buf == "arrives")  parks++;
          if(buf == "departs")  parks--;

        };

        if(parks > maxUsed) maxUsed = parks;


      }

      return maxUsed;
    }
};

