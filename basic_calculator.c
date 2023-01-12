#include <stdio.h>
#include <math.h>
#include <ctype.h>
void getcharacter();
void binaryoperations();
void unaryoperations();
void variableoperations();
void memoryoperation();
void removememoryoperation();
void advancedoperations();
void exitprogram();
char option1;
float array[]={};
int k=1;
int counter=0;
char number;
int number1;
int number3;
float num1;
float num2;
float num3;
float num4;
float num5;
float num6;
float num7;
float num8;
float num9;
float num10;
float num11;
float num12;
float num13;
float num14;
float num15;
float num16;
float result1;
float result2;
float result3;
float result4;
float result5;
float result6;
float result7;
float result8;
float result9;
float result10;
float result11;
char option2;
char option3;
char option4;
char option5;
char option6;
char option7;
char option8;
char option9;
char option10;
char option11;
char option12;
char option13;

int main(void) {
  getcharacter();
  option1=toupper(option1);
  printf("The selected option is: %c\n",option1);
    switch(option1) {
      case 'B':
      binaryoperations();
      break;

      case 'U':
      unaryoperations();
      break;

      case 'A':
      advancedoperations();
      break;

      case 'V':
      variableoperations();
      break;

      case 'M':
      memoryoperation();
      break;

      case 'R':
      removememoryoperation();
      break;

      case 'X':
      exitprogram();
      break;

      default:
      printf("Invalid input. Please enter again.\n");
      break;

    }
  return 0;
  
}
void getcharacter() { 
   printf("Please select one of the following items:\n");
	  printf("B) - Binary Mathematical Operations such as addition and subtraction.\n");
	  printf("U) - Unary Mathematical Operations, such as square root, and log.\n");
	  printf("A) - Advances Mathematical Operations, using variables, arrays.\n");
	  printf("V) - Define variables and assign them values.\n");
    printf("M) - Select to see the memory.\n");
    printf("R) - To erase the memory.\n");
	  printf("X) - Exit\n");
    printf("Please select your option ( B (Binary operation), U (Unary operation) , A (Advanced), V (Variables), M(Memory), R(Remove Memory), X (Exit))\n");
    scanf("%s", &option1);
}
void binaryoperations(){
  {printf("Please enter the first number: \n");
    scanf("%f",&num1);
    printf("Please enter the operation ( + , - , * , / , %% , ^ (for power) ):\n");
    scanf("%s",&option2);
    printf("Please enter the second number\n");
    scanf("%f",&num2);

    switch (option2) {
    case '+':
    result1=num1+num2;
    printf("The result is:    %.2f\n",result1);
    array[k]=result1;
    k++;
    break;

    case '-':
    result2=num1-num2;
    printf("The result is:    %.2f\n",result2);
    array[k]=result2;
    k++;
    break;

    case '*':
    result3=num1*num2;
    printf("The result is:    %.2f\n",result3);
    array[k]=result3;
    k++;
    break;

    case '/':
    while (num2==0) {
      printf("Please enter the second number(non zero)\n");
      scanf("%f",&num2);
    }
    result4=num1/num2;
    printf("The result is:    %.2f\n",result4);
    array[k]=result4;
    k++;
    break;

    case '%':
    result5=((int)num1%(int)num2);
    printf("The result is:    %.2f\n",result5);
    array[k]=result5;
    k++;
    break;

    case '^':
    result6=pow(num1,num2);
    printf("The result is:    %.2f\n",result6);
    array[k]=result6;
    k++;
    break;

    default:
    printf("Invalid input.\n");
    break;
    }
    }
    main();
}
void unaryoperations() {
  printf("Please enter the operation ( S (for square root) , L (for logarithm) , E (for exponential) , C (for ceil) , F (for floor) ):\n");
    scanf("%s",&option3);

    switch(option3) {
    case 'S':
    case 's':
      printf("Enter a positive value.\n");
      scanf("%f",&num3);
      while(num3<0) {
        printf("Enter a positive value.\n");
        scanf("%f",&num3);
      }
    printf("The result is:    %.2f\n",sqrt(num3));
    array[k]=sqrt(num3);
    k++;
    break;

    case 'L':
    case 'l':
    printf("Enter a positive value.\n");
      scanf("%f",&num4);
      while(num3<0) {
        printf("Enter a positive value.\n");
        scanf("%f",&num3);
      }
    printf("The result is:    %.2f\n",log10(num4));
    array[k]=log10(num4);
    k++;
    break;

    case 'E':
    case 'e':
    printf("Enter a positive value.\n");
      scanf("%f",&num5);
      while(num5<0) {
        printf("Enter a positive value.\n");
        scanf("%f",&num5);
      }
    printf("The result is:    %.2f\n",exp(num5));
    array[k]=exp(num5);
    k++;
    break;

    case 'C':
    case 'c':
    printf("Enter a positive value.\n");
      scanf("%f",&num6);
      while(num6<0) {
        printf("Enter a positive value.\n");
        scanf("%f",&num6);
      }
    printf("The result is:    %.2f\n",ceil(num6));
    array[k]=ceil(num6);
    k++;
    break;

    case 'F':
    case 'f':
    printf("Enter a positive value.\n");
    scanf("%f",&num7);
      while(num7<0) {
        printf("Enter a positive value.\n");
        scanf("%f",&num7);
      }
    printf("The result is:    %.2f\n",floor(num7));
    array[k]=floor(num7);
    k++;
    break;

    default:
    printf("Invalid input.\n");
    break;

    }
    main();
}
void variableoperations() {
  printf("Please enter the name of the variable ( A single character between 'a' to 'e' ):\n");
  scanf("%s",&option4);
  if(option4 == 'a' || option4 == 'b' || option4 == 'c'  || option4 == 'd' || option4 == 'e'){
      printf("Please enter a value to assign to the variable:\n");
      scanf("%f",&num8);
      printf("Variable %c is set to:    %.2f\n",option4,num8);
      printf("Please enter the name of the variable ( A single character between 'a' to 'e' ):\n");
      scanf("%s",&option12);
      printf("Please enter a value to assign to the variable:\n");
      scanf("%f",&num14);
      printf("Variable %c is set to:   %.2f\n",option12,num14);
      printf("Please select your option ( B (Binary operation), U (Unary operation) , A (Advanced), V (Variables), X (Exit))\n");
      scanf("%s",&option6);
      if (option6=='A' || option6=='a') {
        advancedoperations();
         
      }
  else {printf("Invalid. Please enter again.\n");}
  } else {printf("Invalid. Please enter again.\n");}
}
void memoryoperation() {
  for (int j=0; j<k; j++) {
    if (array[j]>0) {counter++;}
  }
  if (counter!=0) {
  printf("The number of items stored in the memory are: %d\n\n",counter);
  while (number!='X') {
  printf("1) Enter any item in range of 1 to the number of items, and see its corresponded value\n");
  printf("2) Enter to see another item in the memory\n");
  printf("0) Enter to view the whole list\n");
  printf("X) Enter to return to the main menu\n");
  scanf("%s",&number);
  if (number=='0') { for (int m=1; m<k; m++) {
    printf("The values stored in the memory are: %.2f\n",array[m]);
  }
  }
  else if (number=='1') {
    printf("Enter the index number in range of 1 to the number of items to obtain its corresponding value\n");
    scanf("%d",&number3);
    printf("The corresponding value is: %.2f\n",array[number3]);}
  else if (number=='2') {
    printf("Enter the index number in range of 1 to the number of items to obtain its corresponding value\n");
    scanf("%d",&number3);
    printf("The corresponding value is: %.2f\n",array[number3]);}
  else if(number=='X') {main();
    }
  }
  }
  else {printf("Invalid\n");
  main();
  }
}
void removememoryoperation() {
  for (int n=0; n<k; n++) {
    array[n]=0;
  }
  printf("The memory is cleared.\n");
  main();
}
void advancedoperations() {
  printf("Select one of the following items:\n");
      printf("B) - Binary Mathematical Operations, such as addition and subtraction.\n");
      printf("U) - Unary Mathematical Operations, such as square root, and log.\n");
      printf("X) - Exit and back to the main menu\n");
      scanf("%s",&option5);
      if (option5=='B' || option5=='b') {
        printf("Please enter the first number or a variable name ('a' to 'e'):\n");
        if (scanf("%f",&num9)) {
          printf("Please enter the operation ( + , - , * , / , %% , ^ (for power) ):\n");
          scanf("%s",&option8);
          printf("Please enter the second number\n");

          switch (option8) {
          case '+':
          if (scanf("%f",&num11)) {
          printf("The result is:    %.2f\n",num9+num11);
          array[k]=num9+num11;
          k++;}
          else {scanf("%c",&option13);
          num15=num14;
          printf("The result is:    %.2f\n",num9+num15);
          array[k]=num9+num15;
          k++;}
          break;

          case '-':
          if (scanf("%f",&num11)) {
          printf("The result is:    %.2f\n",num9-num11);
          array[k]=num9-num11;
          k++;}
          else {scanf("%c",&option13);
          num15=num14;
          printf("The result is:   %.2f\n",num9-num15);
          array[k]=num9-num15;
          k++;}
          break;

          case '*':
          if (scanf("%f",&num11)) {
          printf("The result is:    %.2f\n",num9*num11);
          array[k]=num9*num11;
          k++;}
          else {scanf("%c",&option13);
          num15=num14;
          printf("The result is:   %.2f\n",num9*num15);
          array[k]=num9*num15;
          k++;}
          break;

          case '/':
          if (scanf("%f",&num11)) {while (num11==0) {
            printf("Denominator can't be zero.\n");
            scanf("%f",&num11);
          }
          printf("The result is:    %.2f",num9/num11);
          array[k]=num9/num11;
          k++;}
          else {scanf("%c",&option13);
          num15=num14;
          while(num15==0) {
            printf("Denominator can't be zero\n");
            scanf("%f",&num15);
          }
          printf("The result is:   %.2f\n",num9/num15);
          array[k]=num9/num15;
          k++;}
          break;

          case '%':
          if (scanf("%f",&num11)) {result5=((int)num9%(int)num11);
          printf("The result is:    %.2f\n",result5);
          array[k]=result5;
          k++;}
          else {
            scanf("%c",&option13);
            num15=num14;
            result5=((int)num9%(int)num15);
            printf("The result is:   %.2f\n",result5);
            array[k]=result5;
            k++;
          }
          break;

          case '^':
          if (scanf("%f",&num11)) {result8=pow(num9,num11);
          printf("The result is:    %.2f\n",result8);
          array[k]=result8;
          k++;}
          else {scanf("%c",&option13);
          num15=num14;
          result8=pow(num9,num15);
          printf("The result is:   %.2f\n",result8);
          array[k]=result8;
          k++;}
          break;

          default:
          printf("Invalid input.\n");
          break;
          
          }}
        else {
          scanf("%c",&option7);
          num10=num8;
          printf("Please enter the operation ( + , - , * , / ,  %% , ^ (for power) ):\n");
          scanf("%s",&option8);
          printf("Please enter the second number\n");

          switch (option8) {
          case '+':
          if (scanf("%f",&num11)) {
          printf("The result is:    %.2f\n",num10+num11);
          array[k]=num10+num11;
          k++;}
          else {scanf("%c",&option13);
          num15=num14;
          printf("The result is:    %.2f\n",num10+num15);
          array[k]=num10+num15;
          k++;
          }
          break;

          case '-':
          if (scanf("%f",&num11)) {
          printf("The result is:    %.2f\n",num10-num11);
          array[k]=num10-num11;
          k++;}
          else {scanf("%c",&option13);
          num15=num14;
          printf("The result is:    %.2f\n",num10-num15);
          array[k]=num10-num15;
          k++;
          }
          break;

          case '*':
          if (scanf("%f",&num11)) {
          printf("The result is:    %.2f\n",num10*num11);
          array[k]=num10*num11;
          k++;}
          else {scanf("%c",&option13);
          num15=num14;
          printf("The result is:    %.2f\n",num10*num15);
          array[k]=num10*num15;
          k++;
          }
          break;

          case '/':
          if (scanf("%f",&num11)) {
          while (num11==0) {
            printf("Denominator can't be zero.\n");
            scanf("%f",&num11);
          }
          printf("The result is:    %.2f\n",num10/num11);
          array[k]=num10/num11;
          k++;}
          else {scanf("%c",&option13);
          num15=num14;
          while (num15==0) {
            printf("Denominator can't be zero.\n");
            scanf("%f",&num15);}
          printf("The result is:    %.2f\n",num10/num15);
          array[k]=num10/num15;
          k++;}
          break;

          case '%':
          if (scanf("%f",&num11)) {
          result9=((int)num10%(int)num11);
          printf("The result is:    %.2f\n",result9);
          array[k]=result9;
          k++;}
          else {scanf("%c",&option13);
          num15=num14;
          result9=((int)num10%(int)num15);
          printf("The result is:    %.2f\n",result9);
          array[k]=result9;
          k++;
          }
          break;

          case '^':
          if (scanf("%f",&num11)) {
          result10=pow(num10,num11);
          printf("The result is:    %.2f\n",result10);array[k]=result10;
          k++;}
          else {scanf("%c",&option13);
          num15=num14;
          result10=pow(num10,num15);
          printf("The result is:    %.2f\n",result10);
          array[k]=result10;
          k++;}
          break;

          default:
          printf("Invalid input.\n");
          break;

        }
      }
      }
      else if (option5=='U' || option5=='u') {
        printf("Please enter the operation ( S (for square root) , L (for logarithm) , E (for exponential) , C (for ceil) , F (for floor) ):\n");
        scanf("%s",&option9);
        switch(option9) {
        case 'S':
        case 's':
          printf("Enter a positive value.\n");
          if (scanf("%f",&num12)) {
          while(num12<0) {
            printf("Enter a positive value.\n");
            scanf("%f",&num12);
          }
          printf("The result is:    %.2f\n",sqrt(num12));
          array[k]=sqrt(num12);
          k++;
          }
          else {
              num13=num8;
              printf("The result is:    %.2f\n",sqrt(num13));
              array[k]=sqrt(num13);
              k++;
              }
          break;

        case 'L':
        case 'l':
        printf("Enter a positive value.\n");
        if (scanf("%f",&num12)) {
          while(num12<0) {
            printf("Enter a positive value.\n");
            scanf("%f",&num12);
          }
          printf("The result is:    %.2f\n",log10(num12));
          array[k]=log10(num12);
          k++;
          }
          else {
            num13=num8;
            printf("The result is:    %.2f\n",log10(num13));
            array[k]=log10(num13);
            k++;
          }
        break;

        case 'E':
        case 'e':
        printf("Enter a positive value.\n");
        if (scanf("%f",&num12)) {
          while(num12<0) {
            printf("Enter a positive value.\n");
            scanf("%f",&num12);
          }
          printf("The result is:    %.2f\n",exp(num12));
          array[k]=exp(num12);
          k++;
          }
          else {
            scanf("%c",&option10);
            num13=num8;
            printf("The result is:    %.2f\n",exp(num13));
            array[k]=exp(num13);
            k++;
          }
        break;

        case 'C':
        case 'c':
        printf("Enter a positive value.\n");
        if (scanf("%f",&num12)) {
          while(num12<0) {
            printf("Enter a positive value.\n");
            scanf("%f",&num12);
          }
          printf("The result is:    %.2f\n",ceil(num12));
          array[k]=ceil(num12);
          k++;
          }
          else {
            scanf("%c",&option10);
            num13=num8;
            printf("The result is:    %.2f\n",ceil(num13));
            array[k]=ceil(num13);
            k++;
          }
        break;

        case 'F':
        case 'f':
        printf("Enter a positive value.\n");
        if (scanf("%f",&num12)) {
          while(num12<0) {
            printf("Enter a positive value.\n");
            scanf("%f",&num12);
          }
          printf("The result is:    %.2f\n",floor(num12));
          array[k]=floor(num12);
          k++;
          }
          else {
            scanf("%c",&option10);
            num13=num8;
            printf("The result is:    %.2f\n",floor(num13));
            array[k]=floor(num13);
            k++; 
          }
        break;

        default:
        printf("Invalid input.\n");
        break;

    }

        
      }
      else if(option5=='X' || option5=='x') {
        printf("Please select your option ( B (Binary operation), U (Unary operation) , A (Advanced), V (Variables), X (Exit))\n");
        scanf("%s",&option11);
        if (option11=='x' || option11=='X') {
          printf("Thanks for using my Simple Calculator. Hope to see you soon again, Goodbye!");}
      }
      else {printf("Invalid. Please enter again.\n");}
      main();
}
void exitprogram() {
    printf("Thanks for using my Simple Calculator. Hope to see you soon again, Goodbye!\n");
}