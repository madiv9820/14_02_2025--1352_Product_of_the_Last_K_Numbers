# 🤓 Battle of the Braincells: Brute Force vs. Prefix Sum – Who Will Win the Product of the Last K Numbers Showdown? 💥🤣

- ### Approach 1:- Brute Force
    ### 💡 Intuition (Aha Moment!)
    Imagine a conveyor belt 🎢 dropping numbers into a box. We want to quickly multiply the last K items without unpacking everything each time. But if a zero sneaks in (like an uninvited guest at a party 🎉), the whole product crashes! So, we need a smarter way to keep track of our products.

    ### 🧠 Approach (What’s the Game Plan?)
    1. **Add Numbers:** Every time a number joins the party 🎉, we save it in our list.
    2. **Handle Zeroes:** If a zero appears (the party crasher 🥲), we prepare for a reset.
    3. **Calculate Product:** To get the product of the last K numbers, we multiply them one by one (old-school style 🧮) since we don’t store prefix products.

    ### 🕒 Time Complexity (How Fast Is It?)
    - **Adding a Number:** **$O(1)$** ⚡ (Just a quick push!)
    - **Getting Product:** **$O(k)$** 🐢 (Counting from the end—slower but steady!)

    ### 💾 Space Complexity (How Much Memory?)
    - **$O(N)$** 📂 (We store all numbers—like a messy closet 🧹)

    ### 🚨 Fun Note:
    - Zeroes are the ultimate party crashers! 😤 They force a full reset.
    - Without cumulative products, we multiply manually. It's the gym workout of coding! 💪📊

    ### 💻💥 Code Implementation 
    - **🐍 Python Code 🐍**
        ```python3 []
        class ProductOfNumbers:
            def __init__(self):
                # 🚀 Launching with an empty list to store numbers. Ready for takeoff!
                self.__numbers = []

            def add(self, num: int) -> None:
                # 📝 Adding a number to our VIP guest list (aka the number stream)
                self.__numbers.append(num)

            def getProduct(self, k: int) -> int:
                # 🧮 Let's calculate the product of the last k numbers!
                if k > len(self.__numbers): 
                    # 🚫 Not enough numbers, can't slice that far back!
                    return 0
                
                kProduct, n = 1, len(self.__numbers)
                # 💪 Rolling up our sleeves and multiplying from the back
                for i in range(n-1, n-k-1, -1): kProduct *= self.__numbers[i]
                
                # 🎉 Return the grand total!
                return kProduct
        ```
    - **💻 C++ Code 💻**
        ```cpp []
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
        ```
<hr>

- ### Approach 2:- Prefix Sum
    ### 💡 Intuition (What's the Big Idea?)
    Imagine keeping a running tally of your wins 🎉—every time you multiply a number, you just note the total so far. When someone asks for the product of the last *k* numbers, you simply subtract the past results. No time-wasting math marathons! 🧮💨

    ### 🧠 Approach (The Game Plan)
    1. **Track Products:** Use a prefix product array (like a savings account 💰) to store the cumulative product after every addition.
    2. **Handle Zeroes:** If a zero pops up (the villain 😈), reset everything to avoid chaos.
    3. **Quick Lookups:** To find the product of the last *k* numbers, just divide the last cumulative product by the one before the *k*-th number. It’s as slick as slicing cake 🍰!

    ### 🕒 Time Complexity (Speed Test) 🏎️💨
    - **Adding Numbers:** **$O(1)$** ⚡ (Fast push into our prefix list)
    - **Getting Product:** **$O(1)$** 🚀 (Quick division, no loops!)

    ### 💾 Space Complexity (Memory Check) 🧠💾
    - **$O(N)$** 📂 (We store prefix products for all numbers—like receipts in a shoebox 📦)

    ### 🎉 Fun Note:
    - Prefix sums: Making multiplications simple since forever! ✨
    - Zeroes: The uninvited party crashers. Reset and keep dancing! 💃🕺

    This approach is fast, clean, and ready to party with your data! 🎊📊
    
    ### 💻💥 Code Implementation
    - **🐍 Python Code 🐍**
        ```python3 []
        class ProductOfNumbers:
            def __init__(self):
                # 🧮 Start with a prefix product list initialized to 1
                self.__productTillNow = [1]
                self.__currentLength = 0  # 🧾 Tracks how many numbers we've added

            def add(self, num: int) -> None:
                if num == 0:
                    # 🚨 Party crasher (zero) detected! Reset everything.
                    self.__productTillNow = [1]
                    self.__currentLength = 0
                else:
                    # 📊 Add the cumulative product of the new number
                    self.__productTillNow.append(self.__productTillNow[-1] * num)
                    self.__currentLength += 1
                
            def getProduct(self, k: int) -> int:
                # 🧮 Let's find the product of the last k numbers using prefix products!
                if k > self.__currentLength: return 0
                
                # 🔢 Divide the last prefix product by the one k steps back
                last_k_Product = self.__productTillNow[-1] // self.__productTillNow[self.__currentLength - k]
                return last_k_Product
        ```
    - **💻 C++ Code 💻**
        ```cpp []
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
        ```
<hr>

- ### 📂 GitHub Repository 🚀🦑
    Want to see the full masterpiece in action? 🎨 Check out my GitHub repository here:
    👉 ***[Product of the Last K Numbers](https://github.com/madiv9820/14_02_2025--1352_Product_of_the_Last_K_Numbers/tree/main)*** 🌟

    Fork it, star it, or just vibe with it. ⭐🚀 Code’s waiting for you—don’t leave it hanging! 😎💻
<hr>