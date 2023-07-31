#include <iostream>
#include <fstream>
#include <string>

using namespace std;

const string usbfs_path = "/sys/bus/usb/devices/";
// 
int main() {
    ifstream usbfs_dir(usbfs_path);
    if (!usbfs_dir) {
        cerr << "Failed to open USB device file system directory " << usbfs_path << endl;
        return 1;
    }

    string dir_name;
    while (getline(usbfs_dir, dir_name)) {
        if (dir_name.find("mass_storage") != string::npos) {
            size_t vid_pos = dir_name.find("Vendor=");
            size_t pid_pos = dir_name.find("ProdID=");
            string vid = dir_name.substr(vid_pos + 7, 4);
            string pid = dir_name.substr(pid_pos + 7, 4);

            cout << "Found USB Mass Storage Device:" << endl;
            cout << "Vendor ID: " << vid << endl;
            cout << "Product ID: " << pid << endl;
        }
    }

    return 0;
}
