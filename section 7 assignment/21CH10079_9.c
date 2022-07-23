typedef struct
{
    double x;
    double y;
} Complex;
Complex add(Complex z1, Complex z2)
{
    Complex z;
    z.x =z_1.x + z_2.x;
    z.y =z_1.y + z_2.y;
    return (z);
}
Complex sub(Complex z1, Complex z2)
{
    // computes and returns z1-z2
}
double mod(Complex z)
{
    return (sqrt(z.x * z.x + z.y * z.y)
);
}
Complex div(Complex z1, Complex z2)
{ // Divide z1 by z2
    Complex z;
    z.x =  (z1.x*z2.x + z1.y*z2.y)/(mod(z2)*mod(z2));
    z.y = (z1.x*z2.x + z1.y*z2.y)/(mod(z2)*mod(z2));
    return (z);
}
int main()
{
    Complex w1;
    Complex w2;
    scanf("%lf %lf %lf %lf", &w1.x, &w1.y, &w2.x, &w2.y);
    Complex v = add(w1, w2);
    if (w2.x==0 && w2.y==0)
    {
        printf("Error: division by 0.\n");
        return 0;
    }
    Complex w = div(sub(w1, w2), v);
    w.x += 0.5;
    printf("|w| = %lf\n", mod(w));
    return 0;
}