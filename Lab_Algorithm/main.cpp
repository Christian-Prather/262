#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;
void printColumns(vector <int> &left, vector<int> &right)
{
    for (int i = 0; i < left.size(); i++)
    {
        cout << setw(5) << left[i] << setw(5) << right[i] << endl;
    }
}
int sumVector(vector<int> &column)
{
    int result = 0;
    for (int value: column)
    {
        result += value;
    }
    return  result;
}

int multiply (int a, int b)
{
    int leftValue;
    int rightValue;
    vector<int> leftColumn;
    vector<int> rightColumn;
    vector<int> throwoutIndex;
    if (a < b) {
        leftValue = a;
        rightValue = b;
    } else {
        leftValue = b;
        rightValue = a;
    }
    leftColumn.push_back(leftValue);
    rightColumn.push_back(rightValue);
    int integer = 0;
    int multiplier = 0;
    int position = 1; // Skip the first element

   while (integer != 1)
    {
        integer = leftValue / 2;
        leftColumn.push_back(integer);
        leftValue = integer;
        if (!(integer % 2))
        {
            throwoutIndex.push_back(position);
        }
        position++;
    }


    for (int i = 0; i < leftColumn.size() -1; i++)
    {
        multiplier = rightValue * 2;
        rightColumn.push_back(multiplier);
        rightValue = multiplier;
    }
    printColumns(leftColumn, rightColumn);
    for (int index : throwoutIndex)
    {
        rightColumn.at(index) = 0; // Set to zero rather than remove for simplicity

    }
    return sumVector(rightColumn);


}
int main()
{
    int x ,y;
    cout << "Please enter two values to multiply (5 10)" << endl;
    cin >> x >> y;
    int result = multiply(x,y);
    cout << "Answer: " << result;

    return 0;
}