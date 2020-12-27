#include <iostream>
#include <memory>
 
using namespace std;
 
struct destination;
void f(destination *d);
 
struct destination {
    string addr = "192.168.87.130";
};
 
struct connection {
    bool isConnect = false;
};
 
connection connect(destination *dest)
{
    cout << "succeed to connect to : " << dest->addr << endl;
    connection conn;
    conn.isConnect = true;
    return conn;
}
 
void disconnect(connection *conn)
{
    cout << "close connection...\n";
    conn->isConnect = false;
}
 
void end_connection(connection *p)
{
    disconnect(p);
}
 
int main()
{
    destination destin;
    f(&destin);
    return 0;
}
 
void f(destination *d)
{
    connection c = connect(d);
    shared_ptr<connection> pc(&c, end_connection);
//  throw exception();
}