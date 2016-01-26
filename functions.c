#include <stdio.h>



void checkOddOrEven(){
    
    int input;
    
    printf("Enter Number\n\n>>");

    scanf("%d", &input);
     
    if(input % 2 == 0){
         
        printf("This is even\n\n");

    }else{
         
        printf("This is odd\n\n");

    }
    
    
}



void checkPrime(){
    
    int input,i;
    
    printf("Enter Number\n\n>>");

    scanf("%d", &input);
    
    for (i=2; i < input; i++) {
        
        if (input % i == 0 && i != input) {
            
            printf("not a prime number");

        }
    }
    
    printf("a prime number");
    
}



void checkDivisbility(){
    
    int input1,input2;
    
    printf("Enter Number\n\n>>");

    scanf("%d", &input1);
    
    printf("Enter number to be divided with\n\n>>");

    scanf("%d", &input2);    
    
        
    if (input1 % input2 == 0) {
            
        printf("%d is divisble by %d", input1, input2);
            
    }else{
            
        printf("%d is not divisble by %d", input1, input2);
            
    }
    
}


void checkGoldenRatio(){
  
    int input1,input2,output;
    
    printf("Enter Number\n\n>>");

    scanf("%d", &input1);
    
    printf("Enter Number \n\n>>");

    scanf("%d", &input2);   
    
    if(input2 > input1){
        
        printf("Invalid!!\n\n");

        
    }else{
        
        output = input1 / input2;
        
        if(output > 1.68 && output < 1.69){
            
            
            printf("Golden Ratio Exists\n\n");
            
        }else{
        
            
            printf("Golden Ratio doesn't exist \n\n");
            
        }
        
    }
    
}



void ComputeFactorial(){
    
    
    int input,i,original,output;
     
    printf("Enter Number\n\n>>");

    scanf("%d", &input);
    
    original = input;   
    
    for(i = 1; i<=input; i++){
        
       output *= i; 
 
    }

    printf("%d! = %d", original , output);
    
    
}



void ComputeFibonacci(){
    
    int input,i,output;
     
    printf("1- Compute nth term\n2- Compute Fibonacci till nth term\n\n\n Enter Choice\n>>");

    scanf("%d", &input);
    
    
    
    if(input ==  1){
        
       printf("Enter Number\n\n>>");
       scanf("%d", &input);
       printf("The %dth term Fibonacci is %dof \n\n>>", input, Fibonacci(input));
       



    } else if(input ==  2) {
        
       printf("Enter Number\n\n>>");
       scanf("%d", &input);
       printf("Fibonacci till %dth term\\n\n>>", input);
       
       for(i = 0 ; i<= input; i++){
        
          printf("%d",Fibonacci(i));
        
       }

    }
    
    
}


//Using Recursion
int Fibonacci(int n) {
    
   if ( n == 0 )
       
      return 0;
      
   else if ( n == 1 )
       
      return 1;
      
   else
       
      return ( Fibonacci(n-1) + Fibonacci(n-2) );
}



void ComputePi(){

    /**
     * Gauss–Legendre algorithm
     * 
     * pi = (a + b)*(a + b)/(4*t) 
     * 
     * first 3 iterations to get accurate
     * 
     */
     
     
    double a = 1.0;              //a = 1
    double b = 1.0/sqrt ( 2.0 ); //b = cos(45)
    double t = 1.0/4.0;          //t = 0.25
    double x = 1.0;              //P = 1
    double aDash;                // to equalize a;
    double pi;
    
    int i;
    
    for ( i = 0; i < 4; i++ ){
        
        aDash = a;
        a = (a + b)/2.0;
        b = sqrt ( b*aDash );
        t -= x*(aDash - a)*(aDash - a);
        x *= 2;
        
    }

    pi = (a + b)*(a + b)/(4*t);
    
    printf( "Pi = %f\n", pi );
   
 
}

void QuadraticEquation(){
    
    int a,b,c;
    double resultp,resultm;
    
     printf("Enter coffecients\n\n>>");
     printf("a = ");
     scanf("%d", &a);
     printf("\nb = ");
     scanf("%d", &b);
     printf("\nc = ");
     scanf("%d", &c);
    
     resultp = (double) (-b + sqrt( pow((double)b, (double)2) - (4 * a * c) )) / ( 2*a);
     resultm = (double) (-b - sqrt( pow((double)b, (double)2) - (4 * a * c) )) / ( 2*a);

     printf("Roots are %f and %f", resultp,resultm);
  

  
}



void Logarithm(){
    
    int input,output;
    double i,x;
     
    printf("1-Compute log base 10 \n2- calculate natural logarithm \n3-Custom Log \n\n Enter Choice\n>>");
    scanf("%d", &input);
    
    if(input == 1){
       
       printf("Enter Number\n\n>>");
       scanf("%d", &input);
       printf("Logarithm %d to the base 10 = %f", input, log10(input));

    }else if (input == 2){
        
       
       printf("Enter Number\n\n>>");
       scanf("%d", &input);
       printf("Logarithm %d to the base e = %f", input, log(input));
 

    }else if (input == 3){
       

      printf("Enter base\n\n>>");
      scanf("%d", &input);
      printf("Enter number\n\n>>");
      scanf("%d", &x);

      i = log(input) / log(x);
      
      printf("Logarithm %d to the base e = %f", input, log(i));
 
 
        
    }
}