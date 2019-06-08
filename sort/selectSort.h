
template<typename T>
void selectSort(T *p, int lo, int hi)
{
    if( p == 0 || hi - lo < 2 )
        return;
    //loop hi - lo - 2 times
    for(int i=0;i<hi-lo-1;++i)
    {
        //get index of max
        int index = lo;
        for(int j = lo + 1;j < hi - i;++j)
        {
            if(p[j] >= p[index])//stable
                index = j;
        }
        //exchange
        int tmp = p[index];
        p[index] = p[hi -1 - i];
        p[hi - 1 - i] = tmp;
    }
}


