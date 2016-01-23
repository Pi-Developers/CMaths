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
    
    
    
    
    
}


void ComputePi(){
    
//     for k in range(n):
//
//        t = ((-1)**k)*(factorial(6*k))*(13591409+545140134*k)
//        deno = factorial(3*k)*(factorial(k)**3)*(640320**(3*k))
//        pi += Decimal(t)/Decimal(deno)  
//                                 
//    pi = pi * Decimal(12)/Decimal(640320**(1.5))
//    pi = 1/pi


 
//    int input,i,original,output;
//   
//    printf("Enter Number of decimals\n\n>>");
//
//    scanf("%d", &input);
//    
//    for(i = 0; i >= input; i++){
//        
//        
//        
//    }


    
    
}


// double Pi (int i) {
//    
//    return 1 + i / (2.0 * i + 1) * Pi(i + 1);
//    
// }



void EncodeText(){
    
    
}

void DecodeTotext(){
    
    
}

void ComputePascal(){
    
    
}

void QuadraticEquation(){
    
    
}

void Logarithm(){
    
    
}
