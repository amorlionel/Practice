#include <iostream>
using namespace std;

int main()
{
    cout << " Enter two numbers: " << endl;
    int v1 = 0, v2 = 0;
    cin >> v1 >> v2;
    cout << " Number " << v1 << endl;
    while (v1 < v2)
    {
        ++v1;
        cout << " Number " << v1 << endl;
    }
    while (v1 > v2)
    {
        --v1;
        cout << " Number " << v1 << endl;
    }
    return 0;
}
//缺陷就是没有遵循从小到大的顺序，只能以 v1 作为打印的首个数字
