/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* getConcatenation(int* nums, int numsSize, int* returnSize){
    *returnSize = 2 * numsSize;
    int *res = malloc(sizeof(int) * 2 * numsSize);
    for(int i = 0; i < numsSize; i++)
    {
        res[i] = nums[i];
        res[i +numsSize] = nums[i];
    }

    return res;
}