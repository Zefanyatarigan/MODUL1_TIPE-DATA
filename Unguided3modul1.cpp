#include <iostream>
 #include <map> 
 using namespace std; 
 
int main() { 
    map<string, int> m;     m["Zefanya"] = 20;     m["Brana"] = 25;     m["Tarigan"] = 30; 
     for (auto it = m.begin(); it != m.end(); ++it) {         cout << it->first << " -> " << it->second << endl;     }  
    auto it = m.find("Tariagan");     if (it != m.end()) { 
        cout << "Nilai untuk key 'Tarigan': " << it->second << endl; 
    } else { 
        cout << "Key 'Tarigan' tidak ditemukan" << endl;     }  
    return 0; 
} 
