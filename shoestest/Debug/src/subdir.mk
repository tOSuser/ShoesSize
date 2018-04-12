################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/SolutionA.cpp \
../src/SolutionB.cpp \
../src/shoestest.cpp 

OBJS += \
./src/SolutionA.o \
./src/SolutionB.o \
./src/shoestest.o 

CPP_DEPS += \
./src/SolutionA.d \
./src/SolutionB.d \
./src/shoestest.d 


# Each subdirectory must supply rules for building sources it contributes
src/%.o: ../src/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


