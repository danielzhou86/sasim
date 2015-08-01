#include <ns3/core-module.h>

using namespace ns3;
using namespace std;

NS_LOG_COMPONENT_DEFINE ("SubstationCommSimulator");

int
main (int argc, char *argv[])
{
  NS_LOG_UNCOND ("SubstationCommSimulator");

  string filePath;

  CommandLine cmd;
  cmd.AddValue("file", "File path of IEEE testing data in PIT ", filePath);
  cmd.Parse(argc, argv);

  ifstream fin(filePath.data(), ios::in);
  if (!fin) {
	  cerr << "File " << filePath << " error!" << endl;
	  return 0;
  }
cout << "File path is: " << filePath << endl;

  Simulator::Run ();
  Simulator::Destroy ();
}
