#include <iostream>
#include <vector>
#include <chrono>
#include "DyV.h" 

using namespace std;


template<typename T>
void printVector(const vector<T>& v) {
    for (auto x : v) cout << x << " ";
    cout << endl;
    
}


template<typename Func, typename T>
void testTime(Func f, vector<T> v, const string& name) {
    auto start = chrono::system_clock::now();
    f(v, 0, v.size() - 1);
    auto end = chrono::system_clock::now();
    chrono::duration<float, std::milli> duration = end - start;

    cout << name << " - Tiempo: " << duration.count() << " ms" << endl;
    printVector(v);
}

int main() {
    
    vector<int> vi = {6, 3, 8, 7, 2, 5, 4};
    vector<float> vf = {3.2, 1.5, 4.8, 2.1, 0.5};
    vector<char> vc = {'d','a','c','b','e'};

    cout << "----- Test QuickSort con distintos tipos -----" << endl;

    cout << "\n--- Enteros ---" << endl;
    testTime(QuickSort<int>, vi, "QuickSort Ultimo");
    testTime(QuickSortFirst<int>, vi, "QuickSort Primer");

    cout << "\n--- Floats ---" << endl;
    testTime(QuickSort<float>, vf, "QuickSort Ultimo");
    testTime(QuickSortFirst<float>, vf, "QuickSort Primer");

    cout << "\n--- Chars ---" << endl;
    testTime(QuickSort<char>, vc, "QuickSort Ultimo");
    testTime(QuickSortFirst<char>, vc, "QuickSort Primer");

    return 0;
}
