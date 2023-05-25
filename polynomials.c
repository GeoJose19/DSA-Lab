

 #include<stdio.h>
void create(int poly[],int degree)
{
    int i=0;
    
    printf("Enter the coeffecients for:\n");
    for(i=degree;i>=0;i--)
    {
        printf("Exp_%d: ",i);
        scanf("%d",&poly[i]);
    }
}
void display(int poly[],int degree)
{
    int i;
    for(i=degree;i>=0;i--)
    {
        
        if(i!=degree && poly[i]>0)
        {
             printf("+"); 
        }
        printf("%dx^%d",poly[i],i);
    }
}
void main()
{
    int poly1[100]={0},degree1,poly2[100]={0},degree2,degreeresult,polyresult[100],i=0;
    
    printf("Enter the degree of first polynomial"); 
    scanf("%d",&degree1);
    create(poly1,degree1);
    printf("Enter the degree of second polynomial");
     scanf("%d",&degree2);
    create(poly2,degree2);
    if(degree1>degree2)
    {
        degreeresult=degree1;
    }
    else
    {
        degreeresult=degree2;
    }
    for(i=0;i<=degreeresult;i++)
    {
        polyresult[i]=poly1[i]+poly2[i];
    }
    printf("The first polynomial is:\n");
    display(poly1,degree1);
     printf("\nThe second polynomial is:\n");
     display(poly2,degree2);
     printf("\nThe sum of 2 polynomials is:\n");
     display(polyresult,degreeresult);
}

Alternate implementation

/*********************************************
*    Polynomial addition using arrays in C

*********************************************/
#include<stdio.h>
#include<math.h>
/*
  This structure is used to store a polynomial term. An array of such terms represents a
  polynomial.
  The "coeff" element stores the coefficient of a term in the polynomial,while
  the "exp"   element stores the exponent.
  
*/
struct poly
{
  float coeff;
  int exp;
};
//declaration of polynomials
struct poly a[50],b[50],c[50];
int main()
{
 int i;
 int deg1,deg2;      //stores degrees of the polynomial
 int k=0,l=0,m=0;
  printf("Enter the highest degree of poly1:");
 scanf("%d",&deg1);
  //taking polynomial terms from the user
 for(i=0;i<=deg1;i++)
 {
     //entering values in coefficient of the polynomial terms
    printf("\nEnter the coeff of x^%d :",i);
    scanf("%f",&a[i].coeff);
	
	//entering values in exponent of the polynomial terms
	a[k++].exp = i;
 }
 //taking second polynomial from the user
 printf("\nEnter the highest degree of poly2:");
 scanf("%d",&deg2);
 
 for(i=0;i<=deg2;i++)
 { 
       printf("\nEnter the coeff of x^%d :",i);
       scanf("%f",&b[i].coeff);
	   
	   b[l++].exp = i;
 }

 //printing first polynomial
  printf("\nExpression 1 = %.1f",a[0].coeff);
  for(i=1;i<=deg1;i++)
  {
    printf("+ %.1fx^%d",a[i].coeff,a[i].exp);
  }    
  
   //printing second polynomial
  printf("\nExpression 2 = %.1f",b[0].coeff);
   for(i=1;i<=deg2;i++)
    {
      printf("+ %.1fx^%d",b[i].coeff,b[i].exp);
    }

//Adding the polynomials	
 if(deg1>deg2)
    {
		for(i=0;i<=deg2;i++)
		  {
			c[m].coeff = a[i].coeff + b[i].coeff;
			c[m].exp = a[i].exp;
			m++;
		  }
		  
		  for(i=deg2+1;i<=deg1;i++)
		  {
			c[m].coeff = a[i].coeff;
			c[m].exp = a[i].exp;
			m++;
		  }
    }
 else
  {
    for(i=0;i<=deg1;i++)
     {
       c[m].coeff = a[i].coeff + b[i].coeff;
       c[m].exp = a[i].exp;
       m++;
     }
    
	for(i=deg1+1;i<=deg2;i++)
    {
      c[m].coeff = b[i].coeff;
      c[m].exp = b[i].exp;
      m++;
    }
  }
  
    //printing the sum of the two polynomials
  printf("\nExpression after additon  = %.1f",c[0].coeff);
  for(i=1;i<m;i++)
  {
     printf("+ %.1fx^%d",c[i].coeff,c[i].exp);
   }	 
 
  return 0;

}

