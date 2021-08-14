void merge(int arr[], int l, int m, int h)
{
    int n1 = m - l + 1, n2 = h - m, i, j, index = l;
    int left[n1], right[n2];
    for (i = 0; i < n1; i++)
        left[i] = arr[l + i];
    for (i = 0; i < n2; i++)
        right[i] = arr[m + 1 + i];
    for (i = 0, j = 0; i < n1 && j < n2;)
    {
        if (left[i] <= right[j])
            arr[index++] = left[i++];
        else
            arr[index++] = right[j++];
    }
    while (i < n1)
        arr[index++] = left[i++];
    while (j < n2)
        arr[index++] = right[i++];
    return;
}
void mergeSort(int arr[], int l, int h)
{
    if (l < h)
    {
        int m = l + (h - l) / 2;
        mergeSort(arr, l, m);
        mergeSort(arr, m + 1, h);
        merge(arr, l, m, h);
    }
    return;
}