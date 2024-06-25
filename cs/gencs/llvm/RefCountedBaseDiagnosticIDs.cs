using System.Runtime.InteropServices;
namespace gencs.llvm;
public class RefCountedBaseDiagnosticIDs
{
    protected IntPtr mObjectHandle;
    public static IntPtr AG_getObjectHandle(gencs.llvm.RefCountedBaseDiagnosticIDs obj)
    {
        return obj.mObjectHandle;
    }
    public RefCountedBaseDiagnosticIDs(IntPtr ObjectHandle)
    {
        mObjectHandle = ObjectHandle;
    }
    [DllImport("libcppglue.so", CallingConvention = CallingConvention.Cdecl)]
    private static extern IntPtr llvm_RefCountedBaseDiagnosticIDs_RefCountedBase0();
    protected RefCountedBaseDiagnosticIDs() : this(llvm_RefCountedBaseDiagnosticIDs_RefCountedBase0())
    {
    }
}
