#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int n, s;
    cin >> n >> s;

    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    sort(a, a + n);

    int num_colors = 1;
    int current_color_end = a[0] + s;
    for (int i = 1; i < n; i++) {
        if (a[i] > current_color_end) {
            num_colors++;
            current_color_end = a[i] + s;
        }
    }

    cout << num_colors << endl;

    return 0;
}
