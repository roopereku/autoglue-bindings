using System.Runtime.InteropServices;
namespace gencs.llvm;
public class RefCountedBaseDiagnosticsEngine
{
    protected IntPtr mObjectHandle;
    public static IntPtr AG_getObjectHandle(gencs.llvm.RefCountedBaseDiagnosticsEngine obj)
    {
        return obj.mObjectHandle;
    }
    public RefCountedBaseDiagnosticsEngine(IntPtr ObjectHandle)
    {
        mObjectHandle = ObjectHandle;
    }
    [DllImport("libcppglue.so", CallingConvention = CallingConvention.Cdecl)]
    private static extern IntPtr llvm_RefCountedBaseDiagnosticsEngine_RefCountedBase0();
    protected RefCountedBaseDiagnosticsEngine() : this(llvm_RefCountedBaseDiagnosticsEngine_RefCountedBase0())
    {
    }
}
