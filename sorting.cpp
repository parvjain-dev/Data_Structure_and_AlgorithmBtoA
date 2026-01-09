#include <bits/stdc++.h>
#include <iostream>

using namespace std;

void selectionSort(vector<int> &v)
{
    for (int i = 0; i < v.size(); i++)
    {
        int min = INT_MAX;
        int minIndex;
        for (int j = i; j < v.size(); j++)
        {
            if (v[j] < min)
            {
                minIndex = j;
                min = v[j];
            }
        }

        swap(v[minIndex], v[i]);
    }
}

void bubbleSort(vector<int> &v)
{
    for (int j = 0; j < v.size(); j++)
    {
        int swapCount = 0;
        for (int i = 0; i < v.size() - j - 1; i++)
        {

            if (v[i] > v[i + 1])
                swap(v[i], v[i + 1]);
            swapCount = 1;
        }
        if (swapCount == 0)
        {
            break;
        }
    }
}
void insertionSort(vector<int> &v)
{
    for (int i = 1; i < v.size(); i++)
    {
        int j = i;
        while (j > 0 && v[j - 1] > v[j])
        {
            swap(v[j], v[j - 1]);

            j--;
        }
    }
}

void quickSort(vector<int> &arr, int low, int high)
{
    if (low < high)
    {
        int i = low;
        int j = high;
        int pivot = arr[low];
        while (i < j)
        {
            while (i <high && arr[i] <= pivot)
            {
                i++;
            }
            while (j > low && arr[j] > pivot)
            {
                j--;
            }
            if (i < j)
            {
                swap(arr[i], arr[j]);
            }
        }
        swap(arr[low], arr[j]);
        int partition = j;
        quickSort(arr, low, partition - 1);
        quickSort(arr, partition + 1, high);
    }
}

void merge(vector<int> &v, int low, int mid, int high)
{
    int i = low;
    int j = mid + 1;
    vector<int> temp;

    while (i <= mid && j <= high)
    {
        if (v[i] < v[j])
        {
            temp.push_back(v[i]);
            i++;
        }
        else
        {
            temp.push_back(v[j]);
            j++;
        }
    }
    while (i <= mid)
    {
        temp.push_back(v[i]);
        i++;
    }
    while (j <= high)
    {
        temp.push_back(v[j]);
        j++;
    }

    for (int k = low; k <= high; k++)
    {
        v[k] = temp[k - low];
    }
}
void mergeSort(vector<int> &v, int low, int high)
{
    if (low >= high)
        return;
    int mid = (low + high) / 2;
    mergeSort(v, low, mid);
    mergeSort(v, mid + 1, high);

    merge(v, low, mid, high);
}
int main()
{

    vector<int> v;

    v.push_back(4);
    v.push_back(6);
    v.push_back(2);
    v.push_back(5);
    v.push_back(7);
    v.push_back(9);
    v.push_back(1);
    v.push_back(3);
    // for (auto it : v)
    // {
    //     cout << it << " ";
    // }
    // cout << endl;
    // selectionSort(v);
    // for (auto it : v)
    // {
    //     cout << it << " ";
    // }
    // cout << endl;
    // bubbleSort(v);
    // insertionSort(v);
    // for (auto it : v)
    // {
    //     cout << it << " ";
    // }

    for (auto it : v)
    {
        cout << it << " ";
    }
    cout << endl;
    quickSort(v, 0, v.size() - 1);
    for (auto it : v)
    {
        cout << it << " ";
    }
    return 0;
}