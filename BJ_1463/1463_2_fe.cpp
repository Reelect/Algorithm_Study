#include <iostream>

using namespace std;

int recursion(int input)
{
    int two, three;

    if (input < 2) {
        return 0;
    }

    two = recursion(input / 2) + input % 2 + 1;
    three = recursion(input / 3) + input % 3 + 1;

    return (two < three) ? two : three;
}

int main(void)
{
    int input;

    cin >> input;

    cout << recursion(input);

    return 0;
}