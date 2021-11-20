#pragma once

namespace arr{
    class Array{
    public:
        Array(int n);
        ~Array();
        void add(int num);
        int getSize();
        int getElem(int i);
        void insert(int i, int num);
        int average();
    private:
        int* m_mas;
        int m_n, m_size;

    };
}