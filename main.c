#include <stdio.h>
#include <stdlib.h>

int main()
{

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



    return 0;
}
