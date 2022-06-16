#include <stdio.h>
#include <ctype.h>
#include <time.h>
#include <unistd.h>          
int main()
{ 
    //file nane
    double time_spent = 0.0;
    int result[4];
    const char* Names[]={"p.txt","pp.txt","ppp.txt","pppp.txt"};
    //file pointers
    FILE *fp,*fp1;
    //to store read character
    char ch;
     for(int i=0;i<4;i++)
	{
		clock_t begin = clock();
    //open file in read mode
    fp=fopen(Names[i],"r");
    if(fp==NULL){
        printf("Error in opening file.\n");
        return -1;
    }
    //create temp file
    fp1=fopen("temp.txt","w");
    if(fp1==NULL){
        printf("Error in creating temp file.\n");
        return -1;
    }   
    //read file from one file and copy
    //into another in uppercase
    while((ch=fgetc(fp))!=EOF){
        if(islower(ch)){
            ch=ch-32;
        }
        //write character into temp file
        putc(ch,fp1);                   
    }
    fclose(fp);
    fclose(fp1);
    //rename temp file to sample.txt
    rename("temp.txt","clanguage.txt");
    //remove temp file
    remove("temp.txt");
    clock_t end = clock();
 
    // calculate elapsed time by finding difference (end - begin) and
    // dividing the difference by CLOCKS_PER_SEC to convert to seconds
    time_spent += (double)(end - begin) / CLOCKS_PER_SEC;
    result[i]=time_spent;
    }
int i=0;
for(i;i<4;i++)
{
	printf("%d",result[i]);
}
    return 0;

//result is the final array
}