using Uno;
using Uno.Collections;
using Uno.UX;
using Uno.IO;
using Outracks.Simulator;
using Outracks.Simulator.Bytecode;
using Outracks.Simulator.Runtime;
using Outracks.Simulator.Client;
namespace Outracks.Simulator 
{ 
	public class GeneratedApplication : Outracks.Simulator.Client.Application
	{
		public GeneratedApplication()
			: base(
				new [] 
				{new Uno.Net.IPEndPoint(Uno.Net.IPAddress.Parse("127.0.0.1"), 12124), new Uno.Net.IPEndPoint(Uno.Net.IPAddress.Parse("10.1.41.145"), 12124), new Uno.Net.IPEndPoint(Uno.Net.IPAddress.Parse("169.254.218.62"), 12124)},"/Users/jaeyounchae/Documents/fuse/DreamPlus_popup/DreamPlus-popup.unoproj",new string[] 
				{ })
		{
			Runtime.Bundle.Initialize("DreamPlus-popup");

			if defined(DotNet)
				Reflection = new DotNetReflectionWrapper(DotNetReflection.Load(""));
			if defined(CPLUSPLUS)
				Reflection = new NativeReflection(new SimpleTypeMap());
		}
	}
}