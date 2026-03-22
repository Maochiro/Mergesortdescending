#include <iostream>
#include <vector>
using namespace std;

long long comparisons = 0;
long long swaps = 0;

// Merge function for descending order
void merge(vector<int>& arr, int left, int mid, int right) {
    int n1 = mid - left + 1;
    int n2 = right - mid;

    vector<int> L(n1), R(n2);
    for(int i = 0; i < n1; i++) L[i] = arr[left + i];
    for(int j = 0; j < n2; j++) R[j] = arr[mid + 1 + j];

    int i = 0, j = 0, k = left;

    while(i < n1 && j < n2) {
        comparisons++;
        if(L[i] >= R[j]) {  // descending order
            arr[k] = L[i];
            i++;
        } else {
            arr[k] = R[j];
            j++;
        }
        swaps++;
        k++;
    }

    while(i < n1) { arr[k++] = L[i++]; swaps++; }
    while(j < n2) { arr[k++] = R[j++]; swaps++; }
}

// Merge Sort function
void mergeSort(vector<int>& arr, int left, int right) {
    if(left < right) {
        int mid = left + (right - left) / 2;
        mergeSort(arr, left, mid);
        mergeSort(arr, mid + 1, right);
        merge(arr, left, mid, right);
    }
}

// Example lists for testing
void getLists(vector< vector<int> >& lists) {
    // Small example lists (size <= 10)
    vector<int> list1; list1.push_back(5);
    vector<int> list2; list2.push_back(3); list2.push_back(1);
    vector<int> list3; list3.push_back(4); list3.push_back(2); list3.push_back(9);
    vector<int> list4; list4.push_back(10); list4.push_back(5); list4.push_back(8); list4.push_back(3);
    vector<int> list5; list5.push_back(6); list5.push_back(2); list5.push_back(9); list5.push_back(1); list5.push_back(7);
    vector<int> list10; 
    for(int i=10;i>=1;i--) list10.push_back(i);

    lists.push_back(list1);
    lists.push_back(list2);
    lists.push_back(list3);
    lists.push_back(list4);
    lists.push_back(list5);
    lists.push_back(list10);

    // Larger example lists: descending sequences
    int sizes[] = {250, 999, 9999, 89786, 789300, 1780000};
    for(int s=0;s<6;s++) {
        vector<int> temp;
        for(int i = sizes[s]; i >=1; i--) temp.push_back(i);
        lists.push_back(temp);
    }
}

int main() {
    cout << "Name:Maureen Sang\n";
    cout << "Registration Number:EB3/67272/23\n";
    cout << "Algorithm: Merge Sort (Descending Order)\n\n";

    vector< vector<int> > lists;
    getLists(lists);

    for(int idx = 0; idx < lists.size(); idx++) {
        vector<int>& arr = lists[idx];
        comparisons = 0;
        swaps = 0;

        mergeSort(arr, 0, arr.size() - 1);

        // Print small lists
        if(arr.size() <= 10) {
            cout << "Sorted List (" << arr.size() << " items, Descending): ";
            for(int i = 0; i < arr.size(); i++) cout << arr[i] << " ";
            cout << endl;
        }

        cout << "List size: " << arr.size() 
             << ", Comparisons: " << comparisons
             << ", Swaps: " << swaps << endl << endl;
    }

    cout << "Step-by-step example: [4, 2, 9] -> [9, 4, 2]\n";
    cout << "Time Complexity: Best, Average, Worst = O(n log n)\n";
    cout << "Space Complexity: O(n) extra space for merging\n";
    return 0;
}