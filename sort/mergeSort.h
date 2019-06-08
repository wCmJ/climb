
template<typename T>
void merge(T *p, int lo, int mi, int hi)
{
    int len1 = mi - lo;
    int len2 = hi - mi;
    T *A = p + lo;
    T *B = new T[len1];
    T *C = p + mi;
    //
    for(int i = 0;i<len1;++i)
        B[i] = A[i];
        
    //
    for(int i=0,j=0,k=0;(j < len1) || (k < len2);)
    {
        if(j<len1 && ((len2 <= k) || (B[j] <= C[k])))
            A[i++] = B[j++];
        if(k<len2 && ((len1 <= j) || (C[k] < B[j])))
            A[i++] = C[k++];
    }
}

template<typename T>
void mergeSort(T *p, int lo, int hi)
{
    if(p == 0 || hi - lo < 2)
        return;
    int mi = (hi + lo) >> 1;
    mergeSort(p, lo, mi);
    mergeSort(p, mi, hi);
    merge(p, lo, mi, hi);
}
