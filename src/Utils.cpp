
#include <iostream>
#include <fstream>
#include <sstream>
#include <iomanip>
#include "Utils.hpp"

using namespace std;

bool ImportVectors(const string& inputFilePath,
                   size_t& n,
                   double*& w,
                   double*& r,
                   unsigned int &S)
{
	ifstream input(inputFilePath);
	if(!input)
		return false;
	char c;
	char tmp;
	unsigned int i = 0;
	string line;
	
	getline(input, line);
		stringstream str1(line);
		str1 >> c >> tmp >> S;
	
	getline(input, line);
		stringstream str2(line);
		str2 >> c >> tmp >> n;
	
	w = new double [n];
	r = new double [n];
	
	getline(input, line);
	
	while(getline(input, line))
	{
		stringstream str3(line); 
		str3 >> w[i] >> tmp >> r[i];
		i++;
	}
	
    return true;
}

double DotProduct(const size_t& n,
                        const double* const& w,
                        const double* const& r,
                        const unsigned int &S,
                   		double &V)
{
	double result = 0; 
	for(unsigned int i = 0; i < n; i++)
		result += w[i] * r[i];
	V = (1+result) * S;
	return result;
}

bool ExportResult(const string& outputFilePath,
                  const size_t& n,
                  const double* const& w,
                  const double* const& r,
                  const unsigned int &S,
                  const double &R,
                  const double &V)
{
	ofstream output(outputFilePath);
	if(!output)
		return false;
	
	output << "S = " << setprecision(2) << fixed << S << ", n = " << n << endl; 
    output << "w = [ ";
    for (unsigned int i = 0; i < n; i++)
        output<< w[i]<< " ";
    output << "]\n";
    
    output << "r = [ ";
    for (unsigned int i = 0; i < n; i++)
        output<< r[i]<< " ";
    output << "]\n";
    
    output << "Rate of return of the portfolio: " << setprecision(4) << R << endl;
    
    output << "V: "<< setprecision(2) << V << endl;
    
    return true;
					
}