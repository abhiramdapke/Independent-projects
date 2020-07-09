#include <iostream>
#include <string>

using namespace std;

int checksubstring(string &str1,string &str2)
{
    int i,j,count;
    count = 0;
    int n = str1.length();
    int m = str2.length();
    
    for (i=0;i<=n-m;i++)
    {
        for (j=0;j<m;j++)
        {
            if (str1[i+j]!= str2[j])
                break;
        }
        if (j == m)
        {
            count++;
        }
    }
    return count;
}

int main()
{
   string str1 = "nneighneigneighneigneighneigh";
   string str2 = "neigh";
   
   cout << "Number of counts of the word neigh is " << checksubstring(str1,str2) << endl;

     return 0;
}
