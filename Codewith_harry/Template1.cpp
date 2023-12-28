//WITHOUT TEMPLETE

// #include<iostream>
// using namespace std;

// class vector
// {
//     public:
//         int *arry;
//         int size;
//         vector(int n)
//         {
//             size = n;
//             arry = new int [size];
//         }
//         int dotProduct(vector &v)
//         {
//             int d=0;
//             for(int i=0; i<size; i++)
//             {
//                 d += this->arry[i] * v.arry[i];
//             }

//             return d;
//         }
// };

// int main()
// {
//     vector v1(3);
//     v1.arry[0]=5;
//     v1.arry[1]=3;
//     v1.arry[2]=5;

//     vector v2(3);
//     v2.arry[0]=2;
//     v2.arry[1]=3;
//     v2.arry[2]=3;

//     int res = v1.dotProduct(v2);
//     cout<<res<<endl;
//     return 0;
// }

//WITH TEMPLETE

#include<iostream>
using namespace std;

template <class T>
class vector
{
    public:
        T *arry;
        int size;
        vector(int n)
        {
            size = n;
            arry = new T[size];
        }
        T dotProduct(vector &v)
        {
            T d=0;
            for(int i=0; i<size; i++)
            {
                d += this->arry[i] * v.arry[i];
            }

            return d;
        }
};

int main()
{
    vector <float> v1(3);
    v1.arry[0]=1.4;
    v1.arry[1]=3.3;
    v1.arry[2]=0.1;

    vector <float> v2(3);
    v2.arry[0]=0.1;
    v2.arry[1]=1.90;
    v2.arry[2]=4.1;

    float res = v1.dotProduct(v2);
    cout<<res<<endl;
    return 0;
}



