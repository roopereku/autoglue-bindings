using System.Runtime.InteropServices;
namespace gencs.clang;
public class DiagnosticConsumer
{
    protected IntPtr mObjectHandle;
    public static IntPtr AG_getObjectHandle(gencs.clang.DiagnosticConsumer obj)
    {
        return obj.mObjectHandle;
    }
    public DiagnosticConsumer(IntPtr ObjectHandle)
    {
        mObjectHandle = ObjectHandle;
    }
    [DllImport("libcppglue.so", CallingConvention = CallingConvention.Cdecl)]
    private static extern void clang_DiagnosticConsumer_AG_initializeInterceptionContext(IntPtr ObjectHandle, IntPtr AG_foreignObject);
    private void AG_initializeInterceptionContext()
    {
        clang_DiagnosticConsumer_AG_initializeInterceptionContext(mObjectHandle, (IntPtr)GCHandle.Alloc(this));
    }
    [DllImport("libcppglue.so", CallingConvention = CallingConvention.Cdecl)]
    private static extern IntPtr clang_DiagnosticConsumer_DiagnosticConsumer0();
    public DiagnosticConsumer() : this(clang_DiagnosticConsumer_DiagnosticConsumer0())
    {
        AG_initializeInterceptionContext();
    }
}
