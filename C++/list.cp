#include <iostream>
#include <list>
/** - 가변적 구조에 용이(중간 삽입 / 삭제)
 *  - 검색이 많은 경우 사용 지양
 *  - 랜덤 데이터 접근에 비효율
 */

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    list<int> lt;
    
    lt.push_back(10);
    lt.push_back(20);
    
    list<int>::iterator iter;
    for (iter = lt.begin(); iter != lt.end(); iter++) {
        cout << *iter << ' ';
    }
    cout << '\n';
    
    // 리스트에서 원소 10 제거
    lt.remove(10);
    lt.pop_back();
    
    return 0;
}
