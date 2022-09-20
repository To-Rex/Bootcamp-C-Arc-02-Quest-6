
int my_iterative_pow(int p1, int p2)
{
    int v = 1;
    for (int i = 0;i<p2;i++){
         v= v*p1;  
    }
    return v;
}
