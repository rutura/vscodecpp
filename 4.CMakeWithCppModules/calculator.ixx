module;

export module calculator;

export class Calculator {
    public:
        int add(int a, int b){
            return a + b;
        }
        int subtract(int a, int b){
            return a - b;
        }
        int multiply(int a, int b){
            return a * b;
        }
        int divide(int a, int b){
            return a / b;
        }
};
