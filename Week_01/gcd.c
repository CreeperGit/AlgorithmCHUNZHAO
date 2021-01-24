//给定一个数组，将数组中的元素向右移动 k 个位置，其中 k 是非负数。


int gcd(int a, int b) {
    return b ? gcd(b, a % b) : a;
}

void swap(int* a, int* b) {
    int t = *a;
    *a = *b, *b = t;
}

void rotate(int* nums, int numsSize, int k) {
    k = k % numsSize;
    int count = gcd(k, numsSize);
    for (int start = 0; start < count; ++start) {
        int current = start;
        int prev = nums[start];
        do {
            int next = (current + k) % numsSize;
            swap(&nums[next], &prev);
            current = next;
        } while (start != current);
    }
}