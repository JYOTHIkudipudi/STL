/*   Implement different operations on a vector A .
 
Input:
The first line of input contains an integer T denoting the no of test cases . Then T test cases follow. The first line of input contains an integer Q denoting the no of queries . Then in the next line are Q space separated queries .
A query can be of five types 
1. a x (Adds an element x to the vector A at the end )
2. b (Sorts the vector A in ascending order )
3. c (Reverses the vector A)
4. d (prints the size of the vector)
5. e (prints space separated values of the vector)
5. f  (Sorts the vector A in descending order)


Output:
The output for each test case will  be space separated integers denoting the results of each query .    */

#include <bits/stdc++.h>  
using namespace std;
/**
 * Adds an element to the end of the vector.
 * @param A Reference to the vector.
 * @param x The integer to be added.
 */
void add_to_vector(vector<int> &A, int x) {
    A.push_back(x);
}

/**
 * Sorts the vector in ascending order.
 * @param A Reference to the vector.
 */
void sort_vector_asc(vector<int> &A) {
    sort(A.begin(), A.end());
}

/**
 * Reverses the order of elements in the vector.
 * @param A Reference to the vector.
 */
void reverse_vector(vector<int> &A) {
    reverse(A.begin(), A.end());
}

/**
 * Returns the size of the vector.
 * @param A Reference to the vector.
 * @return The number of elements in the vector.
 */
int size_of_vector(vector<int> &A) {
    return A.size();
}

/**
 * Sorts the vector in descending order.
 * @param A Reference to the vector.
 */
void sort_vector_desc(vector<int> &A) {
    sort(A.begin(), A.end(), greater<int>());
}

/**
 * Prints the elements of the vector, space-separated.
 * @param A Reference to the vector.
 */
void print_vector(vector<int> &A) {
    for (auto it = A.begin(); it != A.end(); it++) {
        cout << (*it) << " ";
    }
    cout << endl;
}
