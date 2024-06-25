using System.Runtime.InteropServices;
namespace gencs.clang;
public class SelectorTable
{
    protected IntPtr mObjectHandle;
    public static IntPtr AG_getObjectHandle(gencs.clang.SelectorTable obj)
    {
        return obj.mObjectHandle;
    }
    public SelectorTable(IntPtr ObjectHandle)
    {
        mObjectHandle = ObjectHandle;
    }
    [DllImport("libcppglue.so", CallingConvention = CallingConvention.Cdecl)]
    private static extern IntPtr clang_SelectorTable_SelectorTable0();
    public SelectorTable() : this(clang_SelectorTable_SelectorTable0())
    {
    }
}
