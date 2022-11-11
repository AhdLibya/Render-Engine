#include <iostream>
#include<vulkan/vulkan.h>


using namespace std;


int main() {

    VkApplicationInfo appInfo = {};
    appInfo.sType = VK_STRUCTURE_TYPE_APPLICATION_INFO;
    appInfo.pApplicationName = "AHD";
    appInfo.pEngineName = "AHD Engine";

    VkInstanceCreateInfo instanceInfo = {};
    instanceInfo.sType = VK_STRUCTURE_TYPE_INSTANCE_CREATE_INFO;
    instanceInfo.pApplicationInfo = &appInfo;

    VkInstance Instance;

    VkResult result = vkCreateInstance(&instanceInfo , nullptr , &Instance);
    
    if(result == VK_SUCCESS)
    {
        cout<< "Instance Created Successfully"<< endl;
        cout<< "GoodBye"<< endl;
    }

    return 0;
}