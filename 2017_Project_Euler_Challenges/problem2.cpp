//Each new term in the Fibonacci sequence is generated by adding the previous two terms. By starting with 1 and 2, the first 10 terms will be:
//1, 2, 3, 5, 8, 13, 21, 34, 55, 89, ...
//By considering the terms in the Fibonacci sequence whose values do not exceed four million, find the sum of the even-valued terms.

#include <iostream>
#include <vector>
#include <locale.h>
#include <windows.h>

using namespace std;

void EnviarVetorTela(vector<int> v)
{
    for(int i = 0; i < v.size(); i++)

        cout << v[i] << ' ';

}

void Fibonacci_untiln(vector<int> & v, int n)
{

    int x(0), y(1),temp(0);
    v.resize(0);
//    v.push_back(temp);
    while(temp < n)
    {

        temp = x + y;
        v.push_back(temp);
        x = y;
        y = temp;
    }
    if(v[v.size()-1] > n) v.pop_back();
}

int EvenValuesVector(vector<int> v)
{
    int soma = 0;
    for(int i = 0; i < v.size(); i++)
    {
        if(v[i]%2 == 0) soma += v[i];
    }
    return soma;
}

int main()
{
    setlocale(LC_ALL, "Portuguese");
    vector<int> v;
    cout << "A sequ�ncia de Fibonacci at� 4 milh�es ser� de: \n";
    Fibonacci_untiln(v,4000000);
    EnviarVetorTela(v); cout << endl << endl;
    cout << "A soma dos valores pares desta sequ�ncia ser� de:\n";
    cout << EvenValuesVector(v) << endl << endl;
    system("pause");
}

