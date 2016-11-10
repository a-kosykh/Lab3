double sum() 
{
    double e=1e-4;
    double rez = 0;
    double si = 0;
    int k = 0;
    int sign = 1;
    do
    {
        k++;
        si = 1./(k * k * k);
        rez += sign*si;
        sign *= -1;
    } while (si >= e);
    
    return rez;
}
