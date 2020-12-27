//way1
bool (*pf)(const Sales_data &, const Sales_data &) = compareIsbn;
multiset<Sales_data, pf> bookstore(compareIsbn);
multiset<Sales_data, pf>::iterator it = bookstore.begin();
//way2
multiset<Sales_data, bool(*)(const Sales_data &, const Sales_data &)> bookstore(compareIsbn); 
multiset<Sales_data, bool(*)(const Sales_data &, const Sales_data &)>::iterator it = bookstore.begin();
//way3
using compareType = bool (*)(const Sales_data &lhs, const Sales_data &rhs); 
multiset<Sales_data, compareType> bookstore(compareIsbn); 
multiset<Sales_data, compareType>::iterator it = bookstore.begin();