# [1352. The Last K Numbers Walk Into a Bar... And Get Multiplied! 🍻🔢🎉](https://leetcode.com/problems/product-of-the-last-k-numbers)

**Difficulty:** Medium 🤔💡 <br>
**Topics Covered**: Array 🧮🔢, Math ➗✖️📐, Design 🎨🖌️, Data Stream 🌊📊, Prefix Sum ➕🔢📈
<hr>

### Riddler Tests Batman's Brainpower... 🧠💥
**Riddler:** "Ah, Batman! I've got a puzzle for you! Are you ready to unravel my trickery? 🧐🎩"

**Batman:** "Let's hear it, Riddler. I’m always ready for your games."

**Riddler:** "Well, well, well… Imagine a stream of numbers flowing endlessly through Gotham’s streets. 🏙️🔢 You need to find the product of the last k numbers in this chaotic stream, but there’s a twist! If you add a number to the stream, you must remember it, for you’ll need it later! Can you find the product of the last k numbers in this stream, just when I say so? 🤔💡

**Batman:** "So, you want me to keep track of the last k numbers in this stream and then calculate their product on demand? Piece of cake." 🍰🔍

**Riddler:** "Oh, Batman, always so serious! Here's the game plan:
- ***`ProductOfNumbers()`***: Start with an empty stream, no numbers in sight! 🕵️‍♂️
- ***`add(int num)`***: Add the number to the stream, and remember it! 💭📈
- ***`getProduct(int k)`***: When you need it, calculate the product of the last k numbers! But be careful... they're all connected, like a web of numbers! 😈✨

Can you keep up with my riddles, Batman? The product’s waiting! 🦇🤐"

**Batman:** "Let’s see if you can outsmart me this time, Riddler. I’ll be ready." 🦇
<hr>

### 🎯 Problem Statement
Design an algorithm that accepts a stream of integers and retrieves the product of the last k integers from the stream.

**📜 Class Design:**  
Create a class ***`ProductOfNumbers`*** with the following methods:
- ***`ProductOfNumbers()`***: Initializes the object with an empty stream. Think of it as opening a brand-new notebook—fresh pages, no scribbles! 📓
- ***`void add(int num)`***: Appends the integer ***`num`*** to the stream. It's like tossing another item into your shopping cart 🛒. 
    - If the number is zero, it wipes out everything before—like a factory reset! 💥

- ***`int getProduct(int k)`***: Returns the product of the last ***`k`*** numbers in the current stream.
    - You can safely assume that the current stream always has at least ***`k`*** numbers. No funny business! 🤨
<hr>

### 🧪 Example Scenario
- **📥 Input:** <br>
**Commands:** ***`["ProductOfNumbers","add","add","add","add","add","getProduct","getProduct","getProduct","add","getProduct"]`*** <br>
**Arguments:** ***`[[],[3],[0],[2],[5],[4],[2],[3],[4],[8],[2]]`***

- **📤 Output:** ***`[null,null,null,null,null,null,20,40,0,null,32]`***

- **🎉 Explanation (Fun Edition):**
    ```
    ProductOfNumbers productOfNumbers = new ProductOfNumbers();
    productOfNumbers.add(3);        // ➕ Added 3. Stream: [3] 📊
    productOfNumbers.add(0);        // 💥 Zero Alert! Stream: [3,0] RESET MODE! 😱
    productOfNumbers.add(2);        // ➕ Added 2. Stream: [3,0,2]
    productOfNumbers.add(5);        // ➕ Added 5. Stream: [3,0,2,5]
    productOfNumbers.add(4);        // ➕ Added 4. Stream: [3,0,2,5,4]

    productOfNumbers.getProduct(2); // 📦 Product of last 2: 5 * 4 = 20 🧮
    productOfNumbers.getProduct(3); // 📦 Product of last 3: 2 * 5 * 4 = 40 💯
    productOfNumbers.getProduct(4); // 😵 Oops, there's a zero! Product: 0 🚫

    productOfNumbers.add(8);        // ➕ Added 8. Stream: [3,0,2,5,4,8]
    productOfNumbers.getProduct(2); // 📦 Product of last 2: 4 * 8 = 32 🎯
    ```
    **💡 What’s Happening? 🤔** <br>
    - **Add:** Toss numbers into the shopping cart! 🛒 <br>
    - **Zero:** Drops the hammer—resets everything! 💥 <br>
    - **Get Product:** Quick math with some division wizardry 🧙

    **Moral of the Story:** Never trust a zero. It ruins everything! 😎
<hr>

### 💡 Important Notes
- All test cases will fit into a 32-bit integer—no overflows, no explosions! 💣
- If there's a zero in the stream recently, the product of a sequence that includes it will be zero. Simple math! 🧮
<hr>

### 📏 Constraints (with Attitude):
- **Range:** ***`0 <= num <= 100`*** (No negative drama here! 🙄)
- **Window:** ***<code>1 <= k <= 4 * 10<sup>4</sup></code>*** (That’s a lot of numbers! 😵)
- **Calls:** Up to ***<code>4 * 10<sup>4</sup></code>*** calls (Hope your CPU had coffee! ☕)
- **Storage:** 32-bit integers only (Overflow? We don’t do that here. 🚫💣)
<hr>

### 🧠 Challenge Yourself
- Can you make ***`add()`*** and ***`getProduct()`*** run in **$O(1)$** time? Speed demons only! 🚀
- What’s your space usage? Minimalism is key! 📦

Good luck, and may your products be ever multiplied! 😎✨
<hr>

### 💡 Hints 
- **🧮 Keep a Prefix Products Array:** Store cumulative products like a shopping receipt—so you don’t have to recount your items every time! 🛒💰
- **⚡ Quick Product Lookup $(O(1))$:** Want the total cost of your last 5 items? Just divide the subtotal—no re-scanning! 🛍️✨
- **💣 Zero Alert:** If you add a zero... KA-BOOM! 💥 Reset everything. Your shopping cart just crashed. 🛒🔥
- **🧙 Divide and Conquer**: To get the product of the last K numbers, divide the latest prefix total by the prefix before those numbers—like slicing a pizza without counting every pepperoni. 🍕➗🍕

**Moral of the Story:** Zeroes are your arch-nemesis. Prefix arrays are your besties. 😎🚀
<hr>