#ifndef PRODUCT_H
#define PRODUCT_H

#include <string>
#include <iostream>

using namespace std;

class Product{
public:
        void SetPartA(const string& partA){
                m_partA = partA;
        }
        void SetPartB(const string& partB){
                m_partB = partB;
        }
        void Show(){
                cout << "partA : " << m_partA << endl;
                cout << "partB : " << m_partB << endl;
        }
private:
        string m_partA;
        string m_partB;
};

#endif