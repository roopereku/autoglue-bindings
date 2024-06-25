using System.Runtime.InteropServices;
namespace gencs.llvm;
public class ErrorOrStatus
{
    protected IntPtr mObjectHandle;
    public static IntPtr AG_getObjectHandle(gencs.llvm.ErrorOrStatus obj)
    {
        return obj.mObjectHandle;
    }
    public ErrorOrStatus(IntPtr ObjectHandle)
    {
        mObjectHandle = ObjectHandle;
    }
    [DllImport("libcppglue.so", CallingConvention = CallingConvention.Cdecl)]
    private static extern IntPtr llvm_ErrorOrStatus_ErrorOr0(IntPtr EC);
    public ErrorOrStatus(gencs.std.error_code EC) : this(llvm_ErrorOrStatus_ErrorOr0(gencs.std.error_code.AG_getObjectHandle(EC)))
    {
    }
    [DllImport("libcppglue.so", CallingConvention = CallingConvention.Cdecl)]
    private static extern IntPtr llvm_ErrorOrStatus_ErrorOr1(IntPtr Other);
    public ErrorOrStatus(gencs.llvm.ErrorOrStatus Other) : this(llvm_ErrorOrStatus_ErrorOr1(gencs.llvm.ErrorOrStatus.AG_getObjectHandle(Other)))
    {
    }
}
