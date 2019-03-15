/*
Patlu and Motu works in a building construction, they have to put some number of bricks N from one place to another, and started doing their work. They decided , they end up with a fun challenge who will put the last brick.

They to follow a simple rule, In the i'th round, Patlu puts i bricks whereas Motu puts ix2 bricks.

There are only N bricks, you need to help find the challenge result to find who put the last brick.

Input:

First line contains an integer N.

Output:

Output "Patlu" (without the quotes) if Patlu puts the last bricks ,"Motu"(without the quotes) otherwise.

Constraints:

1 ≤ N ≤ 10000

SAMPLE INPUT 
13
SAMPLE OUTPUT 
Motu
Explanation
Sample Explanation:

13 bricks are there :

Patlu Motu

1 2

2 4

3 1 ( Only 1 remains)

Hence, Motu puts the last one.
*/

#include<iostream>

using namespace std;

int  main()
{
    int i = 1, N;
    bool motu = false, patlu = false;

    cin >> N;

    while(true)
    {
        N = N - i;
        motu = false;
        patlu = true;
        if(N <= 0)
            break;
        N = N - i*2;
        patlu = false;
        motu = true;
        if(N <= 0)
            break;
        i++;
    }

    if(motu)
        cout << "Motu" << endl;
    else
        cout << "Patlu" << endl;

    return 0;
}