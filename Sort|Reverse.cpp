/*   You are given a vector arr[] . You need to sort it and reverse it.
Example :
Input: arr[] = [1, 7, 3, 5, 3]
Output: 
1 3 3 5 7
3 5 3 7 1   */


#include <bits/stdc++.h>
using namespace std;
vector<int> sortVector(vector<int> v) {
    sort(v.begin(), v.end());  // Sorting in ascending order
    return v;
}
vector<int> reverseVector(vector<int> v) {
    reverse(v.begin(), v.end());  // Reversing the vector
    return v;
}


