#include <iostream>

int cubed(int n);

int main ()
{
    int maxNum, i, j, sumA, k, l, sumB;

    std::cout << "maxNum: ";
    std::cin >> maxNum;

    for(i=1; i<=maxNum; i++)
    {
        for(j=1; j<=maxNum; j++)
        {
            sumA = cubed(i) + cubed(j);

            for(k=1; k<=maxNum; k++)
            {
                for(l=1; l<=maxNum; l++)
                {
                    sumB = cubed(k) + cubed(l);
                    if( (sumA == sumB) && 
                        (cubed(i) != cubed(j)) &&
                        (cubed(i) != cubed(k)) &&
                        (cubed(i) != cubed(l)) &&
                        (cubed(j) != cubed(k)) &&
                        (cubed(j) != cubed(l))
                        ){

                        std::cout << sumA << std::endl;     
                        std::cout << i << std::endl; 
                        std::cout << j << std::endl; 
                        std::cout << k << std::endl; 
                        std::cout << l << std::endl; 
                        
                        return 0; 
                    }
                }
            } 
        }
    }
    return 0;
}

int cubed(int n)
{
    int cubed = n*n*n;

    return cubed;
} 