CC=g++
LD=ld
AR=ar
LIBS=-lstdc++
RM=rm
TARGET = amdSetting
SRCS = amdSetting.cpp \
       cmdParser.cpp \
       settingManager.cpp

all: $(TARGET) 
$(TARGET): $(SRCS) 
	$(CC) -I./ -g -o $(TARGET) $(SRCS) $(LIBS)
.Phony:clean
clean:
	$(RM) $(TARGET)
