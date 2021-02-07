#include <iostream>
#include <set>
/** - map에서 Value가 없는, Key만 있는 구조
 *  - 이진탐색 트리(rb-tree)
 *  - 정렬, Key 존재여부 확인
 *  - 대량의 자료 저장, 빠른 검색속도
 */

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    set<int> s;
    
    s.insert(2);
    s.insert(3);
    
    set<int>::iterator it;
    for (it = s.begin(); it != s.end(); it++) {
        cout << *it << '\n';
    }
    
    it = s.find(3);
    if (it != s.end()) {
        cout << *it << "는(은) 존재한다." << '\n';
    }
    
    s.erase(3);
    
    return 0;
}
