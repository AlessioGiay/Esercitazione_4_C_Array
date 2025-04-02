#pragma once

#include <iostream>
#include <string>

bool ImportVectors(const std::string& inputFilePath,
                   size_t& n,
                   double*& w,
                   double*& r,
                   unsigned int &S);
                   
double DotProduct(const size_t& n,
                        const double* const& w,
                        const double* const& r,
                        const unsigned int &S,
                        double &V);

bool ExportResult(const std::string& outputFilePath,
                  const size_t& n,
                  const double* const& w,
                  const double* const& r,
                  const unsigned int &S,
                  const double &R,
                  const double &V);