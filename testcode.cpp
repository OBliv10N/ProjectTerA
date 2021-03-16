#include <iostream>
using namespace std;

const int nfieldwidth = 10;
const int nfieldheight = 20;

int field[nfieldheight][nfieldwidth] = {0};

int main()
{   int point = 0;   
    int k = nfieldheight-1;
        for (int i = nfieldheight-1 ; i > 0; i--)
        {
            int count = 0;
            for (int j = 0; j < nfieldheight; j++)
            {
                if(field[i][j]) count ++;
                field[k][j] = field[i][j];
            }
            if(count < nfieldheight) k--;             //ลบ Array เหมือนเรื่อง pointer
        }
    if(k==0) point = point + 5;  //ถ้าทำลาย 1 แถว คะแนนเพิ่ม  5

    cout << k << endl ;
    cout << point;

}