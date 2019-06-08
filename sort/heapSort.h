
template<typaname T>
void oneMaxHeap(T *p, int hi, int index)
{
    int max = index;
    if(2 * index + 1 < hi && p[2 * index + 1] > p[max])
        max = 2 * index + 1;
    if(2 * index + 2 < hi && p[2 * index + 2] > p[max])
        max = 2* index + 2;
    if(max != index)
    {
        p[max] = p[max]^p[index];
        p[index] = p[max]^p[index];
        p[max] = p[max]^p[index];
        oneMaxHeap(p, hi, max);
    }
}

template<typename T>
void heapSort(T *p, int lo, int hi)
{
    //construct max heap
    for(int i = (hi - 1)/2;i>=lo;--i)
        oneMaxHeap(p, hi, i);
    
    //sort
    for(int i = hi - 1;i > lo;--i)
    {
        p[i] = p[i]^p[lo];
        p[lo] = p[i]^p[lo];
        p[i] = p[i]^p[lo];
        
        oneMaxHeap(p, i, lo);
    }   
}
