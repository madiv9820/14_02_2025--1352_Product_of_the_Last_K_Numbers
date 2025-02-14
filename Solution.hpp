#include <vector>
using namespace std;

class ProductOfNumbers {
private:
    vector<int> numbers;  // 🗃️ Our secret stash of numbers!

public:
    ProductOfNumbers() {
        // 🛎️ Constructor opens the shop! But nothing inside... yet.
    }
    
    void add(int num) {
        // 📥 Dropping a number into our collection
        numbers.push_back(num);
    }
    
    int getProduct(int k) {
        // 🧮 Let's crunch the numbers for the last k entries!
        int n = numbers.size();
        if (k > n) {
            // 🚫 Oops! Not enough numbers to multiply!
            return 0;
        }

        long product = 1;  // 🛠️ Starting from 1 because math says so!
        for (int i = n - 1; i > n - 1 - k; --i) {
            // ✖️ Multiplying the last k numbers one by one!
            product *= numbers[i];
        }
        
        // 🎉 Voilà! Here’s your product!
        return product;
    }
};