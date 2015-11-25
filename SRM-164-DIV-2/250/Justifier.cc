
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

class Justifier
{
  public:
    vector <string> justify(vector <string> textIn)
    {
      int strLen = 0;
      vector <string> results(textIn.size());
      for(int x = 0; x < textIn.size(); x++) {
        if(textIn[x].size() > strLen) {
          strLen = textIn[x].size(); 
        }
      }

      for(int z = 0; z < textIn.size(); z++) {

        stringstream ss;
        ss << std::setw (strLen) << textIn[z];
        results[z] = ss.str();

      }

      return results;
    }
};

