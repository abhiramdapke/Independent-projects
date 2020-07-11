#include <iostream>
#include <vector>
#include <list>

using namespace std;
const int N = 4;

//undirected graph
int main()
{
    vector<list<int>> adjlist(N);
    
    adjlist[0].push_back(1);
    adjlist[0].push_back(2);
    
    adjlist[1].push_back(2);
    adjlist[1].push_back(0);
    
    adjlist[2].push_back(0);
    adjlist[2].push_back(1);
    adjlist[2].push_back(3);
    
    adjlist[3].push_back(2);
    
    vector<list<int>>::iterator i;
    int c = 0;
    for (i=adjlist.begin();i!=adjlist.end();i++)
    {
        cout << "vertices connected to node " << c << " are: ";
        
        list<int> li = *i;
        for (list<int>::iterator it = li.begin();it!=li.end();it++)
        {
            cout << *it << " ";
        }
        cout << endl;
        c++;
    }

    return 0;
}
