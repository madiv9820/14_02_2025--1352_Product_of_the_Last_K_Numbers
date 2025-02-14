from Solution import ProductOfNumbers
from timeout_decorator import timeout
import unittest

class UnitTest(unittest.TestCase):
    def setUp(self):
        self.__products = ProductOfNumbers()
        self.__testcases = {
            "default_example": (["ProductOfNumbers","add","add","add","add","add","getProduct","getProduct","getProduct","add","getProduct"], 
                                [[],[3],[0],[2],[5],[4],[2],[3],[4],[8],[2]],
                                [None,None,None,None,None,None,20,40,0,None,32]),
            "basic_scenario_small_inputs": (["ProductOfNumbers","add","add","getProduct"],
                                            [[],[2],[3],[2]],
                                            [None,None,None,6]),
            "scenario_with_zero": (["ProductOfNumbers","add","add","add","getProduct"],
                                   [[],[5],[4],[0],[2]],
                                   [None,None,None,None,0]),
            "consecutive_getProduct_calls": (["ProductOfNumbers","add","add","add","getProduct","getProduct"],
                                              [[],[2],[3],[5],[2],[3]],
                                              [None,None,None,None,15,30]),
            "only_one_number_in_stream": (["ProductOfNumbers","add","getProduct"],
                                          [[],[7],[1]],
                                          [None,None,7]),
            "multiple_zeroes_in_the_stream": (["ProductOfNumbers","add","add","add","add","add","getProduct"],
                                              [[],[1],[0],[0],[5],[6],[2]],
                                              [None,None,None,None,None,None,30]),
            "all_same_numbers": (["ProductOfNumbers","add","add","add","getProduct"],
                                 [[],[3],[3],[3],[3]],
                                 [None,None,None,None,27]),
            "large_input_with_small_k": (["ProductOfNumbers","add","add","add","getProduct"],
                                         [[],[100],[200],[300],[1]],
                                         [None,None,None,None,300]),
            "large_k_matching_stream_length": (["ProductOfNumbers","add","add","add","add","getProduct"],
                                               [[],[2],[2],[2],[2],[4]],
                                               [None,None,None,None,None,16]),
            "continuous_zeros_resetting_products": (["ProductOfNumbers","add","add","add","add","getProduct"],
                                                   [[],[0],[0],[0],[5],[1]],
                                                   [None,None,None,None,None,5]),
            "single_element_with_multiple_getProduct_calls": (["ProductOfNumbers","add","getProduct","getProduct"],
                                                              [[],[9],[1],[1]],
                                                              [None,None,9,9])
        }
        return super().setUp()
    
    @timeout(0.5)
    def test_case_default_example(self):
        function_inputs, inputs, expected = self.__testcases["default_example"]
        
        n = len(inputs)
        output = [None] * n
        
        for i in range(n):
            if function_inputs[i] == "add": self.__products.add(inputs[i][0])
            elif function_inputs[i] == "getProduct": output[i] = self.__products.getProduct(inputs[i][0])

        self.assertEqual(output, expected)
    @timeout(0.5)
    def test_case_basic_scenario_small_inputs(self):
        function_inputs, inputs, expected = self.__testcases["basic_scenario_small_inputs"]
        
        n = len(inputs)
        output = [None] * n
        
        for i in range(n):
            if function_inputs[i] == "add": self.__products.add(inputs[i][0])
            elif function_inputs[i] == "getProduct": output[i] = self.__products.getProduct(inputs[i][0])

        self.assertEqual(output, expected)
    @timeout(0.5)
    def test_case_scenario_with_zero(self):
        function_inputs, inputs, expected = self.__testcases["scenario_with_zero"]
        
        n = len(inputs)
        output = [None] * n
        
        for i in range(n):
            if function_inputs[i] == "add": self.__products.add(inputs[i][0])
            elif function_inputs[i] == "getProduct": output[i] = self.__products.getProduct(inputs[i][0])

        self.assertEqual(output, expected)
    @timeout(0.5)
    def test_case_consecutive_getProduct_calls(self):
        function_inputs, inputs, expected = self.__testcases["consecutive_getProduct_calls"]
        
        n = len(inputs)
        output = [None] * n
        
        for i in range(n):
            if function_inputs[i] == "add": self.__products.add(inputs[i][0])
            elif function_inputs[i] == "getProduct": output[i] = self.__products.getProduct(inputs[i][0])

        self.assertEqual(output, expected)
    @timeout(0.5)
    def test_case_only_one_number_in_stream(self):
        function_inputs, inputs, expected = self.__testcases["only_one_number_in_stream"]
        
        n = len(inputs)
        output = [None] * n
        
        for i in range(n):
            if function_inputs[i] == "add": self.__products.add(inputs[i][0])
            elif function_inputs[i] == "getProduct": output[i] = self.__products.getProduct(inputs[i][0])

        self.assertEqual(output, expected)
    @timeout(0.5)
    def test_case_multiple_zeroes_in_the_stream(self):
        function_inputs, inputs, expected = self.__testcases["multiple_zeroes_in_the_stream"]
        
        n = len(inputs)
        output = [None] * n
        
        for i in range(n):
            if function_inputs[i] == "add": self.__products.add(inputs[i][0])
            elif function_inputs[i] == "getProduct": output[i] = self.__products.getProduct(inputs[i][0])

        self.assertEqual(output, expected)
    @timeout(0.5)
    def test_case_all_same_numbers(self):
        function_inputs, inputs, expected = self.__testcases["all_same_numbers"]
        
        n = len(inputs)
        output = [None] * n
        
        for i in range(n):
            if function_inputs[i] == "add": self.__products.add(inputs[i][0])
            elif function_inputs[i] == "getProduct": output[i] = self.__products.getProduct(inputs[i][0])

        self.assertEqual(output, expected)
    @timeout(0.5)
    def test_case_large_input_with_small_k(self):
        function_inputs, inputs, expected = self.__testcases["large_input_with_small_k"]
        
        n = len(inputs)
        output = [None] * n
        
        for i in range(n):
            if function_inputs[i] == "add": self.__products.add(inputs[i][0])
            elif function_inputs[i] == "getProduct": output[i] = self.__products.getProduct(inputs[i][0])

        self.assertEqual(output, expected)
    @timeout(0.5)
    def test_case_large_k_matching_stream_length(self):
        function_inputs, inputs, expected = self.__testcases["large_k_matching_stream_length"]
        
        n = len(inputs)
        output = [None] * n
        
        for i in range(n):
            if function_inputs[i] == "add": self.__products.add(inputs[i][0])
            elif function_inputs[i] == "getProduct": output[i] = self.__products.getProduct(inputs[i][0])

        self.assertEqual(output, expected)
    @timeout(0.5)
    def test_case_continuous_zeros_resetting_products(self):
        function_inputs, inputs, expected = self.__testcases["continuous_zeros_resetting_products"]
        
        n = len(inputs)
        output = [None] * n
        
        for i in range(n):
            if function_inputs[i] == "add": self.__products.add(inputs[i][0])
            elif function_inputs[i] == "getProduct": output[i] = self.__products.getProduct(inputs[i][0])

        self.assertEqual(output, expected)
    @timeout(0.5)
    def test_case_single_element_with_multiple_getProduct_calls(self):
        function_inputs, inputs, expected = self.__testcases["single_element_with_multiple_getProduct_calls"]
        
        n = len(inputs)
        output = [None] * n
        
        for i in range(n):
            if function_inputs[i] == "add": self.__products.add(inputs[i][0])
            elif function_inputs[i] == "getProduct": output[i] = self.__products.getProduct(inputs[i][0])

        self.assertEqual(output, expected)

if __name__ == '__main__':
    unittest.main()