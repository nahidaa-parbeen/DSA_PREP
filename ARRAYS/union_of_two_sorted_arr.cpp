vector<int> findUnion(int arr1[], int arr2[], int n, int m) {
    vector<int> Union;

    int i = 0, j = 0;

    while (i < n && j < m) {
        if (arr1[i] < arr2[j]) {
            if (Union.empty() || Union.back() != arr1[i])
                Union.push_back(arr1[i]);
            i++;
        }
        else if (arr2[j] < arr1[i]) {
            if (Union.empty() || Union.back() != arr2[j])
                Union.push_back(arr2[j]);
            j++;
        }
        else {
            if (Union.empty() || Union.back() != arr1[i])
                Union.push_back(arr1[i]);
            i++; 
            j++;
        }
    }

    while (i < n) {
        if (Union.empty() || Union.back() != arr1[i])
            Union.push_back(arr1[i]);
        i++;
    }

    while (j < m) {
        if (Union.empty() || Union.back() != arr2[j])
            Union.push_back(arr2[j]);
        j++;
    }

    return Union;
}
