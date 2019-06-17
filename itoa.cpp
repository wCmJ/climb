void itoa(int i, char* c)
{
    if(c == NULL)
        return;
    int power = 1, tmp = i;
    while(tmp >= 10)
    {
        power *= 10;
        tmp /= 10;
    }

    while(power)
    {
        *c++ = '0' + i/power;
        i %= power;
        power /= 10;        
    }       
}
