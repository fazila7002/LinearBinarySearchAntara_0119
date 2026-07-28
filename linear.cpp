#include <iostream>
using namespace std;

int arr[20];
int n;
int i;


void input() 
{
    while (true)
    {
        cout << "Masukkan banyaknya elemen pada array (maksimal 20):";
        cin >> n;
    }
    if (n > 0 && <= 20)
    {
        break;
    } 
    else{
        cout << "\nMinimum jumlah element adalah 1 dan maksimal element adalah 20\n"<< endl;
    }


    cout << "\n====================\n";
    cout << "Masukkan Element Array\n";
    cout << "\n====================\n";

    for (i= 0; i< n; i++)
    {
        cout << "<" << (i+ 1) << ">";
        cin >> arr [i];
    }
}


void linearSearch(){

    char ch;
    int ctr;
    int item;

    do
    {
        cout << "Masukkan elemen yang idcari : ";\n
        cin >> item;

        ctr = 0;
        i= 0;
    } 
        
    while (i < n)
    {
        ctr++;
        if (arr[i] == item)
        {
            cout <<  "\n"<< item << "ditemukan pada posisi ke- " << (i+1) << endl; 
            break;
        }
        i++;
    }
    
    {
    
    if (i == n)
        {
            cout << "\n"<< item <<" tidak ditemukan di dalam array."<< endl;
        }

        cout << "Jumlah nilai yang dibandingkan = " << ctr << endl;

        cout << "\nLanjut ke pencarian lain? (y/t): ";
        cin >> ch;

    } while (ch == 'y' || ch == 'Y');
}

void display()
{
    cout << "\nElemen array adalah:\n";

    for (i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    cout << endl;
}
