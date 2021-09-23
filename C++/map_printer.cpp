#include <iostream>
#include <unordered_map>
 
template<typename K, typename V>
std::ostream &operator<<(std::ostream &os,
                        const std::unordered_map<K, V> &m) {
    for (const std::pair<K, V> &p: m) {
        os << "{" << p.first << ": " << p.second << "}\n";
    }
    return os;
}
 
int main()
{
    std::unordered_map<int, char> m = {
        {1, 'A'},
        {2, 'B'},
        {3, 'C'}
    };
 
    std::cout << m;
 
    return 0;
}