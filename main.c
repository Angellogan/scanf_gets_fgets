<<<<<<< HEAD
#include <stdio.h>
#include <stdlib.h>
=======

#include <stdio.h>
#include <limits.h>
>>>>>>> 94105d3737b0ba212d811d172dfeb8668e9085e8

int main()
{

<<<<<<< HEAD
    FILE *fp;

    fp = fopen("..//datapath.txt","w+");

    if(fp==NULL)
    {

        ferror("File opening error\n");


    }

    else
    {

        fprintf(fp,"%s","practing c projects");
        fprintf(fp,"%s"," and cmake gdb\n");

    }

    fclose(fp);

    /*scanf for reading foormatted input

      cons: scanf doesnt check for the incoming input size therefore highly prone
            to buffer overflow

        */

//      char name[20];
//      int age;
      char str1[20];

//      printf("Enter the name and age\n");
//      scanf("%[^\n]s",name);
//      getchar();
//      scanf("%d",&age);

//      printf("name = %s, age =%d",name,age);


      /*gets    --- gets(str)
       *
       * doesnt check for the input size and the buffer
       * prone to buffer overflow
       *
*/

//      printf("Enter the vorname und Nachname\n");
//      gets(str1);
//      puts(str1);


      /*
      Prototype: ssize_t getline(char **lineptr, size_t *n, FILE *stream);


  */
      char *ptr_block = (char *)malloc(20*sizeof (char));
      char *b = ptr_block;
      size_t size_block = 20;
      size_t characters;


//      printf("ENTER THE STRING FOR GETLINE \n");
//      characters = getline(&ptr_block,&size_block,stdin);
//      printf("no of characters read : %zu\n",characters);

//      puts(ptr_block);


      /*
      Prototype: ssize_t getdelim(char **lineptr, size_t *n, int delim,FILE *stream);

  */

//      printf("Enter data to store via getdelim\n");
//      getdelim(&ptr_block,&size_block,'\n',stdin);
//      puts(ptr_block);


      /* getchar putchar getc putc getch putch getche*/

    /* GETCHAR READS ONE CHARACTER AT A TIME from stdin*/

//      char ch;

//      printf("Enter the string for getchar\n");



//      char str2[20];
//      int i=0;

//      while((ch=getchar()) !='\n' && ch!=EOF)
//      {

//        str2[i]=ch;
//        i++;


//      }
//        str2[i]='\0';
//      puts(str2);


    /*getc similar to getchar but reads from specified stream

      int getc(FILE *stream);
    */
      char ch2;
      char str3[50];
    int j =0;

    printf("Enter the string for getc \n");

    fp = fopen("..//datapath.txt","r");

    if(fp==NULL)
    {

        ferror("File opening error\n");


    }

    else
    {
        while((ch2 = getc(fp)) !='\n' && ch2!=EOF)
          {

            str3[j]=ch2;
            j++;


          }
            str3[j]='\0';
            puts(str3);

    }


//   while((ch2 = getc(stdin)) !='\n' && ch2!=EOF)

//      {

//        str3[j]=ch2;
//        j++;


//      }
//        str3[j]='\0';
//        puts(str3);
=======

//    printf("This string contains backslash \\, %% and double quotes \"\n\n\n");

//    /* FORMAT ------  % flags width .precision length specifier*/
//   unsigned int length = 128;

//   printf("%b\n",length);



//    printf("%u\n", length);
//     printf("%d\n", length);

//     printf("%x\n", length);
//      printf("%#x\n", length);

//       printf("%o\n", length);
//       printf("%#o\n", length);

//        printf("%X\n", length);
//        printf("%#X\n\n\n", length);

//        printf("*********----LENGTH ----******\n\n");

//          printf("%hu\n", length);
//           printf("%hd\n", length);
//            printf("%hhu\n", length);
//             printf("%hhd\n", length);


//            printf("%a\n", (double)length);//hexadecimal floating point smallcase
//             printf("%A\n",(double)length);


//              printf("%f\n", (float)length);






//   /* Flags Width .Precision Length specifier */


//       /*  1. Flags*/



//            printf("\n\n\n");

//       int num2 = 14;
//      printf("% d\n\n\n",num2);//space
//      printf("%-d\n\n\n",num2);//left justify
//      printf("%+d\n\n\n",num2);//force + on the front ---> +10004
//      printf("%#o\n\n\n",num2);
//      printf("%#x\n\n\n",num2);//# used with o or x adds o or 0x in front of the number

//      printf("%#X\n\n\n",num2);
//      printf("%010d\n\n\n",num2);//pad 0s instead of space in the width



      /*Play with + signs*/

//    printf("%+5d \n",0);//___+7
//    printf("%+05d \n",0);//00007
//    printf("%+5d \n",-7);//___-7
//    printf("%+05d \n",-7);//-0007
//    printf("%+05d \n",1234526);//+1234526
//    printf("%+05d \n",-2035065302);//-2035065302


//     /*Left Justify*/

//     printf("%+-5d \n",0);//+0___
//      printf("%+-5d \n",-7);//-7___
//       printf("%+-5d \n",1234526);//+1234526
//        printf("%+5d \n",-2035065302);//-2035065302



//        printf("% -5d \n", 123455);//_123455


        /* Plus Space and zero*/





      /* 2. Width*/




//      char *str1= "Sunflower";

//      printf("%20s\n\n",str1);
//       printf("%020d\n\n",num2);//precede with 0s

//      printf("%*s\n\n",15,str1);



//      /* 3. Precision*/

//      printf("%.20s\n\n",str1);

//      printf("%.*s\n\n",3,str1);

//      int *ptr;

//      int n;

//      printf("Printing the num of char so far written %n : ",&n);
//      printf("%d",n);

//      printf("\n\n");

//        printf("%p",ptr);

//           printf("\n\n");









 /*Scanf in detail

    [*][width][length]specifier

    * - read but discards the input
    width - max number of input to read from stream


*/

//        int a,b,d;
//        printf("Enter the values of a and b\n");
//        scanf("%d%d", &a,&b);

//        getchar();//consume \n from the stream

//        char str1[10];
//        char str2 [10];
//        char str3 [10];
//         char str4 [10];
         int age;

        char c;

//        printf("%d",scanf("%[JASON]s",str1));
//        printf("%s\n",str1);

//        while ((c = getchar()) != '\n' && c != EOF);

//        printf("%d",scanf("%[A-z]s",str2));
//        printf("%s\n",str2);

//        while ((c = getchar()) != '\n' && c != EOF);

//        printf("%d",scanf("%[0-9]s",str3));
//        printf("%s\n",str3);

//        while ((c = getchar()) != '\n' && c != EOF);

//        printf("%d",scanf("%[^o]s",str4));
//        printf("%s\n",str4);

        char name[20];
        char name2[10];

        printf("Enter the Name:\n");
        scanf("%19[ A-Za-z0-9]s",name);// allow spaces in scanf

        printf("\n The name entzered is %s : \n",name);

        while ((c = getchar()) != '\n' && c != EOF);
        printf("Enter the Name 2:\n");
        scanf("%9[^\n]s",name2);// until enter is pressed


        printf("\n The name entzered is %s : \n",name2);












>>>>>>> 94105d3737b0ba212d811d172dfeb8668e9085e8



    return 0;
}
