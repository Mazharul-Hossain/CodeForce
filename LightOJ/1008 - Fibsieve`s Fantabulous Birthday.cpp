#include <iostream>
#include <cmath>
using namespace std;

typedef unsigned long long int longint;

int main (void)
{
    int total_case_count, index_x, index_y;
    longint s_time, index, index_middle, square_big, square_small;

    // freopen("in.txt", "r", stdin);

    cin >> total_case_count;

    for(int case_count = 1; case_count <= total_case_count; case_count++)
    {
        cin >> s_time;

        index = sqrt((double)s_time);

        if((index * index) == s_time)
        {
            if(index % 2)
            {
                index_x = 1;
                index_y = index;
            }
            else
            {
                index_x = index;
                index_y = 1;
            }
        }
        else
        {
            square_big = (index + 1) * (index + 1);
            square_small = index * index;

            index_middle = (square_small + square_big + 1) / 2;

            if(square_big % 2)
            {
                if(s_time >= index_middle)
                {
                    index_x = square_big - s_time + 1;
                    index_y = index + 1;
                }
                else
                {
                    index_x = index + 1;
                    index_y = s_time - square_small;
                }
            }
            else
            {
                if(s_time >= index_middle)
                {
                    index_x = index + 1;
                    index_y = square_big - s_time + 1;
                }
                else
                {
                    index_x = s_time - square_small;
                    index_y = index + 1;
                }
            }
        }
        cout << "Case " << case_count << ": " << index_x << " " << index_y << endl;
    }
    return 0;
}
