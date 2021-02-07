#include <iostream>
#include <map>
/** - Key-Value 구조로 구성
 *  - 이진탐색 트리(rb-tree)
 *  - 정렬, 많은 자료 저장, 빠른검색에 사용
 *  - 중간 삽입 / 삭제가 빈번하지 않을때 사용
 */

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    map<int, int> m; // int형 key, int형 value를 가진 map m 생성
    
    m.insert(pair<int, int>(5, 100));
    m[1] = 10;
    
    map<int, int>::iterator it;
    for (it = m.begin(); it != m.end(); it++) {
        cout << it->first << " " << it->second << '\n';
    }
    
    it = m.find(5);
    if (it != m.end()) {
        cout << it->first << " " << it->second << '\n';
    }
    
    m.erase(m.begin(), m.end());
    
    return 0;
}
