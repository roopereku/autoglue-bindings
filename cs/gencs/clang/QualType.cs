using System.Runtime.InteropServices;
namespace gencs.clang;
public class QualType
{
    protected IntPtr mObjectHandle;
    public static IntPtr AG_getObjectHandle(gencs.clang.QualType obj)
    {
        return obj.mObjectHandle;
    }
    public QualType(IntPtr ObjectHandle)
    {
        mObjectHandle = ObjectHandle;
    }
    [DllImport("libcppglue.so", CallingConvention = CallingConvention.Cdecl)]
    private static extern IntPtr clang_QualType_QualType0();
    public QualType() : this(clang_QualType_QualType0())
    {
    }
    [DllImport("libcppglue.so", CallingConvention = CallingConvention.Cdecl)]
    private static extern IntPtr clang_QualType_QualType1(IntPtr Ptr, int Quals);
    public QualType(gencs.clang.Type Ptr, int Quals) : this(clang_QualType_QualType1(gencs.clang.Type.AG_getObjectHandle(Ptr), Quals))
    {
    }
    [DllImport("libcppglue.so", CallingConvention = CallingConvention.Cdecl)]
    private static extern IntPtr clang_QualType_QualType2(IntPtr Ptr, int Quals);
    public QualType(gencs.clang.ExtQuals Ptr, int Quals) : this(clang_QualType_QualType2(gencs.clang.ExtQuals.AG_getObjectHandle(Ptr), Quals))
    {
    }
    [DllImport("libcppglue.so", CallingConvention = CallingConvention.Cdecl)]
    private static extern IntPtr clang_QualType_QualType3(IntPtr param1);
    public QualType(gencs.clang.QualType param1) : this(clang_QualType_QualType3(gencs.clang.QualType.AG_getObjectHandle(param1)))
    {
    }
}
