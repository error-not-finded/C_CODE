#define _CRT_SECURE_NO_WARNINGS 1
//
//
//int missingNumber(int* nums, int numsSize)
//{
//    int test = 0;
//    for (int i = 0; i < numsSize; i++)
//    {
//        test ^= *(nums + i);
//    }
//    for (int i = 0; i < numsSize + 1; i++)
//    {
//        test ^= i;
//    }
//    return test;
//}
void Reverse(int* left, int* right, int k)
{
    while (right > left)
    {
        int tmp = 0;
        tmp = *(right);
        *(right) = *(left);
        *(left) = tmp;
        left++;
        right--;
    }
}

void rotate(int* nums, int numsSize, int k) 
{
    Reverse(nums, nums + numsSize - k - 1, numsSize - k);
    Reverse(nums + numsSize - k, nums + numsSize - 1, k);
    Reverse( nums,nums + numsSize - 1, numsSize);
}
int main()
{
    int arr[7] = { 1,2,3,4,5,6,7 };
    rotate(arr, 7, 3);
    return 0;
}