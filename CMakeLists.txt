cmake_minimum_required(VERSION 3.27)
project(striver_a2z)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(striver_a2z
        ARRAYS/EASY/CHECK_IF_ARRAY_IS_SORTED.cpp
        ARRAYS/EASY/LARGEST_ELEMENT.cpp
        ARRAYS/EASY/LEFT_ROTATE_BY_1.cpp
        ARRAYS/EASY/LEFT_ROTATE_BY_D.cpp
        ARRAYS/EASY/LINEAR_SEARCH.cpp
        ARRAYS/EASY/LONGEST_SUBARRAY_WITH_SUM_K.cpp
        ARRAYS/EASY/MAXM_ONES.cpp
        ARRAYS/EASY/MERGE_2_SORTED_ARRAYS.cpp
        ARRAYS/EASY/MISSING_NUMBER.cpp
        ARRAYS/EASY/MOVE_ALL_ZEROES.cpp
        ARRAYS/EASY/REMOVE_DUPLICATES.cpp
        ARRAYS/EASY/SECOND_LARGEST_SMALLEST.cpp
        ARRAYS/EASY/SINGLENUMBER.cpp
        ARRAYS/EASY/TWOSUM.cpp
        ARRAYS/HARD/MAJORITY_ELEMENT.cpp
        ARRAYS/MEDIUM/BUYSELLSTOCK.cpp
        ARRAYS/MEDIUM/LEADERSINARRAY.cpp
        ARRAYS/MEDIUM/LONGEST_SEQ.cpp
        ARRAYS/MEDIUM/MAJORITYELEMENT.cpp
        ARRAYS/MEDIUM/MAXMSUBARRAYSUM.cpp
        ARRAYS/MEDIUM/NEXT_PERMUTATION.cpp
        ARRAYS/MEDIUM/ROTATE_MATRIX.cpp
        ARRAYS/MEDIUM/SORTCOLORS.cpp
        ARRAYS/MEDIUM/SUBARRAY_SUM_EQUALS_K.cpp
        ARRAYS/MEDIUM/ZERO_MATRIX.cpp
        "BINARY SEARCH/BS ON 1D ARRAYS/algo.cpp"
        "BINARY SEARCH/BS ON 1D ARRAYS/FIRST_LAST_OCCURENCE.cpp"
        "BINARY SEARCH/BS ON 1D ARRAYS/floor_ceil.cpp"
        "BINARY SEARCH/BS ON 1D ARRAYS/lower_upper_bounds.cpp"
        "BINARY SEARCH/BS ON 1D ARRAYS/rotatedarray.cpp"
        "BINARY SEARCH/BS ON 1D ARRAYS/rotatedarray2.cpp"
        "BINARY SEARCH/BS ON 1D ARRAYS/t.cpp"
        "BINARY SEARCH/BS ON ANSWERS/Aggresive_Cows.cpp"
        "BINARY SEARCH/BS ON ANSWERS/cnt_books.cpp"
        "DP/1. Intro.cpp"
        "DP/2. Climbing Stairs.cpp"
        "DP/3. FROG JUMP.cpp"
        Graphs/REPRESENTATION.cpp
        GREEDY/Activity_Selection.cpp
        GREEDY/orig_array.cpp
        hashing/hashmap.cpp
        recursion/woc_5/A.cpp
        recursion/1.cpp
        recursion/1_N_BACKTRACK.cpp
        recursion/balancedparenthesis.cpp
        recursion/binarystrings.cpp
        recursion/delete_middle.cpp
        recursion/fib.cpp
        recursion/n_bit_binary.cpp
        recursion/name_N.cpp
        recursion/palindrome.cpp
        recursion/perm_case_change.cpp
        recursion/rev_stack.cpp
        recursion/revarr.cpp
        recursion/sortarr.cpp
        recursion/sortstack.cpp
        recursion/subsets.cpp
        recursion/SUM_1_N.cpp
        sorting/bubble.cpp
        sorting/insertion.cpp
        sorting/selection.cpp
        STL/pair.cpp
        STL/set.cpp
        STL/vector.cpp
        temp.cpp
        template.cpp
        template.h)
