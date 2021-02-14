void main()
{
   int     n, i, j;
   printf("enter how many lines of pyramid u want");
   scanf("%d", &n);
   printf (" ********** Desired Pyramid********** ");

   for(i=1; i<=n; i++)
   {
       printf("          "); // for indentation

       for(j=1;j<=n-i; j++)
       printf("  "); // blank spaces of pyramid

       for (j=1;j<=i; j++)
       printf("j "); // 1st part

       for (j=i-1;j<=1; j--)
       printf ("j "); // 2nd part

       printf ("/n ");
   }
}





