int main(void)
{
    int array[10] = {7,5,5,5,5,1,4,3,6,8};

    for (int i = 0; i < 10; i++)
    {
        printf("%d ",array[i]);
    }

    int x = calulate_frequency(&array, 10, 5);

    printf("\nVeces que se encontro %d en el array: %d\n", 5, x);


    return 0;
}
