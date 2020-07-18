int main()
{
    int n;
    int count=0,larg=0,rem;
    printf("enter the integer number : ");
    scanf("%d",&n);
    while(n>0)
    {
        rem=n%10;
        if(rem>larg)
            {
              larg=rem;
            }
        n=n/10;
    }
    printf("largest digit : %d",larg);
    return 0;
}
