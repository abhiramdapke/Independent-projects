#include <iostream>

using namespace std;

// IO operation
//formatting data -- stream
//communicating data to external devices -- stream buffer

int main()
{
    //Example 1
    cout << 16;
    streambuf* pbuf = cout.rdbuf();  // readbuf
    
    ostream myCout(pbuf);
    myCout << 56;  //56 to stdout
    
    myCout.setf(ios::showpos);  //this will show positive sign of the number
    myCout.width(20);  //width 20 and data aligned to the right
    myCout << 12 << endl;  //             +12
    cout << 12 << endl;   //12

    //Example 2
    ofstream of("mylog.txt");
    streambuf* origbuf = cout.rdbuf();
    cout.rdbuf(of.rdbuf());  //Assigning the stream buffer of of to cout
    cout << "Hello" << endl;   //mylog.txt has "Hello"
    //redirecting the stdout to the log file
    
    //Now we cannot restore the cout to the original stream buffer so we use a temp variable to save 
    //the original stream buffer streambuf* origbuf = cout.rdbuf();
    cout.rdbuf(origbuf);
    cout << "Goodbye" << endl;
    
    //another way to access the stream buffer is the stream buffer iterator
    return 0;
}
