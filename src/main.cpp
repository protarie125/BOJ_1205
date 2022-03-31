#include <iostream>
#include <vector>

using namespace std;

using vi = vector<int>;

int main() {
	ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	int n, x, p;
	cin >> n >> x >> p;

	auto pts = vi(n);
	for (int i = 0; i < n; ++i) {
		cin >> pts[i];
	}

	if (n < p) {
		auto ans = int{ 1 };
		for (int i = 0; i < n; ++i) {
			if (x < pts[i]) {
				++ans;
			}
			else {
				break;
			}
		}

		cout << ans;
	}
	else if (n == p) {
		if (pts[n - 1] < x) {
			auto ans = int{ 1 };
			for (int i = 0; i < n; ++i) {
				if (x < pts[i]) {
					++ans;
				}
				else {
					break;
				}
			}

			cout << ans;
		}
		else {
			cout << -1;
		}
	}

	return 0;
}