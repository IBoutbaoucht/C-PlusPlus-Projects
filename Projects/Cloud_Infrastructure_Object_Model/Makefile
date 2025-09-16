CXX = g++
CXXFLAGS = -std=c++17 -Wall -Wextra

SRCS = main.cpp Container.cpp Server.cpp Pod.cpp KubernetesCluster.cpp Cloud_Util.cpp
OBJS = $(SRCS:.cpp=.o)
TARGET = main

all: $(TARGET)

$(TARGET): $(OBJS)
	$(CXX) $(OBJS) -o $(TARGET)

main.o: main.cpp KubernetesCluster.h Container.h Server.h Pod.h Cloud_Util.h MetricLogger.h

Container.o: Container.cpp Container.h Resource.h

Server.o: Server.cpp Server.h Resource.h

Pod.o: Pod.cpp Pod.h Container.h

KubernetesCluster.o: KubernetesCluster.cpp KubernetesCluster.h Server.h Pod.h CloudExceptions.h

Cloud_Util.o: Cloud_Util.cpp Cloud_Util.h KubernetesCluster.h Pod.h Container.h MetricLogger.h

clean:
	rm -f $(OBJS) $(TARGET)
