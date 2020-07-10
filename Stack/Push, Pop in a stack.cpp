#include <iostream>
#include <string>
#include <stack>
using namespace std;

int main()
{
    stack<int> numbers;
    int temp = 0;
    cout<< "Pushing back...\n";
    while (temp >=0)
    {
        cout << "Enter no.";
        cin >> temp;
        if (temp>=0)
            numbers.push(temp);  
    }
    while(numbers.size()>0)
    {
        cout << numbers.top();
        numbers.pop();
        cout << " ";
    }
}
