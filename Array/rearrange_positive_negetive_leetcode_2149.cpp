#include <iostream>
#include <vector>
using namespace std;

vector<int> rearrangeArray(vector<int> &arr)
{
    int n = arr.size();
    vector<int> ans(n, 0);
    int posIndex = 0, negIndex = 1;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] < 0)
        {
            ans[negIndex] = arr[i];
            negIndex += 2;
        }
        else
        {
            ans[posIndex] = arr[i];
            posIndex += 2;
        }
    }
    return ans;
}

int main()
{
    int n;
    cout << "Enter size of array: ";
    cin >> n;

    vector<int> arr(n);
    cout << "ENter array element (positive and negetive): ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    vector<int> result = rearrangeArray(arr);

    cout << "Rearranged array: ";
    for (int x : result) // ✅ Print elements one by one
    {
        cout << x << " ";
    }
    cout << endl;
}
