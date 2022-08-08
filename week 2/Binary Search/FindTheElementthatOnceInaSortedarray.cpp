#include<bits/stdc++.h>

using namespace std;
class Solution {
    public:
        int findSingleElement(vector < int > & nums) {
            
            int n = nums.size();
            int elem = 0;
            for (int i = 0; i < n; i++) {
                elem = elem ^ nums[i];
            }
            
            return elem;
        }
};

int main() {
    Solution obj;
    vector < int > v {1,1,2,3,3,4,4,8,8};

    int elem = obj.findSingleElement(v);
    
    cout << "The single occurring element is " 
         << elem << endl;
}
