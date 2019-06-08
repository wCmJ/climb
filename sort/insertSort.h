
template<typename T>
void insertSort(T *p, int lo, int hi)
{
    if(p == 0 || hi - lo < 2)
        return;
    for(int i= lo + 1;i < hi;++i)
    {
        int j = i - 1;
        int value = p[i];
        //get position
        for(;j>=lo;--j)
        {
            if(p[j] > value)
                p[j+1] = p[j];
            else
                break;        
        }
        p[j+1] = value;
    }
}

