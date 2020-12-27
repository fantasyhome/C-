#include <iostream>
#include <memory>
#include <string>
#include <initializer_list>
#include <vector>
#include <stdexcept>

using namespace std;

class StrBlobPtr;

class StrBlob {
    friend class StrBlobPtr;
public:
    using size_type = vector<string>::size_type;
    StrBlob();
    StrBlob(initializer_list<string> il);
    size_type size() const { return data->size(); }
    bool empty() const { return data->empty(); }
    void push_back(const string &s);
    void pop_back();
    //返回string的引用，是因为调用点会使用该string
    //如b.front() = "first"; 
    string& front();
    string& back();
    //只有const StrBlob对象才会调用以下函数 
    const string& front() const;
    const string& back() const;
    StrBlobPtr begin();
    StrBlobPtr end();
private:
    shared_ptr<vector<string>> data;
    void check(size_type i, const string &msg) const; 
}; 

StrBlob::StrBlob(): data(make_shared<vector<string>>())
{
}

StrBlob::StrBlob(initializer_list<string> il): data(make_shared<vector<string>>(il))
{    
}

void StrBlob::check(size_type i, const string &msg) const
{
    if (i >= data->size())
        throw out_of_range(msg);
}

void StrBlob::push_back(const string &s)
{
    data->push_back(s);
}

void StrBlob::pop_back()
{
    check(0, "此StrBlob对象指向一个空vector！\n");
    data->pop_back();
}

string& StrBlob::front()
{
    check(0, "此StrBlob对象指向一个空vector！\n");
    return data->front();
}

string& StrBlob::back()
{
    check(0, "此StrBlob对象指向一个空vector！\n");
    return data->back();
}

const string& StrBlob::front() const
{
    check(0, "此StrBlob对象指向一个空vector！\n");
    cout << "调用对象为const StrBlob！\n";
    return data->front();
}

const string& StrBlob::back() const
{
    check(0, "此StrBlob对象指向一个空vector！\n");
    cout << "调用对象为const StrBlob！\n";
    return data->back();
}

class StrBlobPtr {
public:
    StrBlobPtr(): curr(0) {}
    StrBlobPtr(StrBlob &b, size_t sz = 0): wptr(b.data), curr(sz) {}
    string& deref() const;
    StrBlobPtr& incr(); 
private:
    weak_ptr<vector<string>> wptr;
    size_t curr;
    shared_ptr<vector<string>> check(size_t i, const string &msg) const;
};

shared_ptr<vector<string>> StrBlobPtr::check(size_t i, const string &msg) const
{
    auto ret = wptr.lock();
    if (!ret)
        throw runtime_error("要访问的vector<string>对象不存在！\n");
    if (i >= ret->size())
        throw out_of_range(msg);
    return ret;
}

string& StrBlobPtr::deref() const
{
    auto p = check(curr, "当前下标不合法！\n");
    return (*p)[curr]; 
}

StrBlobPtr& StrBlobPtr::incr()
{
    check(curr, "不能继续递增了\n");
    ++curr;
    return *this;
}

StrBlobPtr StrBlob::begin() 
{
    return StrBlobPtr(*this); 
}

StrBlobPtr StrBlob::end() 
{ 
    return StrBlobPtr(*this, data->size()); 
}

int main()
{
    StrBlob b1{"mon", "tue", "wed", "thu", "fri"};
    StrBlobPtr p(b1, 3);
    cout << p.deref() << endl;            //访问p当前指向的元素 
    cout << p.incr().deref() << endl;    //先递增p，再访问元素 
    p = b1.begin();
    cout << p.deref() << endl;
    return 0; 
}