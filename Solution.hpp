#include <vector>
using namespace std;

class ProductOfNumbers {
private:
    vector<long> productTillNow = {1}; // 🧮 Prefix products starting from 1
    int currentLength = 0;             // 📊 Tracks total numbers added

public:
    ProductOfNumbers() {
        // 🛎️ Constructor sets everything up. All systems go! 🚀
    }
    
    void add(int num) {
        if (num == 0) {
            // 💥 Party crasher detected! Reset everything.
            productTillNow = {1};
            currentLength = 0;
        } else {
            // 🔢 Multiply and store cumulative product
            productTillNow.push_back(productTillNow.back() * num);
            ++currentLength;
        }
    }
    
    int getProduct(int k) {
        if (k > currentLength) {
            // 🚨 Not enough numbers to slice back!
            return 0;
        }
        
        // 🧮 Divide last prefix product by the one k steps back
        int last_k_Product = productTillNow.back() / productTillNow[currentLength - k];
        return last_k_Product;
    }
};