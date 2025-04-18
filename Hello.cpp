import std; // make all of the standard library available
using namespace std;

int main() // print unique lines from input
{
    unordered_map<string, int> m; // hash table
    for (string line; getline(cin, line);)
        if (m[line]++ == 0)
            cout << line << '\n';
}