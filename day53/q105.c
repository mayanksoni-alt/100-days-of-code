#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int nums[n];
    for(int i = 0; i < n; i++)
        scanf("%d", &nums[i]);

    int candidate = 0, count = 0;

    // Boyer–Moore Voting Algorithm
    for(int i = 0; i < n; i++) {
        if(count == 0) {
            candidate = nums[i];
            count = 1;
        } else if(nums[i] == candidate) {
            count++;
        } else {
            count--;
        }
    }

    // Verify the candidate
    count = 0;
    for(int i = 0; i < n; i++)
        if(nu
