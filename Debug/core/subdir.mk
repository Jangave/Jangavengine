################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../core/Ambient.cpp \
../core/Body.cpp \
../core/Drawable.cpp \
../core/Drawer.cpp \
../core/Entity.cpp \
../core/Image.cpp \
../core/Map.cpp \
../core/Node.cpp \
../core/Object.cpp \
../core/Particle.cpp \
../core/Position.cpp \
../core/Tangible.cpp \
../core/Updateable.cpp \
../core/Window.cpp 

OBJS += \
./core/Ambient.o \
./core/Body.o \
./core/Drawable.o \
./core/Drawer.o \
./core/Entity.o \
./core/Image.o \
./core/Map.o \
./core/Node.o \
./core/Object.o \
./core/Particle.o \
./core/Position.o \
./core/Tangible.o \
./core/Updateable.o \
./core/Window.o 

CPP_DEPS += \
./core/Ambient.d \
./core/Body.d \
./core/Drawable.d \
./core/Drawer.d \
./core/Entity.d \
./core/Image.d \
./core/Map.d \
./core/Node.d \
./core/Object.d \
./core/Particle.d \
./core/Position.d \
./core/Tangible.d \
./core/Updateable.d \
./core/Window.d 


# Each subdirectory must supply rules for building sources it contributes
core/%.o: ../core/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: Cross G++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


