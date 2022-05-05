#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
void convertToOne(vector<vector<vector<int>>> &th, vector<int> &sol)
{
    int i = th.at(0).at(0).size();
    int j = th.at(0).size();
    int k = th.size();
    // 3d array is an array of 2d arrays, and a 2D array is a vector of 1D array

    // iterating through each layer
    for (int z = 0; z < k; z++)
    {
        // iterating through each row of the layer
        for (int y = 0; y < j; y++)
        {
            // iterating through each col of the row
            for (int x = 0; x < i; x++)
            {
                // pushing the result into the new 1D array
                sol.push_back(th.at(z).at(y).at(x));
            }
        }
    }
}

int main()
{
    vector<vector<int>> layer = {{1, 2}, {3, 4}};
    vector<vector<vector<int>>> t = {layer, layer, layer};
    vector<int> ans;
    convertToOne(t, ans);
    for (auto e : ans)
        cout << e << " ";
}