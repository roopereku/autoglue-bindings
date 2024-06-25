using System.Runtime.InteropServices;
namespace gencs.ag;
public class FunctionEntity : gencs.ag.Entity
{
    public FunctionEntity(IntPtr ObjectHandle) : base(ObjectHandle)
    {
        baseenable_shared_from_thisFunctionEntity = createBase_enable_shared_from_thisFunctionEntity();
    }
    public readonly gencs.std.enable_shared_from_thisFunctionEntity baseenable_shared_from_thisFunctionEntity;
    protected virtual gencs.std.enable_shared_from_thisFunctionEntity createBase_enable_shared_from_thisFunctionEntity()
    {
        return new gencs.std.enable_shared_from_thisFunctionEntity(mObjectHandle);
    }
    [UnmanagedFunctionPointer(CallingConvention.Cdecl)]
    private delegate IntPtr AG_delegate_intercept_resolve0(IntPtr ObjectHandle, IntPtr qualifiedName);
    internal static IntPtr AG_intercept_resolve0(IntPtr ObjectHandle, IntPtr qualifiedName)
    {
        return gencs.std.shared_ptrEntity.AG_getObjectHandle(((((GCHandle)ObjectHandle).Target) as FunctionEntity).resolve(new gencs.std.basic_String_viewCharacter_char_traitsCharacter(qualifiedName)));
    }
    [UnmanagedFunctionPointer(CallingConvention.Cdecl)]
    private delegate void AG_delegate_intercept_onList0(IntPtr ObjectHandle, IntPtr indent);
    internal static void AG_intercept_onList0(IntPtr ObjectHandle, IntPtr indent)
    {
        ((((GCHandle)ObjectHandle).Target) as FunctionEntity).onList(new gencs.std.basic_String_viewCharacter_char_traitsCharacter(indent));
    }
    [UnmanagedFunctionPointer(CallingConvention.Cdecl)]
    private delegate bool AG_delegate_intercept_hasName0(IntPtr ObjectHandle, IntPtr str);
    internal static bool AG_intercept_hasName0(IntPtr ObjectHandle, IntPtr str)
    {
        return ((((GCHandle)ObjectHandle).Target) as FunctionEntity).hasName(new gencs.std.basic_String_viewCharacter_char_traitsCharacter(str));
    }
    [UnmanagedFunctionPointer(CallingConvention.Cdecl)]
    private delegate void AG_delegate_intercept_onInitialize0(IntPtr ObjectHandle);
    internal static void AG_intercept_onInitialize0(IntPtr ObjectHandle)
    {
        ((((GCHandle)ObjectHandle).Target) as FunctionEntity).onInitialize();
    }
    [DllImport("libcppglue.so", CallingConvention = CallingConvention.Cdecl)]
    private static extern void ag_FunctionEntity_AG_initializeInterceptionContext(IntPtr ObjectHandle, IntPtr AG_foreignObject, IntPtr AG_intercept_resolve0, IntPtr AG_intercept_onList0, IntPtr AG_intercept_hasName0, IntPtr AG_intercept_onInitialize0);
    private void AG_initializeInterceptionContext()
    {
        ag_FunctionEntity_AG_initializeInterceptionContext(mObjectHandle, (IntPtr)GCHandle.Alloc(this), Marshal.GetFunctionPointerForDelegate(new AG_delegate_intercept_resolve0(AG_intercept_resolve0)), Marshal.GetFunctionPointerForDelegate(new AG_delegate_intercept_onList0(AG_intercept_onList0)), Marshal.GetFunctionPointerForDelegate(new AG_delegate_intercept_hasName0(AG_intercept_hasName0)), Marshal.GetFunctionPointerForDelegate(new AG_delegate_intercept_onInitialize0(AG_intercept_onInitialize0)));
    }
    public new enum Type : int
    {
        Constructor = 0,
        Destructor = 1,
        MemberFunction = 2,
        Function = 3
    }
    public enum OverloadedOperator : int
    {
        None = 0,
        Addition = 1,
        Subtraction = 2,
        Multiplication = 3,
        Division = 4,
        Modulus = 5,
        Less = 6,
        Greater = 7,
        Equal = 8,
        NotEqual = 9,
        BitwiseAND = 10,
        BitwiseOR = 11,
        BitwiseXOR = 12,
        BitwiseShiftLeft = 13,
        BitwiseShiftRight = 14
    }
    [DllImport("libcppglue.so", CallingConvention = CallingConvention.Cdecl)]
    private static extern IntPtr ag_FunctionEntity_FunctionEntity0(IntPtr returnType, bool overridable, bool overrides, bool Interface, bool staticFunction);
    public FunctionEntity(gencs.std.shared_ptrTypeReferenceEntity returnType, bool overridable, bool overrides, bool Interface, bool staticFunction) : this(ag_FunctionEntity_FunctionEntity0(gencs.std.shared_ptrTypeReferenceEntity.AG_getObjectHandle(returnType), overridable, overrides, Interface, staticFunction))
    {
        AG_initializeInterceptionContext();
    }
    [DllImport("libcppglue.so", CallingConvention = CallingConvention.Cdecl)]
    private static extern IntPtr ag_FunctionEntity_FunctionEntity1(IntPtr param1);
    public FunctionEntity(gencs.ag.FunctionEntity param1) : this(ag_FunctionEntity_FunctionEntity1(gencs.ag.FunctionEntity.AG_getObjectHandle(param1)))
    {
        AG_initializeInterceptionContext();
    }
    [DllImport("libcppglue.so", CallingConvention = CallingConvention.Cdecl)]
    private static extern void ag_FunctionEntity_addParameter0(IntPtr ObjectHandle, IntPtr param);
    public void addParameter(gencs.std.shared_ptrTypeReferenceEntity param)
    {
        ag_FunctionEntity_addParameter0(mObjectHandle, gencs.std.shared_ptrTypeReferenceEntity.AG_getObjectHandle(param));
    }
    [DllImport("libcppglue.so", CallingConvention = CallingConvention.Cdecl)]
    private static extern IntPtr ag_FunctionEntity_getParent0(IntPtr ObjectHandle);
    public override gencs.ag.Entity getParent()
    {
        return new gencs.ag.Entity.ConcreteType(ag_FunctionEntity_getParent0(mObjectHandle));
    }
    [DllImport("libcppglue.so", CallingConvention = CallingConvention.Cdecl)]
    private static extern IntPtr ag_FunctionEntity_getName0(IntPtr ObjectHandle);
    public override gencs.std.basic_StringCharacter_char_traitsCharacter_allocatorCharacter getName()
    {
        return new gencs.std.basic_StringCharacter_char_traitsCharacter_allocatorCharacter(ag_FunctionEntity_getName0(mObjectHandle));
    }
    [DllImport("libcppglue.so", CallingConvention = CallingConvention.Cdecl)]
    private static extern IntPtr ag_FunctionEntity_getGroup0(IntPtr ObjectHandle);
    public gencs.ag.FunctionGroupEntity getGroup()
    {
        return new gencs.ag.FunctionGroupEntity(ag_FunctionEntity_getGroup0(mObjectHandle));
    }
    [DllImport("libcppglue.so", CallingConvention = CallingConvention.Cdecl)]
    private static extern IntPtr ag_FunctionEntity_getHierarchy0(IntPtr ObjectHandle, IntPtr delimiter);
    public override gencs.std.basic_StringCharacter_char_traitsCharacter_allocatorCharacter getHierarchy(gencs.std.basic_StringCharacter_char_traitsCharacter_allocatorCharacter delimiter)
    {
        return new gencs.std.basic_StringCharacter_char_traitsCharacter_allocatorCharacter(ag_FunctionEntity_getHierarchy0(mObjectHandle, gencs.std.basic_StringCharacter_char_traitsCharacter_allocatorCharacter.AG_getObjectHandle(delimiter)));
    }
    [DllImport("libcppglue.so", CallingConvention = CallingConvention.Cdecl)]
    private static extern void ag_FunctionEntity_generateReturnType0(IntPtr ObjectHandle, IntPtr generator, bool asPOD);
    public void generateReturnType(gencs.ag.BindingGenerator generator, bool asPOD)
    {
        ag_FunctionEntity_generateReturnType0(mObjectHandle, gencs.ag.BindingGenerator.AG_getObjectHandle(generator), asPOD);
    }
    [DllImport("libcppglue.so", CallingConvention = CallingConvention.Cdecl)]
    private static extern bool ag_FunctionEntity_generateReturnStatement0(IntPtr ObjectHandle, IntPtr generator, bool asPOD);
    public bool generateReturnStatement(gencs.ag.BindingGenerator generator, bool asPOD)
    {
        return ag_FunctionEntity_generateReturnStatement0(mObjectHandle, gencs.ag.BindingGenerator.AG_getObjectHandle(generator), asPOD);
    }
    [DllImport("libcppglue.so", CallingConvention = CallingConvention.Cdecl)]
    private static extern void ag_FunctionEntity_generateBridgeCall0(IntPtr ObjectHandle, IntPtr generator);
    public void generateBridgeCall(gencs.ag.BindingGenerator generator)
    {
        ag_FunctionEntity_generateBridgeCall0(mObjectHandle, gencs.ag.BindingGenerator.AG_getObjectHandle(generator));
    }
    [DllImport("libcppglue.so", CallingConvention = CallingConvention.Cdecl)]
    private static extern void ag_FunctionEntity_generateParameters0(IntPtr ObjectHandle, IntPtr generator, bool asPOD, bool includeSelf);
    public void generateParameters(gencs.ag.BindingGenerator generator, bool asPOD, bool includeSelf)
    {
        ag_FunctionEntity_generateParameters0(mObjectHandle, gencs.ag.BindingGenerator.AG_getObjectHandle(generator), asPOD, includeSelf);
    }
    [DllImport("libcppglue.so", CallingConvention = CallingConvention.Cdecl)]
    private static extern int ag_FunctionEntity_getParameterCount0(IntPtr ObjectHandle, bool includeSelf);
    public int getParameterCount(bool includeSelf)
    {
        return ag_FunctionEntity_getParameterCount0(mObjectHandle, includeSelf);
    }
    [DllImport("libcppglue.so", CallingConvention = CallingConvention.Cdecl)]
    private static extern IntPtr ag_FunctionEntity_getParameter0(IntPtr ObjectHandle, int index);
    public gencs.ag.TypeReferenceEntity getParameter(int index)
    {
        return new gencs.ag.TypeReferenceEntity(ag_FunctionEntity_getParameter0(mObjectHandle, index));
    }
    [DllImport("libcppglue.so", CallingConvention = CallingConvention.Cdecl)]
    private static extern int ag_FunctionEntity_getType0(IntPtr ObjectHandle);
    public new gencs.ag.FunctionEntity.Type getType()
    {
        return (gencs.ag.FunctionEntity.Type)ag_FunctionEntity_getType0(mObjectHandle);
    }
    [DllImport("libcppglue.so", CallingConvention = CallingConvention.Cdecl)]
    private static extern bool ag_FunctionEntity_needsThisHandle0(IntPtr ObjectHandle);
    public bool needsThisHandle()
    {
        return ag_FunctionEntity_needsThisHandle0(mObjectHandle);
    }
    [DllImport("libcppglue.so", CallingConvention = CallingConvention.Cdecl)]
    private static extern bool ag_FunctionEntity_returnsValue0(IntPtr ObjectHandle);
    public bool returnsValue()
    {
        return ag_FunctionEntity_returnsValue0(mObjectHandle);
    }
    [DllImport("libcppglue.so", CallingConvention = CallingConvention.Cdecl)]
    private static extern bool ag_FunctionEntity_isOverridable0(IntPtr ObjectHandle);
    public bool isOverridable()
    {
        return ag_FunctionEntity_isOverridable0(mObjectHandle);
    }
    [DllImport("libcppglue.so", CallingConvention = CallingConvention.Cdecl)]
    private static extern bool ag_FunctionEntity_isOverride0(IntPtr ObjectHandle);
    public bool isOverride()
    {
        return ag_FunctionEntity_isOverride0(mObjectHandle);
    }
    [DllImport("libcppglue.so", CallingConvention = CallingConvention.Cdecl)]
    private static extern bool ag_FunctionEntity_isInterface0(IntPtr ObjectHandle);
    public bool isInterface()
    {
        return ag_FunctionEntity_isInterface0(mObjectHandle);
    }
    [DllImport("libcppglue.so", CallingConvention = CallingConvention.Cdecl)]
    private static extern IntPtr ag_FunctionEntity_getReturnType0(IntPtr ObjectHandle, bool asPOD);
    public gencs.ag.TypeReferenceEntity getReturnType(bool asPOD)
    {
        return new gencs.ag.TypeReferenceEntity(ag_FunctionEntity_getReturnType0(mObjectHandle, asPOD));
    }
    [DllImport("libcppglue.so", CallingConvention = CallingConvention.Cdecl)]
    private static extern IntPtr ag_FunctionEntity_getBridgeName0(IntPtr ObjectHandle, bool shortened);
    public gencs.std.basic_StringCharacter_char_traitsCharacter_allocatorCharacter getBridgeName(bool shortened)
    {
        return new gencs.std.basic_StringCharacter_char_traitsCharacter_allocatorCharacter(ag_FunctionEntity_getBridgeName0(mObjectHandle, shortened));
    }
    [DllImport("libcppglue.so", CallingConvention = CallingConvention.Cdecl)]
    private static extern bool ag_FunctionEntity_isClassMemberFunction0(IntPtr ObjectHandle);
    public bool isClassMemberFunction()
    {
        return ag_FunctionEntity_isClassMemberFunction0(mObjectHandle);
    }
    [DllImport("libcppglue.so", CallingConvention = CallingConvention.Cdecl)]
    private static extern void ag_FunctionEntity_setOverloadedOperator0(IntPtr ObjectHandle, int overloaded, bool compound);
    public void setOverloadedOperator(gencs.ag.FunctionEntity.OverloadedOperator overloaded, bool compound)
    {
        ag_FunctionEntity_setOverloadedOperator0(mObjectHandle, (int)overloaded, compound);
    }
    [DllImport("libcppglue.so", CallingConvention = CallingConvention.Cdecl)]
    private static extern int ag_FunctionEntity_getOverloadedOperator0(IntPtr ObjectHandle);
    public gencs.ag.FunctionEntity.OverloadedOperator getOverloadedOperator()
    {
        return (gencs.ag.FunctionEntity.OverloadedOperator)ag_FunctionEntity_getOverloadedOperator0(mObjectHandle);
    }
    [DllImport("libcppglue.so", CallingConvention = CallingConvention.Cdecl)]
    private static extern bool ag_FunctionEntity_overloadsCompoundOperator0(IntPtr ObjectHandle);
    public bool overloadsCompoundOperator()
    {
        return ag_FunctionEntity_overloadsCompoundOperator0(mObjectHandle);
    }
    [DllImport("libcppglue.so", CallingConvention = CallingConvention.Cdecl)]
    private static extern void ag_FunctionEntity_setOverloadIndex0(IntPtr ObjectHandle, int index);
    public void setOverloadIndex(int index)
    {
        ag_FunctionEntity_setOverloadIndex0(mObjectHandle, index);
    }
    [DllImport("libcppglue.so", CallingConvention = CallingConvention.Cdecl)]
    private static extern IntPtr ag_FunctionEntity_createOverride0(IntPtr ObjectHandle, bool makeInterface, bool inConcrete);
    public gencs.std.shared_ptrFunctionEntity createOverride(bool makeInterface, bool inConcrete)
    {
        return new gencs.std.shared_ptrFunctionEntity(ag_FunctionEntity_createOverride0(mObjectHandle, makeInterface, inConcrete));
    }
    [DllImport("libcppglue.so", CallingConvention = CallingConvention.Cdecl)]
    private static extern void ag_FunctionEntity_setProtected0(IntPtr ObjectHandle);
    public void setProtected()
    {
        ag_FunctionEntity_setProtected0(mObjectHandle);
    }
    [DllImport("libcppglue.so", CallingConvention = CallingConvention.Cdecl)]
    private static extern bool ag_FunctionEntity_isProtected0(IntPtr ObjectHandle);
    public bool isProtected()
    {
        return ag_FunctionEntity_isProtected0(mObjectHandle);
    }
    [DllImport("libcppglue.so", CallingConvention = CallingConvention.Cdecl)]
    private static extern bool ag_FunctionEntity_shouldPrepareClass0(IntPtr ObjectHandle);
    public bool shouldPrepareClass()
    {
        return ag_FunctionEntity_shouldPrepareClass0(mObjectHandle);
    }
    [DllImport("libcppglue.so", CallingConvention = CallingConvention.Cdecl)]
    private static extern IntPtr ag_FunctionEntity_getOverridden0(IntPtr ObjectHandle);
    public gencs.std.shared_ptrFunctionEntity getOverridden()
    {
        return new gencs.std.shared_ptrFunctionEntity(ag_FunctionEntity_getOverridden0(mObjectHandle));
    }
    [DllImport("libcppglue.so", CallingConvention = CallingConvention.Cdecl)]
    private static extern bool ag_FunctionEntity_isConcreteOverride0(IntPtr ObjectHandle);
    public bool isConcreteOverride()
    {
        return ag_FunctionEntity_isConcreteOverride0(mObjectHandle);
    }
    [DllImport("libcppglue.so", CallingConvention = CallingConvention.Cdecl)]
    private static extern bool ag_FunctionEntity_isStatic0(IntPtr ObjectHandle);
    public bool isStatic()
    {
        return ag_FunctionEntity_isStatic0(mObjectHandle);
    }
    [DllImport("libcppglue.so", CallingConvention = CallingConvention.Cdecl)]
    private static extern IntPtr ag_FunctionEntity_getTypeString0(IntPtr ObjectHandle);
    public override string getTypeString()
    {
        return Marshal.PtrToStringAnsi(ag_FunctionEntity_getTypeString0(mObjectHandle));
    }
    [DllImport("libcppglue.so", CallingConvention = CallingConvention.Cdecl)]
    private static extern void ag_FunctionEntity_onGenerate0(IntPtr ObjectHandle, IntPtr generator);
    protected override void onGenerate(gencs.ag.BindingGenerator generator)
    {
        ag_FunctionEntity_onGenerate0(mObjectHandle, gencs.ag.BindingGenerator.AG_getObjectHandle(generator));
    }
    [DllImport("libcppglue.so", CallingConvention = CallingConvention.Cdecl)]
    private static extern void ag_FunctionEntity_onFirstUse0(IntPtr ObjectHandle);
    protected override void onFirstUse()
    {
        ag_FunctionEntity_onFirstUse0(mObjectHandle);
    }
    public class ConcreteType : gencs.ag.FunctionEntity
    {
        public ConcreteType(IntPtr ObjectHandle) : base(ObjectHandle)
        {
        }
        [DllImport("libcppglue.so", CallingConvention = CallingConvention.Cdecl)]
        private static extern IntPtr ag_FunctionEntity_ConcreteType_resolve0(IntPtr ObjectHandle, IntPtr qualifiedName);
        public override gencs.std.shared_ptrEntity resolve(gencs.std.basic_String_viewCharacter_char_traitsCharacter qualifiedName)
        {
            return new gencs.std.shared_ptrEntity(ag_FunctionEntity_ConcreteType_resolve0(mObjectHandle, gencs.std.basic_String_viewCharacter_char_traitsCharacter.AG_getObjectHandle(qualifiedName)));
        }
        [DllImport("libcppglue.so", CallingConvention = CallingConvention.Cdecl)]
        private static extern void ag_FunctionEntity_ConcreteType_onList0(IntPtr ObjectHandle, IntPtr indent);
        protected override void onList(gencs.std.basic_String_viewCharacter_char_traitsCharacter indent)
        {
            ag_FunctionEntity_ConcreteType_onList0(mObjectHandle, gencs.std.basic_String_viewCharacter_char_traitsCharacter.AG_getObjectHandle(indent));
        }
        [DllImport("libcppglue.so", CallingConvention = CallingConvention.Cdecl)]
        private static extern bool ag_FunctionEntity_ConcreteType_hasName0(IntPtr ObjectHandle, IntPtr str);
        protected override bool hasName(gencs.std.basic_String_viewCharacter_char_traitsCharacter str)
        {
            return ag_FunctionEntity_ConcreteType_hasName0(mObjectHandle, gencs.std.basic_String_viewCharacter_char_traitsCharacter.AG_getObjectHandle(str));
        }
        [DllImport("libcppglue.so", CallingConvention = CallingConvention.Cdecl)]
        private static extern void ag_FunctionEntity_ConcreteType_onInitialize0(IntPtr ObjectHandle);
        protected override void onInitialize()
        {
            ag_FunctionEntity_ConcreteType_onInitialize0(mObjectHandle);
        }
    }
}
