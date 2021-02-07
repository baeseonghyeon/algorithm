#include <iostream>
#include <vector>
/** - Array구조
 *  - 배열 처럼 사용(배열 길이를 다 사용하면 자동으로 늘려준다.)
 *  - 랜덤 데이터 접근 가능, 임의의 위체 삽입 / 삭제는 어렵다.
 */

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    vector<int> v(5); // int형 벡터 v를 5만큼 할당
    v.push_back(15);
    for(auto it = v.begin(); it != v.end(); it++) {
        cout << *it << '\n';
    }
    
    v.pop_back();
    
    v[0] = 10;
    for(int i = 0; i < v.size(); i++) {
        cout << v[i] << '\n';
    }

    return 0;
}
