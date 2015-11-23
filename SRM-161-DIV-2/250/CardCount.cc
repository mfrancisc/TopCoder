
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

class CardCount
{
  public:
    vector <string> dealHands(int numPlayers, string deck)
    {
      vector <string> result(numPlayers);
      for (int x = 0; x < numPlayers; x++) {
        result[x] = "";
      }

      if(numPlayers <= deck.size()) {
        int a = 0;
        for (int y = 0; y < deck.size(); y++) {

          if(a  == numPlayers){
            a = 0; 
          }

          result[a] = result[a] + deck[y];
          a++;
        }
      }
      return result;
    }
};

