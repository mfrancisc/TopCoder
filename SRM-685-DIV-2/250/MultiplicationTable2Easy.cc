
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

class MultiplicationTable2Easy
{
    public:
        string isGoodSet(vector <int> table, vector <int> t)
        {
            int size =table.size();
            int n = sqrt(size);

            int tSize = t.size();
            string result = "";

            std::vector<int>::iterator it;

            for(int i = 0; i < tSize; i++){
                for(int j = 0; j < tSize; j++){
                    int I = t[i];
                    int J = t[j];
                    int tableValue = table[I*n+J]; 
                    it = find (t.begin(), t.end(), tableValue);
                    // not found in t
                    if (it == t.end()) {
                        result = "Not Good"; 
                        break;
                    }
                }

                if(result != "") {
                    break;
                }
            }

            if(result == "") result = "Good";

            return result;
        }
};

