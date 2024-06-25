using System.Runtime.InteropServices;
namespace gencs.llvm;
public class RefCountedBaseASTContext
{
    protected IntPtr mObjectHandle;
    public static IntPtr AG_getObjectHandle(gencs.llvm.RefCountedBaseASTContext obj)
    {
        return obj.mObjectHandle;
    }
    public RefCountedBaseASTContext(IntPtr ObjectHandle)
    {
        mObjectHandle = ObjectHandle;
    }
    [DllImport("libcppglue.so", CallingConvention = CallingConvention.Cdecl)]
    private static extern IntPtr llvm_RefCountedBaseASTContext_RefCountedBase0();
    protected RefCountedBaseASTContext() : this(llvm_RefCountedBaseASTContext_RefCountedBase0())
    {
    }
}
