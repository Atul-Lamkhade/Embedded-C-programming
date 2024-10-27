//Write a c program that prints the Fibonacci sequence upto n terms using while loop. value of n should be provided by the user
 //Author name-Atul Lamkhade

 // Fibonacci Sequence 0,1,1,2,3,5,8,13.......


 #include<stdio.h>
 int main()
 {
  int n;
  printf("Enter number:");
  scanf("%d",&n);

  int term1=0,term2=1,i=1,next;
  printf("Fibonacci sequence upto %d terms:",n);
  while(i<=n)
  {
        if(i==1)
        {
            printf("%d",term1);
        }
        else if(i==2)
        {
            printf(",%d",term2);
        }
        else
        {
            next=term1+term2;
            term1=term2;
            term2=next;
        
          printf(",%d",next);

        }
        i++;
  }
    return 0;

 }