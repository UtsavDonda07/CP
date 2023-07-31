#include<iostream>
#include <Windows.h>
#include <setupapi.h>
#include <devguid.h>
#include <regstr.h>

    // Function to detect and interact with a USB device
    string detectUSBDevice()
{

    // Define variables for device information
    HDEVINFO deviceInfo;
    SP_DEVINFO_DATA deviceInfoData;
    DWORD deviceIndex = 0;
    DWORD dataType;
    char deviceName[MAX_PATH];
    DWORD deviceNameSize;
    HKEY deviceKey;
    DWORD deviceStatus;

    // Define GUID for USB devices
    const GUID usbGuid = {0x36fc9e60, 0xc465, 0x11cf, {0x80, 0x28, 0x00, 0xaa, 0x00, 0x3c, 0xba, 0x9b}};

    // Setup device information
    deviceInfo = SetupDiGetClassDevs(&usbGuid, NULL, NULL, DIGCF_PRESENT | DIGCF_DEVICEINTERFACE);

    // Loop through each USB device
    while (SetupDiEnumDeviceInfo(deviceInfo, deviceIndex, &deviceInfoData))
    {

        // Get the device registry key
        deviceKey = SetupDiOpenDevRegKey(deviceInfo, &deviceInfoData, DICS_FLAG_GLOBAL, 0, DIREG_DEV, KEY_READ);

        // Get the device name from the registry
        deviceNameSize = sizeof(deviceName);
        RegQueryValueEx(deviceKey, "FriendlyName", NULL, &dataType, (LPBYTE)&deviceName, &deviceNameSize);

        // Get the device status from the registry
        deviceStatus = 0;
        deviceNameSize = sizeof(deviceStatus);
        RegQueryValueEx(deviceKey, "ConfigFlags", NULL, &dataType, (LPBYTE)&deviceStatus, &deviceNameSize);

        // Check if the device is a USB mass storage device (i.e. a USB drive)
        if (deviceStatus == CONFIGFLAG_REMOVED && strstr(deviceName, "USB Mass Storage"))
        {
        //    cout << "Detected USB drive: " << deviceName;
        string st=deviceName;
        return st;
        }

        // Increment device index
        deviceIndex++;
    }

    // Clean up
    SetupDiDestroyDeviceInfoList(deviceInfo);
}


// Main function
int main()
{

    // Call detectUSBDevice function
   cout<< detectUSBDevice();

    return 0;
}