cmake_minimum_required(VERSION 3.10)
project(AP4A_Simulator CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(simulator
    src/main.cpp
    src/Data.cpp
    src/Server.cpp
    src/Sensor.cpp
    src/Scheduler.cpp
    src/sensors/TemperatureSensor.cpp
    src/sensors/HumiditySensor.cpp
    src/sensors/SoundSensor.cpp
    src/sensors/LightSensor.cpp
)

target_include_directories(simulator PRIVATE include)
target_compile_options(simulator PRIVATE -Wall -Wextra)
