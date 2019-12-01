#include <iostream>

using namespace std;

int		main()
{
	int		m[1000], n, i = 0;

	cin >> n;
	while (i < n)
		cin >> m[i++];
	i = 0;
	while (i < n)
	{
		cout << m[i];
		if (i + 2 < n)
			cout << " ";
		i += 2;
	}
	return (0);
}
