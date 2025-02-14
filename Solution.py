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