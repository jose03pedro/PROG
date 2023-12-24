#include "Operation.h"

class Sum : public Operation {
   public:
    Sum(int op1, int op2) : Operation(op1, op2){};
    int operation() const override { return get_op1() + get_op2(); }
};

class Power : public Operation {
   public:
    Power(int op1, int op2) : Operation(op1, op2){};
    int operation() const override {
        int result = 1;
        for (int i = 0; i < get_op2(); ++i) {
            result *= get_op1();
        }
        return result;
    }
};