################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../bomberman/Bomb.cpp \
../bomberman/Bomberman.cpp \
../bomberman/Character.cpp \
../bomberman/DestroyableWall.cpp \
../bomberman/Fire.cpp \
../bomberman/Wall.cpp 

OBJS += \
./bomberman/Bomb.o \
./bomberman/Bomberman.o \
./bomberman/Character.o \
./bomberman/DestroyableWall.o \
./bomberman/Fire.o \
./bomberman/Wall.o 

CPP_DEPS += \
./bomberman/Bomb.d \
./bomberman/Bomberman.d \
./bomberman/Character.d \
./bomberman/DestroyableWall.d \
./bomberman/Fire.d \
./bomberman/Wall.d 


# Each subdirectory must supply rules for building sources it contributes
bomberman/%.o: ../bomberman/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: Cross G++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


