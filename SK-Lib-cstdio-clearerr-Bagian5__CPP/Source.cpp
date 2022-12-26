#pragma warning(disable:4996)

#include <iostream>
#include <cstdio>
#include <conio.h>

/*
    Source by Programiz (https://www.programiz.com)
    Modified For Learn by RK
    I.D.E : VS2022
*/

using namespace std;

int main() {
    int ch;
    FILE* fp;
    fp = fopen("file.txt", "w");

    if (fp) {
        ch = getc(fp);
        if (ferror(fp)) {
            cout << "Error set" << endl;
            clearerr(fp);
        }
    }

    if (!ferror(fp)) {
        cout << "Error reset";
    }
        
    fclose(fp);

    _getch();
    return 0;
}