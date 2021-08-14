int HoaresPartition(int arr[], int l, int r)
{
    int pivot = arr[l], i = l - 1, j = r + 1;
    while (true)
    {
        do
        {
            i++;
        } while (arr[i] < pivot);
        do
        {
            j--;
        } while (arr[j] > pivot);
        if (i >= j)
            return j;
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }
}

void qucikSort(int arr[], int l, int r)
{
    if (l < r)
    {
        int p = HoaresPartition(arr, l, r);
        qucikSort(arr, l, p);
        qucikSort(arr, p + 1, r);
    }
    return;
}