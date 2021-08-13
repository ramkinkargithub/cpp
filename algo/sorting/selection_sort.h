void decselectionSort(int arr[], int n)
{
    int max;
    for (int i = 0; i < n; i++)
    {
        max = i;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[max] < arr[j])
                max = j;
        }
        if (max != i)
        {
            int temp = arr[max];
            arr[max] = arr[i];
            arr[i] = temp;
        }
    }
}

void selectionSort(int arr[], int n)
{
    int min;
    for (int i = 0; i < n; i++)
    {
        min = i;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[min] > arr[j])
                min = j;
        }
        if (min != i)
        {
            int temp = arr[min];
            arr[min] = arr[i];
            arr[i] = temp;
        }
    }
}