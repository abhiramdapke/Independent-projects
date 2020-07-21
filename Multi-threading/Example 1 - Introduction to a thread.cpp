#include <iostream>
#include <thread>
using namespace std;

//t1 is a child thread
//a thread should be either joined or detached only once.
void function1()
{
    cout << "Hello world" << endl;
}

int main()
{
    thread t1(function1);   //t1 starts running
    //t1.join(); //main thread waits for t1 to finish
    t1.detach(); //t1 will freely work on its own - daemon process
    //This won't print anything as the main thread is finishing its task before the child thread t1.
    
    
    //Now, if we want t1 to join again, we have to check if it is joinable otherwise
    //the program would crash
    if (t1.joinable())
        t1.join();
    

    return 0;
}
