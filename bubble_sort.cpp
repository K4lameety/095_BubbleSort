/** Library */
#include  <iostream>
#include  <string>
using  namespace std;

/** Declaration */
int arr[20];
int n;

/** Input Procedur */
void input()
{
    int d;
    while (true)
    {
        cout <<  "Masukkan banyaknya elemen pada array : ";
        cin >> n;                                               // Input pengguna
        if (n <= 20)
            break;
        else
        {
            cout << "\nArray dapat mempunyai maksimal 20 elemen.\n";
        }
    }

    cout << endl;
    cout << "======================" << endl;
    cout << "Masukkan Elemen Array"  << endl;
    cout << "======================" << endl;

    for (int i = 0; i < n; i++)
    {
        cout << "Data ke-" << (i + 1) << ": ";
        cin >> arr[i];                                          // Input pengguna
    }
}

/** BubbleSort Procedur */
void bubbleSortArray()
{
    int pass = 1;

    do 
    {
        for (int j = 0; j <= n - 1 - pass; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp;
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
        pass += 1;

        cout << "\nPass " << pass - 1 << ": ";
        for (int k = 0; k < n; k++)
        {
            cout << arr[k] << " ";
        }
        cout << endl;
    } while (pass <= n - 1);
}

/** Display Procedur */
void display()
{
    cout << endl;
    cout << "====================" << endl;
    cout << "Elemen aray yang telah tersusun" << endl;
    cout << "====================" << endl;
    cout << endl;
    for (int j = 0; j < n; j++)
    {
        cout << arr[j];
        if (j < n - 1)
        {
            cout << " --> ";
        }
    }
    cout << endl;
    cout << endl;

    cout << "Jumlah pass = " << n - 1 << endl;
    cout << endl;
    cout << endl;
}

/** Main Program */
int main(){
    input();

    bubbleSortArray();
    display();
}