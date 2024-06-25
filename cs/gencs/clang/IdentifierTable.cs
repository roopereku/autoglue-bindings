using System.Runtime.InteropServices;
namespace gencs.clang;
public class IdentifierTable
{
    protected IntPtr mObjectHandle;
    public static IntPtr AG_getObjectHandle(gencs.clang.IdentifierTable obj)
    {
        return obj.mObjectHandle;
    }
    public IdentifierTable(IntPtr ObjectHandle)
    {
        mObjectHandle = ObjectHandle;
    }
    [DllImport("libcppglue.so", CallingConvention = CallingConvention.Cdecl)]
    private static extern IntPtr clang_IdentifierTable_IdentifierTable0(IntPtr ExternalLookup);
    public IdentifierTable(gencs.clang.IdentifierInfoLookup ExternalLookup) : this(clang_IdentifierTable_IdentifierTable0(gencs.clang.IdentifierInfoLookup.AG_getObjectHandle(ExternalLookup)))
    {
    }
    [DllImport("libcppglue.so", CallingConvention = CallingConvention.Cdecl)]
    private static extern IntPtr clang_IdentifierTable_IdentifierTable1(IntPtr LangOpts, IntPtr ExternalLookup);
    public IdentifierTable(gencs.clang.LangOptions LangOpts, gencs.clang.IdentifierInfoLookup ExternalLookup) : this(clang_IdentifierTable_IdentifierTable1(gencs.clang.LangOptions.AG_getObjectHandle(LangOpts), gencs.clang.IdentifierInfoLookup.AG_getObjectHandle(ExternalLookup)))
    {
    }
    [DllImport("libcppglue.so", CallingConvention = CallingConvention.Cdecl)]
    private static extern IntPtr clang_IdentifierTable_IdentifierTable2(IntPtr param1);
    public IdentifierTable(gencs.clang.IdentifierTable param1) : this(clang_IdentifierTable_IdentifierTable2(gencs.clang.IdentifierTable.AG_getObjectHandle(param1)))
    {
    }
}
