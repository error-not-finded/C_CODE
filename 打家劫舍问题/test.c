#define _CRT_SECURE_NO_WARNINGS 1

#define MAX(a,b) ((a)>(b))?(a):(b)//定义宏，取最大值
int rob(int* nums, int numsSize)
{
    if (numsSize == 0)
    {
        return 0;
    }
    else if (numsSize == 1)
    {
        return *(nums + 0);
    }
    else if (numsSize == 2)
    {
        return MAX(*(nums), *(nums + 1));
    }
    //在多余两家家店铺时，之后的每家店铺都有两种选择，选择抢劫第i家店铺则第i-1家店铺不能被抢劫
    //问题转化为第i家店铺的钱加上抢劫第i-2家店铺问题。第i家店铺不抢劫则转化为抢劫第i-1家店铺
    //在迭代过程中比较两种选择的钱，取最大值。
    int dp1 = *nums;
    int dp2 = MAX(*(nums), *(nums + 1));
    int sum = 0;
    for (int i = 2; i < numsSize; i++)
    {
        sum = MAX(dp1 + *(nums + i), dp2);
        dp1 = dp2;
        dp2 = sum;
    }
    return sum;
}