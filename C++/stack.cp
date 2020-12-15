#include <iostream>
#include <stack>

using namespace std;

int main(void)
{
    stack<int> s;
    
    s.push(2);
    s.push(1);
    
    cout << "top : " << s.top() << endl;
    
    s.pop();
    
    cout << "size : " << s.size() << endl;
    
    cout << "empty : " << (s.empty() ? "Yes" : "No" ) << endl;
}
