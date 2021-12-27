std::string uint32_to_ip(uint32_t ip){
  std::string ipStr = "";
  for (int i = 0; i < 4; i++)
  {
    ipStr = std::to_string(ip % 256) + ipStr;
    // std::cout << ipStr << std::endl;

    ip /= 256;

    if (i != 3) {
        ipStr = '.' + ipStr;
    }
  }
  return ipStr;
}
