#include <iostream>
using namespace std;
int IntegerValSqRoot(int n)
{
    int s = 0;
    int e = n - 1;
    int mid = s + (e - s) / 2;
    int ans = 0;
    while (s <= e)
    {
        if (mid * mid == n)
        {
            ans = mid;
            return ans;
        }
        else if (mid * mid > n)
        {
            e = mid - 1;
        }
        else if (mid * mid < n)
        {
            ans = mid;
            s = mid + 1;
        }
        mid = s + (e - s) / 2;
    }
    return ans;
}
int main()
{
    int n;
    cout << "Enter Number to find out the Sq. Root" << endl;
    cin >> n;
    cout << IntegerValSqRoot(n) << endl;

    return 0;
}
