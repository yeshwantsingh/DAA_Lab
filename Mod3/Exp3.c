#include<stdio.h>

void d_c(int[][] a, int[][] b, int[][] c, int r1, int r2,
 int c1, int c2, int r3, int r4, int c3, int c4)
 {
     if(r1 == r2 && c1 == c2 && r3 == r4 && c3 == c4)
          c[r1][c3] = a[r1][c1] * b[r3][c3]

     r = a*e + b*g
     r = d_c(a, b, c, r1, (r1+r2)/2, c1, (c2+c1)/2, r3, (r4+r3)/2, c3, (c4+c3)/2) + 
        d_c(a, b, r1, (r1+r2)/2, (c2+c1)/2, c2, (r4+r3)/2, r4, c3, (c4+c3)/2)

     s = a*f + b*h
     s = d_c(a, b, c, r1, (r1+r2)/2, c1, (c2+c1)/2, r3, (r4+r3)/2, (c4+c3)/2, c4) + 
        d_c(a, b, r1, (r1+r2)/2, (c2+c1)/2, c2, (r4+r3)/2, r4, (c4+c3)/2, c4)

     t = c*e + d*g
     t = d_c(a, b, c, (r1+r2)/2, r2, c1, (c2+c1)/2, r3, (r4+r3)/2, c3, (c4+c3)/2) + 
        d_c(a, b, (r1+r2)/2, r2, (c2+c1)/2, c2, (r4+r3)/2, r4, c3, (c4+c3)/2)

     u = c*f + d*h 
     u = d_c(a, b, c, (r1+r2)/2, r2, c1, (c2+c1)/2, r3, (r4+r3)/2, (c4+c3)/2, c4) + 
        d_c(a, b, (r1+r2)/2, r2, (c2+c1)/2, c2, (r4+r3)/2, r4, (c4+c3)/2, c4)

 }

int main(){
  int a[2][2],b[2][2],c[2][2],i,j;
  int m1,m2,m3,m4,m5,m6,m7;

  printf("Enter the 4 elements of first matrix: ");
  for(i=0;i<2;i++)
      for(j=0;j<2;j++)
           scanf("%d",&a[i][j]);

  printf("Enter the 4 elements of second matrix: ");
  for(i=0;i<2;i++)
      for(j=0;j<2;j++)
           scanf("%d",&b[i][j]);

  printf("\nThe first matrix is\n");
  for(i=0;i<2;i++){
      printf("\n");
      for(j=0;j<2;j++)
           printf("%d\t",a[i][j]);
  }

  printf("\nThe second matrix is\n");
  for(i=0;i<2;i++){
      printf("\n");
      for(j=0;j<2;j++)
           printf("%d\t",b[i][j]);
  }

  m1= (a[0][0] + a[1][1])*(b[0][0]+b[1][1]);
  m2= (a[1][0]+a[1][1])*b[0][0];
  m3= a[0][0]*(b[0][1]-b[1][1]);
  m4= a[1][1]*(b[1][0]-b[0][0]);
  m5= (a[0][0]+a[0][1])*b[1][1];
  m6= (a[1][0]-a[0][0])*(b[0][0]+b[0][1]);
  m7= (a[0][1]-a[1][1])*(b[1][0]+b[1][1]);

  c[0][0]=m1+m4-m5+m7;
  c[0][1]=m3+m5;
  c[1][0]=m2+m4;
  c[1][1]=m1-m2+m3+m6;

   printf("\nAfter multiplication using \n");
   for(i=0;i<2;i++){
      printf("\n");
      for(j=0;j<2;j++)
           printf("%d\t",c[i][j]);
   }

   return 0;
}
