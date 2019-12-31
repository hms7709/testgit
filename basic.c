# include <stdio.h>

int arrayPlus (int arr[], int length)
{
    int i;
    int result = 0;

    for (i = 0; i < length; i++)
    {
        result += arr[i];
    }

    return result;
}

int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    int result;
    int length = sizeof(arr) / sizeof(int);

    result = arrayPlus (arr, length);

    printf("모든 배열의 합 : %d", result);

    return 0;
}

// 인자 : 함수를 호출할 때 넘겨주는 값
// 인자 = 매개변수