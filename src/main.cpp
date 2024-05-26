#include <iostream>
#include "packet/Import.h"



int main() {
    std::cout << "Hello, World!" << std::endl;
    auto data = (packet_raw_type )malloc(65536);
    ClientBoundPingPacket packet;
    packet_size_type  size = packet.getFullPacket(data);
    std::cout << size << std::endl;
    std::shared_ptr<BasePacket> basePacket = ClientBoundPingPacket::parsePacket(data);
    std:: cout << basePacket->getPacketID()<< std::endl;
    return 0;
}
