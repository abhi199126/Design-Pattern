#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include <tuple>
#include <memory>
#include <sstream>

using namespace std;
struct HtmlElement
{
    struct name, text;
    vector <HtmlElement> element;
    const size_t indent_size = 2;
    HtmlElement(){}
    HtmlElement (const string &name, const string &text): name(name), text(text){}
    string str(int indent =0) const {
      ostringstream oss;
      string i(indent_size*indent, ' ');
        
    }
};
int main(){
    auto text = "hello";
    string output;
    output += "<p>";
    output += text;
    output += "</p>";
    cout<< output<<endl;
    string words[] = {"hello", "world"};
    ostringstream oss;
    oss << "<ul>";
    for( auto w: words)
        oss<<" <li>"<<w << "</li>";
    oss<<"</ul>";
    cout<<oss.str()<<endl;
    return 0;
}
