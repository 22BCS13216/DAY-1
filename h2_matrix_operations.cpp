#include <iostream>
using namespace std;
void add(int A[10][10], int B[10][10], int result[10][10], int m, int n)
{
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            result[i][j] = A[i][j] + B[i][j];
        }
    }
}

void multiply(int A[10][10], int B[10][10], int result[10][10], int m, int n, int p)
{
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < p; j++)
        {
            result[i][j] = 0;
            for (int k = 0; k < n; k++)
            {
                result[i][j] += A[i][k] * B[k][j];
            }
        }
    }
}

int main()
{
    int A[10][10], B[10][10], result[10][10];
    int m, n, p, q, oper;
    cout << "Enter the number of rows for Matrix A: ";
    cin >> m;
    cout << "Enter the number of columns for Matrix A: ";
    cin >> n;
    cout << "Enter elements for Matrix A:\n";
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> A[i][j];
        }
    }
    cout << "Enter the number of rows for Matrix B: ";
    cin >> p;
    cout << "Enter the number of columns for Matrix B: ";
    cin >> q;
    cout << "Enter elements for Matrix B:\n";
    for (int i = 0; i < p; i++)
    {
        for (int j = 0; j < q; j++)
        {
            cin >> B[i][j];
        }
    }
    cout << "Enter operation type \n1. Addition \n2. Multiplication: " << endl;
    cin >> oper;
    if (oper == 1)
    {
        if (m == p && n == q)
        {
            add(A, B, result, m, n);
            cout << "Matrix Addition Result:\n";
            for (int i = 0; i < m; i++)
            {
                for (int j = 0; j < n; j++)
                {
                    cout << result[i][j] << " ";
                }
                cout << endl;
            }
        }
        else
        {
            cout << "Matrices must have the same dimensions for addition." << endl;
        }
    }
    else if (oper == 2)
    {
        if (n == p)
        {
            multiply(A, B, result, m, n, p);
            cout << "Matrix Multiplication Result:\n";
            for (int i = 0; i < m; i++)
            {
                for (int j = 0; j < q; j++)
                {
                    cout << result[i][j] << " ";
                }
                cout << endl;
            }
        }
        else
        {
            cout << "Number of columns in Matrix A must be equal to the number of rows in Matrix B." << endl;
        }
    }
    else
    {
        cout << "Invalid operation." << endl;
    }
    return 0;
}