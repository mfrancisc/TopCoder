
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

class SimilarUserDetection
{
    public:
        string haveSimilar(vector <string> handles)
        {
            
            string result = "Similar handles not found";
            for(int i = 0; i < handles.size() - 1; i++){
                for(int e = i+1; e < handles.size(); e++){

                    // compare strings 
                    if(handles[i].size() == handles[e].size()) {
                        std::replace( handles[i].begin(), handles[i].end(), '0', 'O');
                        std::replace( handles[i].begin(), handles[i].end(), '1', 'I');
                        std::replace( handles[i].begin(), handles[i].end(), 'l', 'I');

                        std::replace( handles[e].begin(), handles[e].end(), '0', 'O');
                        std::replace( handles[e].begin(), handles[e].end(), '1', 'I');
                        std::replace( handles[e].begin(), handles[e].end(), 'l', 'I');

                        if(handles[e] == handles[i]) {
                            result = "Similar handles found";
                            e = handles.size();
                            i = handles.size();
                        };
                    }

                }  
            }

            return result;
        }
};

