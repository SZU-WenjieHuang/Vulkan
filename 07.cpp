/*
Certainly! Here's a breakdown of what each section of the code is doing:

Header and Library Inclusions: The code starts by including necessary headers, such as GLFW/glfw3.h, and standard C++ libraries.

Global Variables and Constants: Global variables and constants are declared, including the width and height of the window, validation layers, device extensions, and a flag for enabling validation layers.

Debug Utility Functions: Two utility functions, CreateDebugUtilsMessengerEXT and DestroyDebugUtilsMessengerEXT, are defined for creating and destroying the debug messenger.

Structs: Two structs, QueueFamilyIndices and SwapChainSupportDetails, are defined for storing information about queue families and swap chain support.

Application Class: The HelloTriangleApplication class is defined, encapsulating the entire application.

Application Methods: Inside the HelloTriangleApplication class, several methods are defined:

run(): The main entry point of the application. It calls other methods to initialize Vulkan, create the window, run the main loop, and perform cleanup.
initWindow(): Initializes the GLFW library, creates a window, and sets the required hints.
initVulkan(): Calls other methods to create the Vulkan instance, set up the debug messenger, create a surface, pick a physical device, create a logical device, and create the swap chain and image views.
mainLoop(): Enters the main application loop, where it polls for events.
cleanup(): Cleans up resources and destroys Vulkan objects.
Vulkan Initialization: Inside initVulkan(), several methods are called to set up Vulkan:

createInstance(): Creates the Vulkan instance, including application and engine information.
populateDebugMessengerCreateInfo(): Populates the debug messenger creation info structure.
setupDebugMessenger(): Sets up the debug messenger if validation layers are enabled.
createSurface(): Creates the window surface using GLFW.
pickPhysicalDevice(): Enumerates and selects a suitable physical device (GPU) for Vulkan rendering.
createLogicalDevice(): Creates the logical device and queues for graphics and presentation.
createSwapChain(): Creates the swap chain, including image format, presentation mode, and extent.
createImageViews(): Creates image views for each image in the swap chain.
Swap Chain Configuration: Additional methods are defined to handle swap chain configuration:

chooseSwapSurfaceFormat(): Selects the best surface format for the swap chain.
chooseSwapPresentMode(): Selects the best presentation mode for the swap chain.
chooseSwapExtent(): Selects the swap extent (resolution) for the swap chain.
querySwapChainSupport(): Queries the device for swap chain support details.
Device Suitability Check: Two methods are provided to check if the selected physical device is suitable for rendering:

isDeviceSuitable(): Checks if the device meets the requirements for the application.
checkDeviceExtensionSupport(): Checks if the required device extensions are supported.
The remaining code in the last section (if __name__ == "__main__":) is not relevant to this C++ code and can be ignored.

头文件和库引入：代码开始包含必要的头文件，如GLFW/glfw3.h，以及标准C++库。

全局变量和常量：声明全局变量和常量，包括窗口的宽度和高度、验证层、设备扩展以及启用验证层的标志。

调试工具函数：定义了两个实用函数，CreateDebugUtilsMessengerEXT和DestroyDebugUtilsMessengerEXT，用于创建和销毁调试消息处理器。

结构体：定义了两个结构体，QueueFamilyIndices和SwapChainSupportDetails，用于存储关于队列族和交换链支持的信息。

应用程序类：定义了HelloTriangleApplication类，封装整个应用程序。

应用程序方法：在HelloTriangleApplication类内部，定义了几个方法：

run()：应用程序的主入口点。它调用其他方法来初始化Vulkan，创建窗口，运行主循环，并进行清理。
initWindow()：初始化GLFW库，创建窗口，并设置所需的提示。
initVulkan()：调用其他方法来创建Vulkan实例，设置调试消息处理器，创建表面，选择物理设备，创建逻辑设备，并创建交换链和图像视图。
mainLoop()：进入主应用程序循环，在循环中获取事件。
cleanup()：清理资源并销毁Vulkan对象。
Vulkan初始化：在initVulkan()内部，调用了几个方法来设置Vulkan：

createInstance()：创建Vulkan实例，包括应用程序和引擎信息。
populateDebugMessengerCreateInfo()：填充调试消息处理器创建信息结构。
setupDebugMessenger()：如果启用了验证层，则设置调试消息处理器。
createSurface()：使用GLFW创建窗口表面。
pickPhysicalDevice()：枚举并选择适合的物理设备（GPU）用于Vulkan渲染。
createLogicalDevice()：创建逻辑设备和用于图形和呈现的队列。
createSwapChain()：创建交换链，包括图像格式、呈现模式和范围。
createImageViews()：为交换链中的每个图像创建图像视图。
交换链配置：提供了额外的方法来处理交换链配置：

chooseSwapSurfaceFormat()：选择最适合交换链的表面格式。
chooseSwapPresentMode()：选择最佳的呈现模式用于交换链。
chooseSwapExtent()：选择交换链的范围（分辨率）。
querySwapChainSupport()：查询设备的交换链支持详细信息。
设备适用性检查：提供了两个方法来检查所选的物理设备是否适合渲染：

isDeviceSuitable()：检查设备是否满足应用程序的要求。
checkDeviceExtensionSupport()：检查是否支持所需的设备扩展。



*/
