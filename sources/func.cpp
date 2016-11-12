double sum() 
{
    float e=1e-4;
    float rez = 0;
    float si = 0;
    int k = 0;
    int sign = 1;
    do
    {
        k++;
        si = 1./(k * k * k);
        rez += sign*si;
        sign *= -1;
    } while (si >= e);
    double a = round(rez*10000)/10000;
    return a;
}
