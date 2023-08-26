#include <iostream>
#include <fstream>
#include <string>

int main(int argc, char** argv) {
    std::string s;
    std::ifstream fin("in.txt");
    std::ofstream fout("out.txt");

    if (!fin.is_open()) {
        std::cout << "File not opened";
        return 1;
    }

    if (!fout.is_open()) {
        std::cout << "File not opened";
        return 2;
    }

    int n = 0;
    int m = 0;

    fin >> n;
    int tmpN = 0;
    fin >> tmpN;
    int* arrN = new int[n];
    for (int i = 0; i < (n - 1); i++) {
        fin >> arrN[i];
    }
    arrN[n - 1] = tmpN;

    fin >> m;
    int* arrM = new int[m];
    for (int i = 1; i < m; i++) {
        fin >> arrM[i];
    }
    fin >> arrM[0];

    fout << m << std::endl;
    for (int i = 0; i < m; i++) {
        fout << arrM[i] << " ";
    }
    fout << std::endl;

    fout << n << std::endl;
    for (int i = 0; i < n; i++) {
        fout << arrN[i] << " ";
    }
    fout << std::endl;

    delete[] arrN;
    delete[] arrM;

    fin.close();
    fout.close();

    return 0;
}