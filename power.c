#define e 2.71828182846
double Pow (double x , int y)
{
    double sum=1;
    for(int i=1;i<=y;i=i+1)
    {
        sum=sum*x;
    }
    return sum;
}
double Exp(int x)
{
    return Pow(e,x);
}
