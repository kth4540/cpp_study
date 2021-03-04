#include <iostream>
using namespace std;

class USBDevice
{
private:
    long m_id;
public:
    USBDevice(long id) :m_id(id) {}

    long getID() { return m_id; }

    void plugAndPlay() {}
};

class NetworkDevice
{
private:
    long m_id;
public:
    NetworkDevice(long id) :m_id(id) {}

    long getID() { return m_id; }

    void Networking() {}
};

class USBNetworkdevice :public USBDevice, public NetworkDevice
{
public:
    USBNetworkdevice(long usb_id, long net_id)
        :USBDevice(usb_id), NetworkDevice(net_id) {}
};
int main()
{
    USBNetworkdevice d(1024,128);

    d.Networking();
    d.plugAndPlay();
    d.USBDevice::getID();
    d.NetworkDevice::getID();

    return 0;
}

