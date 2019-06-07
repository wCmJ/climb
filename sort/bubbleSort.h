template<typename T>
void bubbleSort(T *p, int lo, int hi)
{
    if( p == 0)
        return;
    for(int i=0;i<hi - lo - 1;++i)
    {
        bool flag = true;
        for(int j = lo + 1; j < hi - i;++j)
        {
            if(p[j] < p[j-1])
            {
                p[j] = p[j]^p[j-1];
                p[j-1] = p[j]^p[j-1];
                p[j] = p[j]^p[j-1];
                flag = false;
            }
        }
        if(flag)
            return;
    }
}



