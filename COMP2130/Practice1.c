//KAREEM PINGUE 620146393
//Q1
#include <stdio.h>
main()
{
FILE *fpt;
int x;
fpt=fopen("out.txt","w");
for (x=0; x<15; x+=2)
fprintf(fpt,"%2d ",x);
fclose(fpt);
}

//Q1 Output:  0  2  4  6  8 10 12 14
// FILE SIZE 24 BYTES

//Q2
void
save_data(const char * filename, const void * data, size_t count)
{
    FILE *file;

    file = fopen(filename, "wb");
    fwrite(data, 1, count, file);
    fclose(file);
}

void
caller(void)
{
    save_data("file.bin", log, sizeof log);
}

//Q3
#include<iostream>
#include<fstream>
#include<string>

using namespace std;

int main(int argc, char *argv[]){

string fileName = argv[1];

string word;

int count=0;

ifstream inFile;

inFile.open(fileName);

if(!inFile)

{

cout<<"Error! Unable to opne the file. Exting...."<<endl;

return 0;

}

while(inFile>>word)

{

if(word.length()>3 && word.length()<15)

count++;

}

cout<<"The total word counts of all lengths between 3 and 15 bytes are:  "<<count<<endl;

return 1;

}
input.txt file

//Q4
#include <stdio.h>
#include <string.h> // Header to perform string operations

int main()
{
    FILE *fptr; // pointer to open terminal
    char terminal[20], data[100];
    while(1) // Infinite loop till user quits
    {
        printf("Enter the name of terminal(Q to quit): "); // Prompting user for input
        scanf("%s",&terminal); // Reading name of terminal
        // Checking if user wants to send output to stdout
        if(strcmp(terminal,"stdout") == 0)
        {
            printf("Enter Data to be printed on the terminal: "); // Prompting user for data
            scanf("%s",&data); // Reading data
            printf("%s",data); // Writing to stdout
        }
        else if(strcmp(terminal,"Q") != 0) // Checking for Quit
        {
            fptr = fopen(terminal, "w"); // Opening terminal for writing
            if(fptr != NULL) // Checking if terminal is valid
            {
                printf("Enter Data to be printed on the terminal: "); // Prompting user for data
                scanf("%s",&data); // Reading data
                printf("Writing data to %s terminal",terminal); // Writing to terminal
                fputs(data,fptr);
                fclose(fptr); // closing terminal
            }
            else
            {
                printf("This terminal or file doesn't exist"); // Printing error message if terminal doesn't exist
            }
        }
        else
        {
            printf("Exiting Program"); // Break loop when Q is entered
            break;
        }
    }

    return 0;
}