#include <iostream>
#include <string>
#include <unordered_map>
#include "Solution.hpp"

struct testcase {
    vector<string> function_inputs;
    vector<vector<int>> inputs;
    vector<int> expected;
};

class UnitTest {
private:
    unordered_map<string, testcase> testcases;
    ProductOfNumbers product;
    
    void test_case_default_example() {
        vector<string>& function_inputs = testcases["default_example"].function_inputs;
        vector<vector<int>>& inputs = testcases["default_example"].inputs;
        vector<int>& expected = testcases["default_example"].expected;
        
        int n = expected.size();
        vector<int> result(n, -1);
        
        for(int i = 0; i < n; ++i) {
            if(function_inputs[i] == "add") product.add(inputs[i][0]);
            else if(function_inputs[i] == "getProduct") result[i] = product.getProduct(inputs[i][0]);
        }

        bool passed = true;
        for(int i = 0; i < n; ++i) if(expected[i] != result[i]) { passed = false; break; }

        cout << "test_case_default_example: " << ((passed) ? "passed":"failed") << endl;
    }
    void test_case_basic_scenario_small_inputs() {
        vector<string>& function_inputs = testcases["basic_scenario_small_inputs"].function_inputs;
        vector<vector<int>>& inputs = testcases["basic_scenario_small_inputs"].inputs;
        vector<int>& expected = testcases["basic_scenario_small_inputs"].expected;
        
        int n = expected.size();
        vector<int> result(n, -1);
        
        for(int i = 0; i < n; ++i) {
            if(function_inputs[i] == "add") product.add(inputs[i][0]);
            else if(function_inputs[i] == "getProduct") result[i] = product.getProduct(inputs[i][0]);
        }

        bool passed = true;
        for(int i = 0; i < n; ++i) if(expected[i] != result[i]) { passed = false; break; }

        cout << "test_case_basic_scenario_small_inputs: " << ((passed) ? "passed":"failed") << endl;
    }
    void test_case_scenario_with_zero() {
        vector<string>& function_inputs = testcases["scenario_with_zero"].function_inputs;
        vector<vector<int>>& inputs = testcases["scenario_with_zero"].inputs;
        vector<int>& expected = testcases["scenario_with_zero"].expected;
        
        int n = expected.size();
        vector<int> result(n, -1);
        
        for(int i = 0; i < n; ++i) {
            if(function_inputs[i] == "add") product.add(inputs[i][0]);
            else if(function_inputs[i] == "getProduct") result[i] = product.getProduct(inputs[i][0]);
        }

        bool passed = true;
        for(int i = 0; i < n; ++i) if(expected[i] != result[i]) { passed = false; break; }

        cout << "test_case_scenario_with_zero: " << ((passed) ? "passed":"failed") << endl;
    }
    void test_case_consecutive_getProduct_calls() {
        vector<string>& function_inputs = testcases["consecutive_getProduct_calls"].function_inputs;
        vector<vector<int>>& inputs = testcases["consecutive_getProduct_calls"].inputs;
        vector<int>& expected = testcases["consecutive_getProduct_calls"].expected;
        
        int n = expected.size();
        vector<int> result(n, -1);
        
        for(int i = 0; i < n; ++i) {
            if(function_inputs[i] == "add") product.add(inputs[i][0]);
            else if(function_inputs[i] == "getProduct") result[i] = product.getProduct(inputs[i][0]);
        }

        bool passed = true;
        for(int i = 0; i < n; ++i) if(expected[i] != result[i]) { passed = false; break; }

        cout << "test_case_consecutive_getProduct_calls: " << ((passed) ? "passed":"failed") << endl;
    }
    void test_case_only_one_number_in_stream() {
        vector<string>& function_inputs = testcases["only_one_number_in_stream"].function_inputs;
        vector<vector<int>>& inputs = testcases["only_one_number_in_stream"].inputs;
        vector<int>& expected = testcases["only_one_number_in_stream"].expected;
        
        int n = expected.size();
        vector<int> result(n, -1);
        
        for(int i = 0; i < n; ++i) {
            if(function_inputs[i] == "add") product.add(inputs[i][0]);
            else if(function_inputs[i] == "getProduct") result[i] = product.getProduct(inputs[i][0]);
        }

        bool passed = true;
        for(int i = 0; i < n; ++i) if(expected[i] != result[i]) { passed = false; break; }

        cout << "test_case_only_one_number_in_stream: " << ((passed) ? "passed":"failed") << endl;
    }
    void test_case_multiple_zeroes_in_the_stream() {
        vector<string>& function_inputs = testcases["multiple_zeroes_in_the_stream"].function_inputs;
        vector<vector<int>>& inputs = testcases["multiple_zeroes_in_the_stream"].inputs;
        vector<int>& expected = testcases["multiple_zeroes_in_the_stream"].expected;
        
        int n = expected.size();
        vector<int> result(n, -1);
        
        for(int i = 0; i < n; ++i) {
            if(function_inputs[i] == "add") product.add(inputs[i][0]);
            else if(function_inputs[i] == "getProduct") result[i] = product.getProduct(inputs[i][0]);
        }

        bool passed = true;
        for(int i = 0; i < n; ++i) if(expected[i] != result[i]) { passed = false; break; }

        cout << "test_case_multiple_zeroes_in_the_stream: " << ((passed) ? "passed":"failed") << endl;
    }
    void test_case_all_same_numbers() {
        vector<string>& function_inputs = testcases["all_same_numbers"].function_inputs;
        vector<vector<int>>& inputs = testcases["all_same_numbers"].inputs;
        vector<int>& expected = testcases["all_same_numbers"].expected;
        
        int n = expected.size();
        vector<int> result(n, -1);
        
        for(int i = 0; i < n; ++i) {
            if(function_inputs[i] == "add") product.add(inputs[i][0]);
            else if(function_inputs[i] == "getProduct") result[i] = product.getProduct(inputs[i][0]);
        }

        bool passed = true;
        for(int i = 0; i < n; ++i) if(expected[i] != result[i]) { passed = false; break; }

        cout << "test_case_all_same_numbers: " << ((passed) ? "passed":"failed") << endl;
    }
    void test_case_large_input_with_small_k() {
        vector<string>& function_inputs = testcases["large_input_with_small_k"].function_inputs;
        vector<vector<int>>& inputs = testcases["large_input_with_small_k"].inputs;
        vector<int>& expected = testcases["large_input_with_small_k"].expected;
        
        int n = expected.size();
        vector<int> result(n, -1);
        
        for(int i = 0; i < n; ++i) {
            if(function_inputs[i] == "add") product.add(inputs[i][0]);
            else if(function_inputs[i] == "getProduct") result[i] = product.getProduct(inputs[i][0]);
        }

        bool passed = true;
        for(int i = 0; i < n; ++i) if(expected[i] != result[i]) { passed = false; break; }

        cout << "test_case_large_input_with_small_k: " << ((passed) ? "passed":"failed") << endl;
    }
    void test_case_large_k_matching_stream_length() {
        vector<string>& function_inputs = testcases["large_k_matching_stream_length"].function_inputs;
        vector<vector<int>>& inputs = testcases["large_k_matching_stream_length"].inputs;
        vector<int>& expected = testcases["large_k_matching_stream_length"].expected;
        
        int n = expected.size();
        vector<int> result(n, -1);
        
        for(int i = 0; i < n; ++i) {
            if(function_inputs[i] == "add") product.add(inputs[i][0]);
            else if(function_inputs[i] == "getProduct") result[i] = product.getProduct(inputs[i][0]);
        }

        bool passed = true;
        for(int i = 0; i < n; ++i) if(expected[i] != result[i]) { passed = false; break; }

        cout << "test_case_large_k_matching_stream_length: " << ((passed) ? "passed":"failed") << endl;
    }
    void test_case_continuous_zeros_resetting_product() {
        vector<string>& function_inputs = testcases["continuous_zeros_resetting_product"].function_inputs;
        vector<vector<int>>& inputs = testcases["continuous_zeros_resetting_product"].inputs;
        vector<int>& expected = testcases["continuous_zeros_resetting_product"].expected;
        
        int n = expected.size();
        vector<int> result(n, -1);
        
        for(int i = 0; i < n; ++i) {
            if(function_inputs[i] == "add") product.add(inputs[i][0]);
            else if(function_inputs[i] == "getProduct") result[i] = product.getProduct(inputs[i][0]);
        }

        bool passed = true;
        for(int i = 0; i < n; ++i) if(expected[i] != result[i]) { passed = false; break; }

        cout << "test_case_continuous_zeros_resetting_product: " << ((passed) ? "passed":"failed") << endl;
    }
    void test_case_single_element_with_multiple_getProduct_calls() {
        vector<string>& function_inputs = testcases["single_element_with_multiple_getProduct_calls"].function_inputs;
        vector<vector<int>>& inputs = testcases["single_element_with_multiple_getProduct_calls"].inputs;
        vector<int>& expected = testcases["single_element_with_multiple_getProduct_calls"].expected;
        
        int n = expected.size();
        vector<int> result(n, -1);
        
        for(int i = 0; i < n; ++i) {
            if(function_inputs[i] == "add") product.add(inputs[i][0]);
            else if(function_inputs[i] == "getProduct") result[i] = product.getProduct(inputs[i][0]);
        }

        bool passed = true;
        for(int i = 0; i < n; ++i) if(expected[i] != result[i]) { passed = false; break; }

        cout << "test_case_single_element_with_multiple_getProduct_calls: " << ((passed) ? "passed":"failed") << endl;
    }
public:
    UnitTest() {
        testcases = {
            {"default_example", {{"ProductOfNumbers","add","add","add","add","add","getProduct","getProduct","getProduct","add","getProduct"}, 
                                {{},{3},{0},{2},{5},{4},{2},{3},{4},{8},{2}},
                                {-1,-1,-1,-1,-1,-1,20,40,0,-1,32}}},
            {"basic_scenario_small_inputs", {{"ProductOfNumbers","add","add","getProduct"},
                                            {{},{2},{3},{2}},
                                            {-1,-1,-1,6}}},
            {"scenario_with_zero", {{"ProductOfNumbers","add","add","add","getProduct"},
                                   {{},{5},{4},{0},{2}},
                                   {-1,-1,-1,-1,0}}},
            {"consecutive_getProduct_calls", {{"ProductOfNumbers","add","add","add","getProduct","getProduct"},
                                              {{},{2},{3},{5},{2},{3}},
                                              {-1,-1,-1,-1,15,30}}},
            {"only_one_number_in_stream", {{"ProductOfNumbers","add","getProduct"},
                                          {{},{7},{1}},
                                          {-1,-1,7}}},
            {"multiple_zeroes_in_the_stream", {{"ProductOfNumbers","add","add","add","add","add","getProduct"},
                                              {{},{1},{0},{0},{5},{6},{2}},
                                              {-1,-1,-1,-1,-1,-1,30}}},
            {"all_same_numbers", {{"ProductOfNumbers","add","add","add","getProduct"},
                                 {{},{3},{3},{3},{3}},
                                 {-1,-1,-1,-1,27}}},
            {"large_input_with_small_k", {{"ProductOfNumbers","add","add","add","getProduct"},
                                         {{},{100},{200},{300},{1}},
                                         {-1,-1,-1,-1,300}}},
            {"large_k_matching_stream_length", {{"ProductOfNumbers","add","add","add","add","getProduct"},
                                               {{},{2},{2},{2},{2},{4}},
                                               {-1,-1,-1,-1,-1,16}}},
            {"continuous_zeros_resetting_product", {{"ProductOfNumbers","add","add","add","getProduct"},
                                                   {{},{0},{0},{0},{5},{1}},
                                                   {-1,-1,-1,-1,-1,5}}},
            {"single_element_with_multiple_getProduct_calls", {{"ProductOfNumbers","add","getProduct","getProduct"},
                                                              {{},{9},{1},{1}},
                                                              {-1,-1,9,9}}}
        };
    }
    void test() {
        test_case_default_example();
        test_case_basic_scenario_small_inputs();
        test_case_scenario_with_zero();
        test_case_consecutive_getProduct_calls();
        test_case_only_one_number_in_stream();
        test_case_multiple_zeroes_in_the_stream();
        test_case_all_same_numbers();
        test_case_large_input_with_small_k();
        test_case_large_k_matching_stream_length();
        test_case_continuous_zeros_resetting_product();
        test_case_single_element_with_multiple_getProduct_calls();
    }
};

int main() {
    UnitTest test;
    test.test();
}