#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

int main()
{
    cout << "Press Enter 3 times to reveal your future.";
    cin.get();
    cin.get();
    cin.get();
    srand(time(0));
    int wish = rand()%9;
    if(wish == 0) cout << "You will get A in this 261102.";
    else if(wish == 1) cout << "You will get B+ in this 261102.";
    else if(wish == 2) cout << "You will get B in this 261102.";
    else if(wish == 3) cout << "You will get C+ in this 261102.";
    else if(wish == 4) cout << "You will get C in this 261102.";
    else if(wish == 5) cout << "You will get D+ in this 261102.";
    else if(wish == 6) cout << "You will get D in this 261102.";
    else if(wish == 7) cout << "You will get F in this 261102.";
    else if(wish == 8) cout << "You will get W in this 261102.";

return 0;

}
