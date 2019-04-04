using CommandAndConquer.CLI.Core;
using libModSecurityManaged;

namespace ModSecurityCSharpExample
{
    class Program
    {
        static void Main(string[] args)
        {
            Processor.ProcessArguments(args);
            new ModSecurityManaged();
        }
    }
}
