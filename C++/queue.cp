#include <iostream>
#include <queue>

using namespace std;

int main(void)
{
    queue<int> q;
    
    q.push(1);
    q.push(2);
    q.push(3);
    
    q.pop(); //1
    
    cout << "front : " << q.front() << endl; //2
    
    cout << "back : " << q.back() << endl; //3
    
    cout << "size : " << q.size() << endl;
    
    cout << "empty : " << (q.empty() ? "Yes" : "No" ) << endl;
    
    return 0;
}
