using System.Runtime.InteropServices;
namespace gencs.ag;
public abstract class Entity
{
    protected IntPtr mObjectHandle;
    public static IntPtr AG_getObjectHandle(gencs.ag.Entity obj)
    {
        return obj.mObjectHandle;
    }
    public Entity(IntPtr ObjectHandle)
    {
        mObjectHandle = ObjectHandle;
    }
    [UnmanagedFunctionPointer(CallingConvention.Cdecl)]
    private delegate IntPtr AG_delegate_intercept_getParent0(IntPtr ObjectHandle);
    internal static IntPtr AG_intercept_getParent0(IntPtr ObjectHandle)
    {
        return gencs.ag.Entity.AG_getObjectHandle(((((GCHandle)ObjectHandle).Target) as Entity).getParent());
    }
    [UnmanagedFunctionPointer(CallingConvention.Cdecl)]
    private delegate IntPtr AG_delegate_intercept_resolve0(IntPtr ObjectHandle, IntPtr qualifiedName);
    internal static IntPtr AG_intercept_resolve0(IntPtr ObjectHandle, IntPtr qualifiedName)
    {
        return gencs.std.shared_ptrEntity.AG_getObjectHandle(((((GCHandle)ObjectHandle).Target) as Entity).resolve(new gencs.std.basic_String_viewCharacter_char_traitsCharacter(qualifiedName)));
    }
    [UnmanagedFunctionPointer(CallingConvention.Cdecl)]
    private delegate IntPtr AG_delegate_intercept_getName0(IntPtr ObjectHandle);
    internal static IntPtr AG_intercept_getName0(IntPtr ObjectHandle)
    {
        return gencs.std.basic_StringCharacter_char_traitsCharacter_allocatorCharacter.AG_getObjectHandle(((((GCHandle)ObjectHandle).Target) as Entity).getName());
    }
    [UnmanagedFunctionPointer(CallingConvention.Cdecl)]
    private delegate IntPtr AG_delegate_intercept_getHierarchy0(IntPtr ObjectHandle, IntPtr delimiter);
    internal static IntPtr AG_intercept_getHierarchy0(IntPtr ObjectHandle, IntPtr delimiter)
    {
        return gencs.std.basic_StringCharacter_char_traitsCharacter_allocatorCharacter.AG_getObjectHandle(((((GCHandle)ObjectHandle).Target) as Entity).getHierarchy(new gencs.std.basic_StringCharacter_char_traitsCharacter_allocatorCharacter(delimiter)));
    }
    [UnmanagedFunctionPointer(CallingConvention.Cdecl)]
    private delegate string AG_delegate_intercept_getTypeString0(IntPtr ObjectHandle);
    internal static string AG_intercept_getTypeString0(IntPtr ObjectHandle)
    {
        return ((((GCHandle)ObjectHandle).Target) as Entity).getTypeString();
    }
    [UnmanagedFunctionPointer(CallingConvention.Cdecl)]
    private delegate void AG_delegate_intercept_onList0(IntPtr ObjectHandle, IntPtr indent);
    internal static void AG_intercept_onList0(IntPtr ObjectHandle, IntPtr indent)
    {
        ((((GCHandle)ObjectHandle).Target) as Entity).onList(new gencs.std.basic_String_viewCharacter_char_traitsCharacter(indent));
    }
    [UnmanagedFunctionPointer(CallingConvention.Cdecl)]
    private delegate bool AG_delegate_intercept_hasName0(IntPtr ObjectHandle, IntPtr str);
    internal static bool AG_intercept_hasName0(IntPtr ObjectHandle, IntPtr str)
    {
        return ((((GCHandle)ObjectHandle).Target) as Entity).hasName(new gencs.std.basic_String_viewCharacter_char_traitsCharacter(str));
    }
    [UnmanagedFunctionPointer(CallingConvention.Cdecl)]
    private delegate void AG_delegate_intercept_onInitialize0(IntPtr ObjectHandle);
    internal static void AG_intercept_onInitialize0(IntPtr ObjectHandle)
    {
        ((((GCHandle)ObjectHandle).Target) as Entity).onInitialize();
    }
    [UnmanagedFunctionPointer(CallingConvention.Cdecl)]
    private delegate void AG_delegate_intercept_onGenerate0(IntPtr ObjectHandle, IntPtr generator);
    internal static void AG_intercept_onGenerate0(IntPtr ObjectHandle, IntPtr generator)
    {
        ((((GCHandle)ObjectHandle).Target) as Entity).onGenerate(new gencs.ag.BindingGenerator(generator));
    }
    [UnmanagedFunctionPointer(CallingConvention.Cdecl)]
    private delegate void AG_delegate_intercept_onFirstUse0(IntPtr ObjectHandle);
    internal static void AG_intercept_onFirstUse0(IntPtr ObjectHandle)
    {
        ((((GCHandle)ObjectHandle).Target) as Entity).onFirstUse();
    }
    [DllImport("libcppglue.so", CallingConvention = CallingConvention.Cdecl)]
    private static extern void ag_Entity_AG_initializeInterceptionContext(IntPtr ObjectHandle, IntPtr AG_foreignObject, IntPtr AG_intercept_getParent0, IntPtr AG_intercept_resolve0, IntPtr AG_intercept_getName0, IntPtr AG_intercept_getHierarchy0, IntPtr AG_intercept_getTypeString0, IntPtr AG_intercept_onList0, IntPtr AG_intercept_hasName0, IntPtr AG_intercept_onInitialize0, IntPtr AG_intercept_onGenerate0, IntPtr AG_intercept_onFirstUse0);
    private void AG_initializeInterceptionContext()
    {
        ag_Entity_AG_initializeInterceptionContext(mObjectHandle, (IntPtr)GCHandle.Alloc(this), Marshal.GetFunctionPointerForDelegate(new AG_delegate_intercept_getParent0(AG_intercept_getParent0)), Marshal.GetFunctionPointerForDelegate(new AG_delegate_intercept_resolve0(AG_intercept_resolve0)), Marshal.GetFunctionPointerForDelegate(new AG_delegate_intercept_getName0(AG_intercept_getName0)), Marshal.GetFunctionPointerForDelegate(new AG_delegate_intercept_getHierarchy0(AG_intercept_getHierarchy0)), Marshal.GetFunctionPointerForDelegate(new AG_delegate_intercept_getTypeString0(AG_intercept_getTypeString0)), Marshal.GetFunctionPointerForDelegate(new AG_delegate_intercept_onList0(AG_intercept_onList0)), Marshal.GetFunctionPointerForDelegate(new AG_delegate_intercept_hasName0(AG_intercept_hasName0)), Marshal.GetFunctionPointerForDelegate(new AG_delegate_intercept_onInitialize0(AG_intercept_onInitialize0)), Marshal.GetFunctionPointerForDelegate(new AG_delegate_intercept_onGenerate0(AG_intercept_onGenerate0)), Marshal.GetFunctionPointerForDelegate(new AG_delegate_intercept_onFirstUse0(AG_intercept_onFirstUse0)));
    }
    public enum Type : int
    {
        Scope = 0,
        Function = 1,
        FunctionGroup = 2,
        Type = 3,
        TypeReference = 4,
        EnumEntry = 5
    }
    [DllImport("libcppglue.so", CallingConvention = CallingConvention.Cdecl)]
    private static extern IntPtr ag_Entity_Entity0(int type, IntPtr name);
    public Entity(gencs.ag.Entity.Type type, gencs.std.basic_String_viewCharacter_char_traitsCharacter name) : this(ag_Entity_Entity0((int)type, gencs.std.basic_String_viewCharacter_char_traitsCharacter.AG_getObjectHandle(name)))
    {
        AG_initializeInterceptionContext();
    }
    [DllImport("libcppglue.so", CallingConvention = CallingConvention.Cdecl)]
    private static extern IntPtr ag_Entity_Entity1(IntPtr param1);
    public Entity(gencs.ag.Entity param1) : this(ag_Entity_Entity1(gencs.ag.Entity.AG_getObjectHandle(param1)))
    {
        AG_initializeInterceptionContext();
    }
    [DllImport("libcppglue.so", CallingConvention = CallingConvention.Cdecl)]
    private static extern void ag_Entity_addChild0(IntPtr ObjectHandle, IntPtr child);
    public void addChild(gencs.std.shared_ptrEntity child)
    {
        ag_Entity_addChild0(mObjectHandle, gencs.std.shared_ptrEntity.AG_getObjectHandle(child));
    }
    [DllImport("libcppglue.so", CallingConvention = CallingConvention.Cdecl)]
    private static extern bool ag_Entity_isRoot0(IntPtr ObjectHandle);
    public bool isRoot()
    {
        return ag_Entity_isRoot0(mObjectHandle);
    }
    [DllImport("libcppglue.so", CallingConvention = CallingConvention.Cdecl)]
    private static extern IntPtr ag_Entity_getParent0(IntPtr ObjectHandle);
    public virtual gencs.ag.Entity getParent()
    {
        return new gencs.ag.Entity.ConcreteType(ag_Entity_getParent0(mObjectHandle));
    }
    [DllImport("libcppglue.so", CallingConvention = CallingConvention.Cdecl)]
    private static extern void ag_Entity_initializeContext0(IntPtr ObjectHandle, IntPtr ctx);
    public void initializeContext(gencs.std.shared_ptrEntityContext ctx)
    {
        ag_Entity_initializeContext0(mObjectHandle, gencs.std.shared_ptrEntityContext.AG_getObjectHandle(ctx));
    }
    [DllImport("libcppglue.so", CallingConvention = CallingConvention.Cdecl)]
    private static extern IntPtr ag_Entity_getContext0(IntPtr ObjectHandle);
    public gencs.std.shared_ptrEntityContext getContext()
    {
        return new gencs.std.shared_ptrEntityContext(ag_Entity_getContext0(mObjectHandle));
    }
    [DllImport("libcppglue.so", CallingConvention = CallingConvention.Cdecl)]
    private static extern IntPtr ag_Entity_resolve0(IntPtr ObjectHandle, IntPtr qualifiedName);
    public virtual gencs.std.shared_ptrEntity resolve(gencs.std.basic_String_viewCharacter_char_traitsCharacter qualifiedName)
    {
        return new gencs.std.shared_ptrEntity(ag_Entity_resolve0(mObjectHandle, gencs.std.basic_String_viewCharacter_char_traitsCharacter.AG_getObjectHandle(qualifiedName)));
    }
    [DllImport("libcppglue.so", CallingConvention = CallingConvention.Cdecl)]
    private static extern IntPtr ag_Entity_getName0(IntPtr ObjectHandle);
    public virtual gencs.std.basic_StringCharacter_char_traitsCharacter_allocatorCharacter getName()
    {
        return new gencs.std.basic_StringCharacter_char_traitsCharacter_allocatorCharacter(ag_Entity_getName0(mObjectHandle));
    }
    [DllImport("libcppglue.so", CallingConvention = CallingConvention.Cdecl)]
    private static extern IntPtr ag_Entity_getHierarchy0(IntPtr ObjectHandle, IntPtr delimiter);
    public virtual gencs.std.basic_StringCharacter_char_traitsCharacter_allocatorCharacter getHierarchy(gencs.std.basic_StringCharacter_char_traitsCharacter_allocatorCharacter delimiter)
    {
        return new gencs.std.basic_StringCharacter_char_traitsCharacter_allocatorCharacter(ag_Entity_getHierarchy0(mObjectHandle, gencs.std.basic_StringCharacter_char_traitsCharacter_allocatorCharacter.AG_getObjectHandle(delimiter)));
    }
    [DllImport("libcppglue.so", CallingConvention = CallingConvention.Cdecl)]
    private static extern void ag_Entity_generate0(IntPtr ObjectHandle, IntPtr generator);
    public void generate(gencs.ag.BindingGenerator generator)
    {
        ag_Entity_generate0(mObjectHandle, gencs.ag.BindingGenerator.AG_getObjectHandle(generator));
    }
    [DllImport("libcppglue.so", CallingConvention = CallingConvention.Cdecl)]
    private static extern void ag_Entity_resetGenerationState0(IntPtr ObjectHandle, IntPtr generator, bool resetEntityContext);
    public void resetGenerationState(gencs.ag.BindingGenerator generator, bool resetEntityContext)
    {
        ag_Entity_resetGenerationState0(mObjectHandle, gencs.ag.BindingGenerator.AG_getObjectHandle(generator), resetEntityContext);
    }
    [DllImport("libcppglue.so", CallingConvention = CallingConvention.Cdecl)]
    private static extern void ag_Entity_initializeGenerationContext0(IntPtr ObjectHandle, IntPtr generator);
    public void initializeGenerationContext(gencs.ag.BindingGenerator generator)
    {
        ag_Entity_initializeGenerationContext0(mObjectHandle, gencs.ag.BindingGenerator.AG_getObjectHandle(generator));
    }
    [DllImport("libcppglue.so", CallingConvention = CallingConvention.Cdecl)]
    private static extern bool ag_Entity_isGenerated0(IntPtr ObjectHandle);
    public bool isGenerated()
    {
        return ag_Entity_isGenerated0(mObjectHandle);
    }
    [DllImport("libcppglue.so", CallingConvention = CallingConvention.Cdecl)]
    private static extern void ag_Entity_use0(IntPtr ObjectHandle);
    public void use()
    {
        ag_Entity_use0(mObjectHandle);
    }
    [DllImport("libcppglue.so", CallingConvention = CallingConvention.Cdecl)]
    private static extern void ag_Entity_useAll0(IntPtr ObjectHandle);
    public void useAll()
    {
        ag_Entity_useAll0(mObjectHandle);
    }
    [DllImport("libcppglue.so", CallingConvention = CallingConvention.Cdecl)]
    private static extern int ag_Entity_getType0(IntPtr ObjectHandle);
    public gencs.ag.Entity.Type getType()
    {
        return (gencs.ag.Entity.Type)ag_Entity_getType0(mObjectHandle);
    }
    [DllImport("libcppglue.so", CallingConvention = CallingConvention.Cdecl)]
    private static extern int ag_Entity_getUsages0(IntPtr ObjectHandle);
    public int getUsages()
    {
        return ag_Entity_getUsages0(mObjectHandle);
    }
    [DllImport("libcppglue.so", CallingConvention = CallingConvention.Cdecl)]
    private static extern void ag_Entity_disableNewUsages0(IntPtr ObjectHandle);
    public void disableNewUsages()
    {
        ag_Entity_disableNewUsages0(mObjectHandle);
    }
    public abstract string getTypeString();
    [DllImport("libcppglue.so", CallingConvention = CallingConvention.Cdecl)]
    private static extern void ag_Entity_list0(IntPtr ObjectHandle, int depth);
    public void list(int depth)
    {
        ag_Entity_list0(mObjectHandle, depth);
    }
    [DllImport("libcppglue.so", CallingConvention = CallingConvention.Cdecl)]
    private static extern void ag_Entity_onList0(IntPtr ObjectHandle, IntPtr indent);
    protected virtual void onList(gencs.std.basic_String_viewCharacter_char_traitsCharacter indent)
    {
        ag_Entity_onList0(mObjectHandle, gencs.std.basic_String_viewCharacter_char_traitsCharacter.AG_getObjectHandle(indent));
    }
    [DllImport("libcppglue.so", CallingConvention = CallingConvention.Cdecl)]
    private static extern bool ag_Entity_hasName0(IntPtr ObjectHandle, IntPtr str);
    protected virtual bool hasName(gencs.std.basic_String_viewCharacter_char_traitsCharacter str)
    {
        return ag_Entity_hasName0(mObjectHandle, gencs.std.basic_String_viewCharacter_char_traitsCharacter.AG_getObjectHandle(str));
    }
    [DllImport("libcppglue.so", CallingConvention = CallingConvention.Cdecl)]
    private static extern void ag_Entity_onInitialize0(IntPtr ObjectHandle);
    protected virtual void onInitialize()
    {
        ag_Entity_onInitialize0(mObjectHandle);
    }
    protected abstract void onGenerate(gencs.ag.BindingGenerator generator);
    [DllImport("libcppglue.so", CallingConvention = CallingConvention.Cdecl)]
    private static extern void ag_Entity_onFirstUse0(IntPtr ObjectHandle);
    protected virtual void onFirstUse()
    {
        ag_Entity_onFirstUse0(mObjectHandle);
    }
    [DllImport("libcppglue.so", CallingConvention = CallingConvention.Cdecl)]
    private static extern void ag_Entity_resetUsages0(IntPtr ObjectHandle);
    protected void resetUsages()
    {
        ag_Entity_resetUsages0(mObjectHandle);
    }
    [DllImport("libcppglue.so", CallingConvention = CallingConvention.Cdecl)]
    private static extern void ag_Entity_adoptEntity0(IntPtr ObjectHandle, IntPtr entity);
    protected void adoptEntity(gencs.ag.Entity entity)
    {
        ag_Entity_adoptEntity0(mObjectHandle, gencs.ag.Entity.AG_getObjectHandle(entity));
    }
    public class ConcreteType : gencs.ag.Entity
    {
        public ConcreteType(IntPtr ObjectHandle) : base(ObjectHandle)
        {
        }
        [DllImport("libcppglue.so", CallingConvention = CallingConvention.Cdecl)]
        private static extern IntPtr ag_Entity_ConcreteType_getParent0(IntPtr ObjectHandle);
        public override gencs.ag.Entity getParent()
        {
            return new gencs.ag.Entity.ConcreteType(ag_Entity_ConcreteType_getParent0(mObjectHandle));
        }
        [DllImport("libcppglue.so", CallingConvention = CallingConvention.Cdecl)]
        private static extern IntPtr ag_Entity_ConcreteType_resolve0(IntPtr ObjectHandle, IntPtr qualifiedName);
        public override gencs.std.shared_ptrEntity resolve(gencs.std.basic_String_viewCharacter_char_traitsCharacter qualifiedName)
        {
            return new gencs.std.shared_ptrEntity(ag_Entity_ConcreteType_resolve0(mObjectHandle, gencs.std.basic_String_viewCharacter_char_traitsCharacter.AG_getObjectHandle(qualifiedName)));
        }
        [DllImport("libcppglue.so", CallingConvention = CallingConvention.Cdecl)]
        private static extern IntPtr ag_Entity_ConcreteType_getName0(IntPtr ObjectHandle);
        public override gencs.std.basic_StringCharacter_char_traitsCharacter_allocatorCharacter getName()
        {
            return new gencs.std.basic_StringCharacter_char_traitsCharacter_allocatorCharacter(ag_Entity_ConcreteType_getName0(mObjectHandle));
        }
        [DllImport("libcppglue.so", CallingConvention = CallingConvention.Cdecl)]
        private static extern IntPtr ag_Entity_ConcreteType_getHierarchy0(IntPtr ObjectHandle, IntPtr delimiter);
        public override gencs.std.basic_StringCharacter_char_traitsCharacter_allocatorCharacter getHierarchy(gencs.std.basic_StringCharacter_char_traitsCharacter_allocatorCharacter delimiter)
        {
            return new gencs.std.basic_StringCharacter_char_traitsCharacter_allocatorCharacter(ag_Entity_ConcreteType_getHierarchy0(mObjectHandle, gencs.std.basic_StringCharacter_char_traitsCharacter_allocatorCharacter.AG_getObjectHandle(delimiter)));
        }
        [DllImport("libcppglue.so", CallingConvention = CallingConvention.Cdecl)]
        private static extern IntPtr ag_Entity_ConcreteType_getTypeString0(IntPtr ObjectHandle);
        public override string getTypeString()
        {
            return Marshal.PtrToStringAnsi(ag_Entity_ConcreteType_getTypeString0(mObjectHandle));
        }
        [DllImport("libcppglue.so", CallingConvention = CallingConvention.Cdecl)]
        private static extern void ag_Entity_ConcreteType_onList0(IntPtr ObjectHandle, IntPtr indent);
        protected override void onList(gencs.std.basic_String_viewCharacter_char_traitsCharacter indent)
        {
            ag_Entity_ConcreteType_onList0(mObjectHandle, gencs.std.basic_String_viewCharacter_char_traitsCharacter.AG_getObjectHandle(indent));
        }
        [DllImport("libcppglue.so", CallingConvention = CallingConvention.Cdecl)]
        private static extern bool ag_Entity_ConcreteType_hasName0(IntPtr ObjectHandle, IntPtr str);
        protected override bool hasName(gencs.std.basic_String_viewCharacter_char_traitsCharacter str)
        {
            return ag_Entity_ConcreteType_hasName0(mObjectHandle, gencs.std.basic_String_viewCharacter_char_traitsCharacter.AG_getObjectHandle(str));
        }
        [DllImport("libcppglue.so", CallingConvention = CallingConvention.Cdecl)]
        private static extern void ag_Entity_ConcreteType_onInitialize0(IntPtr ObjectHandle);
        protected override void onInitialize()
        {
            ag_Entity_ConcreteType_onInitialize0(mObjectHandle);
        }
        [DllImport("libcppglue.so", CallingConvention = CallingConvention.Cdecl)]
        private static extern void ag_Entity_ConcreteType_onGenerate0(IntPtr ObjectHandle, IntPtr generator);
        protected override void onGenerate(gencs.ag.BindingGenerator generator)
        {
            ag_Entity_ConcreteType_onGenerate0(mObjectHandle, gencs.ag.BindingGenerator.AG_getObjectHandle(generator));
        }
        [DllImport("libcppglue.so", CallingConvention = CallingConvention.Cdecl)]
        private static extern void ag_Entity_ConcreteType_onFirstUse0(IntPtr ObjectHandle);
        protected override void onFirstUse()
        {
            ag_Entity_ConcreteType_onFirstUse0(mObjectHandle);
        }
    }
}
