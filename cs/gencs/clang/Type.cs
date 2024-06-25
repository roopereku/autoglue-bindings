using System.Runtime.InteropServices;
namespace gencs.clang;
public class Type : gencs.clang.ExtQualsTypeCommonBase
{
    public Type(IntPtr ObjectHandle) : base(ObjectHandle)
    {
    }
    public enum TypeClass : int
    {
        Adjusted = 0,
        Decayed = 1,
        ConstantArray = 2,
        DependentSizedArray = 3,
        IncompleteArray = 4,
        VariableArray = 5,
        Atomic = 6,
        Attributed = 7,
        BTFTagAttributed = 8,
        BitInt = 9,
        BlockPointer = 10,
        Builtin = 11,
        Complex = 12,
        Decltype = 13,
        Auto = 14,
        DeducedTemplateSpecialization = 15,
        DependentAddressSpace = 16,
        DependentBitInt = 17,
        DependentName = 18,
        DependentSizedExtVector = 19,
        DependentTemplateSpecialization = 20,
        DependentVector = 21,
        Elaborated = 22,
        FunctionNoProto = 23,
        FunctionProto = 24,
        InjectedClassName = 25,
        MacroQualified = 26,
        ConstantMatrix = 27,
        DependentSizedMatrix = 28,
        MemberPointer = 29,
        ObjCObjectPointer = 30,
        ObjCObject = 31,
        ObjCInterface = 32,
        ObjCTypeParam = 33,
        PackExpansion = 34,
        Paren = 35,
        Pipe = 36,
        Pointer = 37,
        LValueReference = 38,
        RValueReference = 39,
        SubstTemplateTypeParmPack = 40,
        SubstTemplateTypeParm = 41,
        Enum = 42,
        Record = 43,
        TemplateSpecialization = 44,
        TemplateTypeParm = 45,
        TypeOfExpr = 46,
        TypeOf = 47,
        Typedef = 48,
        UnaryTransform = 49,
        UnresolvedUsing = 50,
        Using = 51,
        Vector = 52,
        ExtVector = 53,
        TypeLast = 53
    }
    [DllImport("libcppglue.so", CallingConvention = CallingConvention.Cdecl)]
    private static extern IntPtr clang_Type_Type0(int tc, IntPtr canon, int Dependence);
    protected Type(gencs.clang.Type.TypeClass tc, gencs.clang.QualType canon, gencs.clang.TypeDependenceScope.TypeDependence Dependence) : this(clang_Type_Type0((int)tc, gencs.clang.QualType.AG_getObjectHandle(canon), (int)Dependence))
    {
    }
}
