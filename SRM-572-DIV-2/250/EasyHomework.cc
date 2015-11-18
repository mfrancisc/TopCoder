
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
class EasyHomework
{
  public:
    string determineSign(vector <int> A)
    {
      int product = A[0];


      for(int elemNr = 1; elemNr < A.size(); elemNr++) {
        product = product * A[elemNr];
      }

      string res = "ZERO";

      cout << product << endl;
      if(product > 0) {
        res = "POSITIVE"; 
      }
      if(product < 0) {
        res = "NEGATIVE"; 
      }

      return res;
    }
};

