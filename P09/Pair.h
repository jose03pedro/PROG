#ifndef _Pair_h_
#define _Pair_h_
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

template <typename T1, typename T2>
class Pair {
   public:
    Pair(T1 first, T2 second);
    T1 get_first() const;
    T2 get_second() const;
    void show() const;

   private:
    T1 first_;
    T2 second_;
};

template <typename T1, typename T2>
Pair<T1, T2>::Pair(T1 first, T2 second) : first_(first), second_(second) {}
template <typename T1, typename T2>
T1 Pair<T1, T2>::get_first() const {
    return first_;
}
template <typename T1, typename T2>
T2 Pair<T1, T2>::get_second() const {
    return second_;
}
template <typename T1, typename T2>
void Pair<T1, T2>::show() const {
    std::cout << '{' << first_ << ',' << second_ << '}';
}

void veracidade(int index, std::vector<Pair<std::string, int>>& vetor) {
    sort(vetor.begin(), vetor.end(),
         [index](Pair<std::string, int> par_A,
                 Pair<std::string, int> par_B) -> bool {
             if (index == 0) return par_A.get_first() < par_B.get_first();
             return par_A.get_second() < par_B.get_second();
         });
}

void sort_by_first(std::vector<Pair<std::string, int>>& vetor) {
    veracidade(0, vetor);
}

void sort_by_second(std::vector<Pair<std::string, int>>& vetor) {
    veracidade(1, vetor);
}

void show(std::vector<Pair<std::string, int>> vetor) {
    std::cout << '{';
    for (Pair<std::string, int> par : vetor) par.show();
    std::cout << '}';
}

int main() { return 0; }

#endif