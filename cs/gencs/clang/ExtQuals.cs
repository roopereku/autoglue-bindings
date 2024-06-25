using System.Runtime.InteropServices;
namespace gencs.clang;
public class ExtQuals : gencs.clang.ExtQualsTypeCommonBase
{
    public ExtQuals(IntPtr ObjectHandle) : base(ObjectHandle)
    {
        baseNode = createBase_Node();
    }
    public readonly gencs.llvm.FoldingSetBase.Node baseNode;
    protected virtual gencs.llvm.FoldingSetBase.Node createBase_Node()
    {
        return new gencs.llvm.FoldingSetBase.Node(mObjectHandle);
    }
    [DllImport("libcppglue.so", CallingConvention = CallingConvention.Cdecl)]
    private static extern IntPtr clang_ExtQuals_ExtQuals0(IntPtr BaseType, IntPtr canon, IntPtr quals);
    public ExtQuals(gencs.clang.Type BaseType, gencs.clang.QualType canon, gencs.clang.Qualifiers quals) : this(clang_ExtQuals_ExtQuals0(gencs.clang.Type.AG_getObjectHandle(BaseType), gencs.clang.QualType.AG_getObjectHandle(canon), gencs.clang.Qualifiers.AG_getObjectHandle(quals)))
    {
    }
}
