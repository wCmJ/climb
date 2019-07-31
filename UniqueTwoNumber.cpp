#include<iostream>

int FirstBitOf1(int res)
{
    int len = sizeof(res)*8;
    int tmp = 0;
    for(int i=0;i<len;++i)
    {
        tmp = 1 << i;
        if(tmp & res)
            return tmp;
    }
    return -1;
}

void UniqueTwoNumber(int *pData, int len)
{
    if(pData == NULL || len < 2)
        return;
    int res = 0;
    for(int i=0;i<len;++i)
        res ^= pData[i];
    int tmp = FirstBitOf1(res);
    if(tmp == -1)
        return;
    int n1 = 0, n2 = 0;
    for(int i=0;i<len;++i)
    {
        if(tmp & pData[i])
            n1 ^= pData[i];
        else
            n2 ^= pData[i];
    }
    std::cout<< n1 << " " << n2<<std::endl;
}

