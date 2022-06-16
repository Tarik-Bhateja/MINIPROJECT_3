#include <iostream>
#include <chrono>
using namespace std::chrono;
using namespace std;
int main() {
   
   // initializing the file pointer
	FILE* fptr;
    FILE* ffptr;
	// name of the file as sample.txt
	char ch;
	int result[4];

    const char* Names[]={"p.txt","pp.txt","ppp.txt""pppp.txt"};
	// opening the file in read mode
	for(int i=0;i<4;i++)
	{
		auto start = high_resolution_clock::now();
       fptr = fopen(Names[i], "r");
	ch = fgetc(fptr);
    ffptr = fopen("cpp.txt", "w");
	// converting into upper case
	while (ch != EOF) {

		// converting char to upper case
		ch = toupper(ch);
		//printf("%c", ch);
        //write character into temp file
        putc(ch,ffptr);
		ch = fgetc(fptr);
	}

	// closing the file
	fclose(fptr);
    fclose(ffptr);

   auto stop = high_resolution_clock::now();
   auto duration = duration_cast<seconds>(stop - start);
   result[i]=duration.count();
   //cout<<result[i];
   //cout << "\nTime taken: "<< duration.count() << " seconds";
	}
int i=0;
while(i<4)
{
	cout<<result[i]<<"\t";
	i++;
}
   return 0;
//final array result[i]; 
}