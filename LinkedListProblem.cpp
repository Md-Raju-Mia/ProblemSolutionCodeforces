#include <iostream>
#include <unordered_map>
#include<vector>
using namespace std;

struct ListNode {
    int val;
    ListNode* next;
    ListNode(int x) : val(x), next(NULL) {}
};

ListNode* removeZeroSumSublists(ListNode* head) {
    ListNode* dummy = new ListNode(0);
    dummy->next = head;
    unordered_map<int, ListNode*> prefixSum;

    int sum = 0;
    for (ListNode* current = dummy; current != nullptr; current = current->next) {
        sum += current->val;
        prefixSum[sum] = current;
    }

    sum = 0;
    for (ListNode* current = dummy; current != nullptr; current = current->next) {
        sum += current->val;
        current->next = prefixSum[sum]->next;
    }

    return dummy->next;
}

// Helper function to create a linked list
ListNode* createLinkedList(vector<int>& nums) {
    if (nums.empty()) return nullptr;
    ListNode* head = new ListNode(nums[0]);
    ListNode* current = head;
    for (int i = 1; i < nums.size(); ++i) {
        current->next = new ListNode(nums[i]);
        current = current->next;
    }
    return head;
}

// Helper function to print a linked list
void printLinkedList(ListNode* head) {
    while (head != nullptr) {
        cout << head->val << " ";
        head = head->next;
    }
    cout << endl;
}

int main() {
    vector<int> nums1 = {1, 2, -3, 3, 1};
    ListNode* head1 = createLinkedList(nums1);
    ListNode* result1 = removeZeroSumSublists(head1);
    printLinkedList(result1);

    vector<int> nums2 = {1, 2, 3, -3, 4};
    ListNode* head2 = createLinkedList(nums2);
    ListNode* result2 = removeZeroSumSublists(head2);
    printLinkedList(result2);

    vector<int> nums3 = {1, 2, 3, -3, -2};
    ListNode* head3 = createLinkedList(nums3);
    ListNode* result3 = removeZeroSumSublists(head3);
    printLinkedList(result3);

    return 0;
}
