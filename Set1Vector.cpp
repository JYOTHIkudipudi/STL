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


void add_to_vector(vector<int> &A, int x) {
    A.push_back(x);
}

void sort_vector_asc(vector<int> &A) {
    sort(A.begin(), A.end());
}

void reverse_vector(vector<int> &A) {
    reverse(A.begin(), A.end());
}

int size_of_vector(vector<int> &A) {
    return A.size();
}


void sort_vector_desc(vector<int> &A) {
    sort(A.begin(), A.end(), greater<int>());
}


void print_vector(vector<int> &A) {
    for (auto it = A.begin(); it != A.end(); it++) {
        cout << (*it) << " ";
    }
    cout << endl;
}
