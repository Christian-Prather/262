#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <map>
using namespace std;

map<int, vector<int>> test = {{0 , {1, 2, 3, 4}},
                              {4 , {5, 6, 7}},
                              {6 , {8, 9, 10}}};

//vector <int> index;
//vector <string> test = {"abca", "zbxz", "opqr"};
//vector <int> occurences;
//
//int count_pairs(vector<string> &words)
//{
//   // fill in code here
//   for (string word : words)
//   {
//       vector <int> wordInts;
//       for (int i = 0; i < word.size(); i++)
//       {
//           wordInts.push_back(word[i]);
//       }
//       occurences.push_back( count())
//
//   }
//}



map<int, vector<int>>::iterator i;
int nextBranch = 1;
string result;
bool firstRun = true;

string kitten_path(int kitten, map<int, vector<int>> tree) {
    // fill in code here
    if (firstRun)
    {
        string item = to_string(kitten);
        result += item;
//        cout << kitten << endl;
        firstRun = false;
    }
    if (kitten == 0)
    {
        return result;
    }
for (i = tree.begin(); i != tree.end(); i++)
{
    for (int element : i->second)
    {
        if (element == kitten)
        {
            string item = to_string(i->first);
            result += " ";
            result += item;
            //cout << i->first << endl;
            kitten = i->first;
        }
    }

}
//nextBranch = i->first;
//result.push_back(nextBranch);
kitten_path(kitten, tree);
return  result;


}



#include <vector>
#include <string>
#include <set>

vector<string> whos_dishonest(vector<string> &club1,
                              vector<string> &club2,
                              vector<string> &club3) {
    // fill in code here
    int size1 = club1.size();
    int size2 = club2.size();
    int size3 = club3.size();
    map<int, vector<string>> lists;
    lists[1] = club1;
    lists[2] = club2;
    lists[3] = club3;
    map<int, vector<string>>::iterator i;
//    vector <vector<string>> lists = {club1, club2, club3};
    int maxSize =0;
    vector<string> max;
    vector<string> people;


set<string> users;
vector <string> baddies;
bool skip = false;
int count =0;
for (i = lists.begin(); i != lists.end(); i++)
    {
        for (string element : i->second)
        {
            if (users.count(element) == 0)
            {
                users.insert(element);

            }
            else
            {
                count = 0;
                for (string thing : i->second)
                {
                    if (thing == element)
                    {
                        count++;
                    }
                }
                if (count == 0 )
                {
                   // cout << element << endl;
                    baddies.push_back(element);
                }


            }
        }
    }

//    for (int name = 0; name < baddies.size(); name ++)
//    {
//        if (baddies[name][0]> baddies[name++][0])
//        {
//            string tmp = baddies[name];
//            baddies[name] = baddies[name++];
//            baddies[name++] = tmp;
//
//        }
//    }
    sort(baddies.begin(), baddies.end());
    return baddies;
}

#include <vector>
#include <string>

#include <vector>
#include <string>
bool match = false;
int index = 0;
int which_order(vector<string> &ingredients, vector<string> &orders) {
    // you write code here
    for (string element : orders)
    {
        stringstream ss(element);
        string item;
        ss >> item;
        for (int i = 0; i < ingredients.size(); i++)
        {
            if (ingredients[i] == item)
            {
                match = true;
                index = i;
            }

        }
        if (!match)
        {
            continue;
        }

    }
    return index;
}

int main() {
    string testResult = kitten_path(9, test);
    vector<string> one ={"JOHN","JOHN","FRED","PEG"};
    vector<string> two =  {"PEG","GEORGE"};
    vector<string> three = {"GEORGE","DAVID"};
    //cout << testResult;
    whos_dishonest(one,two,three);
  // cout << count_pairs(test);
    return 0;
}