using System.Runtime.InteropServices;
namespace gencs.clang;
public class TypeDependenceScope
{
    protected IntPtr mObjectHandle;
    public static IntPtr AG_getObjectHandle(gencs.clang.TypeDependenceScope obj)
    {
        return obj.mObjectHandle;
    }
    public TypeDependenceScope(IntPtr ObjectHandle)
    {
        mObjectHandle = ObjectHandle;
    }
    public enum TypeDependence : int
    {
        UnexpandedPack = 1,
        Instantiation = 2,
        Dependent = 4,
        VariablyModified = 8,
        Error = 16,
        None = 0,
        All = 31,
        DependentInstantiation = 6,
        LLVM_BITMASK_LARGEST_ENUMERATOR = 16
    }
}
