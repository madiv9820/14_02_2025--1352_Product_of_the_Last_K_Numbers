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