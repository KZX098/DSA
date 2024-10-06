#include <iostream>
#include <vector>
#include <stdexcept>

// Function to find the majority element
int findMajorityElement(const std::vector<int>& nums) {
    int count = 0;
    int candidate = 0;

    // Phase 1: Find a candidate for majority element
    for (int num : nums) {
        if (count == 0) {
            candidate = num;
        }
        if (num == candidate) {
            count++;
        } else {
            count--;
        }
    }

    // Phase 2: Verify the candidate
    count = 0;
    for (int num : nums) {
        if (num == candidate) {
            count++;
        }
    }

    if (count > nums.size() / 2) {
        return candidate;
    } else {
        throw std::runtime_error("No majority element found");
    }
}

int main() {
    std::vector<int> nums = {2, 2, 1, 1, 1, 2, 2};
    try {
        int majorityElement = findMajorityElement(nums);
        std::cout << "The majority element is: " << majorityElement << std::endl;
    } catch (const std::runtime_error& e) {
        std::cerr << e.what() << std::endl;
    }
    return 0;
}
