#include <iostream>
#include <vector>
#include <list>
#include <set>
#include <map>

using namespace std;

int main()
{
	// Vector
	cout << "==== vector ====" << endl;
	vector<int> vec;

	for (int i = 0; i < 10; ++i)
		vec.push_back(i);

	vector<int>::const_iterator c_itr_vec;
	vector<int>::iterator itr_vec;
	c_itr_vec = vec.begin();
	itr_vec = vec.begin();

	// *itr_vec = 10;
	// *c_itr_vec = 100;
	// c_itr_vec++;
	
	while (itr_vec != vec.end())
	{
		cout << *itr_vec << "  ";
		++itr_vec;
	}	
	cout << endl;

	cout << "begin() > end() : " << (vec.begin() > vec.end()) << endl;
	cout << "begin() == end() : " << (vec.begin() == vec.end()) << endl;
	cout << "begin() == begin() : " << (vec.begin() == vec.begin()) << endl;


	// List
	cout << "\n\n==== List ====" << endl;
	list<int> lst;

	for (int i = 0; i < 10; ++i)
		lst.push_back(i);

	vector<int>::const_iterator itr_lst;
	
	for (auto& itr_lst : lst)
		cout << itr_lst << "  ";
	cout << endl;

	// cout << "begin() > end() : " << (lst.begin() > lst.end()) << endl;
	cout << "begin() == end() : " << (lst.begin() == lst.end()) << endl;
	cout << "begin() == begin() : " << (lst.begin() == lst.begin()) << endl;

}