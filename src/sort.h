class sort
{
private:
    int *a;
    int a_size;

public:
    sort(int *b, int n)
    {
        a = b;
        a_size = n;
    };
    void swap(int *x, int *y)
    {
        int temp = *x;
        *x = *y;
        *y = temp;
    }

    void display_array()
    {
        for (int i = 0; i < a_size; i++)
        {
            cout << "a" << i << ": " << a[i] << endl;
        }
    }
    void bubleSort()
    {        
        for (int i = 0; i < a_size - 1; i++)
        {
            for (int j = 0; j < a_size - 1 - i; j++)
            {
                if (a[j] > a[j+1])
                {
                    swap(&a[j], &a[j+1]);
                }
            }
        }
    }
};