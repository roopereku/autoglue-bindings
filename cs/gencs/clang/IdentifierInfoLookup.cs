using System.Runtime.InteropServices;
namespace gencs.clang;
public abstract class IdentifierInfoLookup
{
    protected IntPtr mObjectHandle;
    public static IntPtr AG_getObjectHandle(gencs.clang.IdentifierInfoLookup obj)
    {
        return obj.mObjectHandle;
    }
    public IdentifierInfoLookup(IntPtr ObjectHandle)
    {
        mObjectHandle = ObjectHandle;
    }
    [UnmanagedFunctionPointer(CallingConvention.Cdecl)]
    private delegate IntPtr AG_delegate_intercept_get0(IntPtr ObjectHandle, IntPtr Name);
    internal static IntPtr AG_intercept_get0(IntPtr ObjectHandle, IntPtr Name)
    {
        return gencs.clang.IdentifierInfo.AG_getObjectHandle(((((GCHandle)ObjectHandle).Target) as IdentifierInfoLookup).get(new gencs.llvm.StringRef(Name)));
    }
    [DllImport("libcppglue.so", CallingConvention = CallingConvention.Cdecl)]
    private static extern void clang_IdentifierInfoLookup_AG_initializeInterceptionContext(IntPtr ObjectHandle, IntPtr AG_foreignObject, IntPtr AG_intercept_get0);
    private void AG_initializeInterceptionContext()
    {
        clang_IdentifierInfoLookup_AG_initializeInterceptionContext(mObjectHandle, (IntPtr)GCHandle.Alloc(this), Marshal.GetFunctionPointerForDelegate(new AG_delegate_intercept_get0(AG_intercept_get0)));
    }
    public abstract gencs.clang.IdentifierInfo get(gencs.llvm.StringRef Name);
    public class ConcreteType : gencs.clang.IdentifierInfoLookup
    {
        public ConcreteType(IntPtr ObjectHandle) : base(ObjectHandle)
        {
        }
        [DllImport("libcppglue.so", CallingConvention = CallingConvention.Cdecl)]
        private static extern IntPtr clang_IdentifierInfoLookup_ConcreteType_get0(IntPtr ObjectHandle, IntPtr Name);
        public override gencs.clang.IdentifierInfo get(gencs.llvm.StringRef Name)
        {
            return new gencs.clang.IdentifierInfo(clang_IdentifierInfoLookup_ConcreteType_get0(mObjectHandle, gencs.llvm.StringRef.AG_getObjectHandle(Name)));
        }
    }
}
