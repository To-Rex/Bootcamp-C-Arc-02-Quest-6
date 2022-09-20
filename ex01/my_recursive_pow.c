int my_recursive_pow(int p1, int p2)
{
    if (p2 != 0) {
    return (p1* my_recursive_pow( p1,p2-1));
    }
    return 1;
}