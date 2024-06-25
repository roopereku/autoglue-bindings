using System.Runtime.InteropServices;
namespace gencs.llvm;
public class SmallVectorImplCharacter : gencs.llvm.SmallVectorTemplateBaseCharacter_1
{
    public SmallVectorImplCharacter(IntPtr ObjectHandle) : base(ObjectHandle)
    {
    }
    [DllImport("libcppglue.so", CallingConvention = CallingConvention.Cdecl)]
    private static extern IntPtr llvm_SmallVectorImplCharacter_SmallVectorImpl0(int N);
    protected SmallVectorImplCharacter(int N) : this(llvm_SmallVectorImplCharacter_SmallVectorImpl0(N))
    {
    }
}
