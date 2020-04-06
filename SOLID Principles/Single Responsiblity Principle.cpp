#include <iostream>
#include <cstdio>
#include <string>
#include <vector>
#include <fstream>

using namespace std;
/* Journal structure contains operation related to Journal entries only */
struct Journal
{
    string title;
    vector<string> entries;
    Journal(const string &title) : title(title) {}
    void add_entry (const string& entry)
    {
        static int count = 1;
        entries.push_back(count++ +":"+entry);
    }       
};
struct PersistantManager
{
    static void save (const Journal& j, const string& filename)
    {
        ofstream ofs(filename);
        for(auto& e:j.entries)
            ofs<<e<<endl; 
    }    
};

int main()
{
    Journal journal ("dear Diary");
    journal.add_entry("i ate veggies");
    journal.add_entry("i laugh today");

    PersistantManager pm;
    pm.save(journal, "diary.txt");
    getchar();
    return 0;
}
