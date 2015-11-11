
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
#include <string>
#include <iostream>
#include <sstream>

using namespace std;

class ProfitCalculator
{
  public:
    int percent(vector <string> items)
    {
      double totalPrice = 0.0;
      double totalCost = 0.0;
      double profit= 0.0;
      int margin = 0;

      for(int itemNr = 0; itemNr < items.size(); itemNr++) {

        //split string by space
        istringstream iss(items[itemNr]); 
        int elemNr = 1;
        do
        {
          string sub;
          iss >> sub;
          double amount = 0.0;
          if (sub == "") {
            continue;
          }
          amount = atof(sub.c_str()); 

          if(elemNr == 1)
          {
            totalPrice = totalPrice + amount;
          }

          if(elemNr == 2)
          {   
            totalCost = totalCost + amount; 
            elemNr = 0;
          }

          elemNr++;

        } while (iss);
      }

      profit = totalPrice - totalCost;
      margin = (profit * 100) / totalPrice;


      return margin;
    }
};

