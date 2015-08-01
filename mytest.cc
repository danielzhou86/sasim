#include <ns3/core-module.h>

using namespace ns3;

NS_LOG_COMPONENT_DEFINE ("MyTestSimulator");

int
main (int argc, char *argv[])
{
  NS_LOG_UNCOND ("MyTest Simulator");



  Simulator::Run ();
  Simulator::Destroy ();
}
