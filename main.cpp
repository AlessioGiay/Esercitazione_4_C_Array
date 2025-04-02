#include <iostream>
#include "Utils.hpp"

using namespace std;

int main()
{
	string input = "data.txt";
	string output = "result.txt";
    size_t n;
    double *ptr1 = nullptr;
    double *ptr2 = nullptr;
    unsigned int S = 0;
    double V = 0;

    if(!ImportVectors(input, n, ptr1, ptr2, S))
		return 1;
		
	double R = DotProduct(n, ptr1, ptr2, S, V);

    if(!ExportResult(output, n, ptr1, ptr2, S, R, V))
		return 1;
	
    return 0;
}

