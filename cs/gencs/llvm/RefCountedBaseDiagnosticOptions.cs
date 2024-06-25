using System.Runtime.InteropServices;
namespace gencs.llvm;
public class RefCountedBaseDiagnosticOptions
{
    protected IntPtr mObjectHandle;
    public static IntPtr AG_getObjectHandle(gencs.llvm.RefCountedBaseDiagnosticOptions obj)
    {
        return obj.mObjectHandle;
    }
    public RefCountedBaseDiagnosticOptions(IntPtr ObjectHandle)
    {
        mObjectHandle = ObjectHandle;
    }
    [DllImport("libcppglue.so", CallingConvention = CallingConvention.Cdecl)]
    private static extern IntPtr llvm_RefCountedBaseDiagnosticOptions_RefCountedBase0();
    protected RefCountedBaseDiagnosticOptions() : this(llvm_RefCountedBaseDiagnosticOptions_RefCountedBase0())
    {
    }
}
