int find_floor(int arr[], int n, int x)
{
    int l = 0, h = n - 1;
    int ans = -1;
    while (l <= h)
    {
        int mid = (l + h) / 2;
        if (arr[mid] <= x)
        {
            ans = arr[mid];
            l = mid + 1;
        }
        else
        {
            h = mid - 1;
        }
    }
    return ans;
}
int find_ceil(int arr[], int n, int x)
{
    int l = 0, h = n - 1;
    int ans = -1;
    while (l <= h)
    {
        int mid = (l + h) / 2;
        if (arr[mid] >= x)
        {
            ans = arr[mid];
            h = mid - 1;
        }
        else
        {
            l = mid + 1;
        }
    }
    return ans;
}
pair<int, int> getfloor_ceil(int arr[], int n, int x)
{
    int f = find_floor(arr, n, x);
    int c = find_ceil(arr, n, x);
    return make_pair(f, c);
}
