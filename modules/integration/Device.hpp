#ifndef PROTOMESH_DEVICE_HPP
#define PROTOMESH_DEVICE_HPP

#include <utility>

#include <TransmissionHandler.hpp>

using namespace std;

namespace ProtoMesh {

    class Device {
        TRANSMISSION_HANDLER_T transmissionHandler;

    public:
        explicit Device(TRANSMISSION_HANDLER_T transmissionHandler) : transmissionHandler(std::move(transmissionHandler)) {}

        void requestMetadata() {};
    };

}

#endif //PROTOMESH_DEVICE_HPP
