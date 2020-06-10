#include <stdio.h>
#include <string.h>

#define MAX 256

  int main()
  {
        int lno, ctr = 0;
        char ch;
        FILE *fptr1, *fptr2;
		char fname[MAX];
        char str[MAX], temp[] = "temp.txt";
        fptr1 = fopen("detail.txt", "r");
        if (!fptr1)
		{
                printf(" File not found or unable to open the input file!!\n");
                return 0;
        }
        fptr2 = fopen(temp, "w"); // open the temporary file in write mode
        if (!fptr2)
		{
                printf("Unable to open a temporary file to write!!\n");
                fclose(fptr1);
                return 0;
        }
        printf(" Input the line you want to remove : ");
        scanf("%d", &lno);
		lno++;
        // copy all contents to the temporary file except the specific line
        while (!feof(fptr1))
        {
            strcpy(str, "\0");
            fgets(str, MAX, fptr1);
            if (!feof(fptr1))
            {
                ctr++;
                /* skip the line at given line number */
                if (ctr != lno)
                {
                    fprintf(fptr2, "%s", str);
                }
            }
        }
        fclose(fptr1);
        fclose(fptr2);
        remove(fname);  		// remove the original file
        rename(temp, fname); 	// rename the temporary file to original name
/*------ Read the file ----------------*/
   fptr1=fopen(fname,"r");
            ch=fgetc(fptr1);
          printf(" Now the content of the file %s is : \n",fname);
          while(ch!=EOF)
            {
                printf("%c",ch);
                 ch=fgetc(fptr1);
            }
        fclose(fptr1);
/*------- End of reading ---------------*/
        return 0;

  }
