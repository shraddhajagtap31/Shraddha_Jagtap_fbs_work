void main()
{
    int arr[6];
    int max, secmax;
    int i;
    printf("Enter the elements of an array : ");
    for(i=0; i<6; i++)
    {
        scanf("%d", &arr[i]);
    }
    max = arr[0];
    secmax = arr[1];

    if(secmax > max)
    {
        int temp = max;
        max = secmax;
        secmax = temp;
    }
    for(i=2; i<6; i++)
    {
        if(arr[i] > max)
        {
            secmax = max;
            max = arr[i];
        }
        else if(arr[i] > secmax)
        {
            secmax = arr[i];
        }
    }

    printf("Maximum = %d\n", max);
    printf("Second Maximum = %d", secmax);
}