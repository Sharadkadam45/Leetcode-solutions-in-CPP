class Solution {
public:
    string complexNumberMultiply(string num1, string num2) {
        // Parse num1
        int plus1 = num1.find('+');
        int real1 = stoi(num1.substr(0, plus1));
        int imag1 = stoi(num1.substr(plus1 + 1, num1.length() - plus1 - 2)); // Exclude 'i'

        // Parse num2
        int plus2 = num2.find('+');
        int real2 = stoi(num2.substr(0, plus2));
        int imag2 = stoi(num2.substr(plus2 + 1, num2.length() - plus2 - 2)); // Exclude 'i'

        // Multiply complex numbers: (a + bi)(c + di) = (ac - bd) + (ad + bc)i
        int realRes = real1 * real2 - imag1 * imag2;
        int imagRes = real1 * imag2 + imag1 * real2;

        return to_string(realRes) + "+" + to_string(imagRes) + "i";
    }
};
