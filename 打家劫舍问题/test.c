#define _CRT_SECURE_NO_WARNINGS 1

#define MAX(a,b) ((a)>(b))?(a):(b)//����꣬ȡ���ֵ
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
    //�ڶ������Ҽҵ���ʱ��֮���ÿ�ҵ��̶�������ѡ��ѡ�����ٵ�i�ҵ������i-1�ҵ��̲��ܱ�����
    //����ת��Ϊ��i�ҵ��̵�Ǯ�������ٵ�i-2�ҵ������⡣��i�ҵ��̲�������ת��Ϊ���ٵ�i-1�ҵ���
    //�ڵ��������бȽ�����ѡ���Ǯ��ȡ���ֵ��
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