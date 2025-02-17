#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int designerPdfViewer(vector<int>& h, string word) {
    // Find the maximum height of the letters in the word
    int max_height = 0;
    for (char c : word) {
        int index = c - 'a';  // Calculate the index of the letter (0 for 'a', 1 for 'b', ..., 25 for 'z')
        max_height = max(max_height, h[index]);
    }
    
    // Calculate the area of the highlighted rectangle
    int area = max_height * word.length();
    return area;
}

int main() {
    // Read the heights of the letters
    vector<int> h(26);  // Array to store the heights of letters 'a' to 'z'
    for (int i = 0; i < 26; ++i) {
        cin >> h[i];
    }
    
    // Read the word
    string word;
    cin >> word;
    
    // Get the highlighted area
    int result = designerPdfViewer(h, word);
    
    // Output the result
    cout << result << endl;
    
    return 0;
}
