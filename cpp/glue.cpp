#include <autoglue/Backend.hh>
#include <autoglue/BindingGenerator.hh>
#include <autoglue/CallableTypeEntity.hh>
#include <autoglue/ClassEntity.hh>
#include <autoglue/Entity.hh>
#include <autoglue/EntityContext.hh>
#include <autoglue/EnumEntity.hh>
#include <autoglue/EnumEntryEntity.hh>
#include <autoglue/FileList.hh>
#include <autoglue/FunctionEntity.hh>
#include <autoglue/FunctionGroupEntity.hh>
#include <autoglue/PrimitiveEntity.hh>
#include <autoglue/ScopeEntity.hh>
#include <autoglue/TypeAliasEntity.hh>
#include <autoglue/TypeEntity.hh>
#include <autoglue/TypeReferenceEntity.hh>
#include <autoglue/clang/Backend.hh>
#include <autoglue/clang/EntityContext.hh>
#include <autoglue/clang/FunctionContext.hh>
#include <autoglue/clang/GlueGenerator.hh>
#include <autoglue/clang/OverloadContext.hh>
#include <autoglue/clang/TypeContext.hh>
#include <autoglue/clang/TyperefContext.hh>
#include <autoglue/csharp/BindingGenerator.hh>
#include <autoglue/csharp/ClassContext.hh>
#include <autoglue/csharp/EntityContext.hh>
#include <autoglue/java/BindingGenerator.hh>
#include <clang/AST/ASTContext.h>
#include <clang/AST/Decl.h>
#include <clang/AST/DeclBase.h>
#include <clang/AST/DependenceFlags.h>
#include <clang/AST/Redeclarable.h>
#include <clang/AST/Type.h>
#include <clang/Basic/Diagnostic.h>
#include <clang/Basic/DiagnosticIDs.h>
#include <clang/Basic/DiagnosticOptions.h>
#include <clang/Basic/FileManager.h>
#include <clang/Basic/FileSystemOptions.h>
#include <clang/Basic/IdentifierTable.h>
#include <clang/Basic/LangOptions.h>
#include <clang/Basic/SourceManager.h>
#include <filesystem>
#include <initializer_list>
#include <llvm/ADT/FoldingSet.h>
#include <llvm/ADT/IntrusiveRefCntPtr.h>
#include <llvm/ADT/SmallVector.h>
#include <llvm/ADT/StringRef.h>
#include <llvm/ADT/Twine.h>
#include <llvm/Support/ErrorOr.h>
#include <llvm/Support/VirtualFileSystem.h>
#include <memory>
#include <new>
#include <string>
#include <string_view>
#include <system_error>
#include <type_traits>
#include <vector>
namespace AG_std {
struct AG_basic_string_viewCharacter_char_traitsCharacter
  : public std::basic_string_view<char>
{
  AG_basic_string_viewCharacter_char_traitsCharacter()
    : std::basic_string_view<char>()
  {
  }
  AG_basic_string_viewCharacter_char_traitsCharacter(const char* __str)
    : std::basic_string_view<char>(__str)
  {
  }
  AG_basic_string_viewCharacter_char_traitsCharacter(const char* __str,
                                                     unsigned long __len)
    : std::basic_string_view<char>(__str, __len)
  {
  }
  static void* basic_string_view0()
  {
    return new AG_std::AG_basic_string_viewCharacter_char_traitsCharacter();
  }
  static void* basic_string_view1(const char* __str)
  {
    return new AG_std::AG_basic_string_viewCharacter_char_traitsCharacter(
      static_cast<const char*>(__str));
  }
  static void* basic_string_view2(const char* __str, int __len)
  {
    return new AG_std::AG_basic_string_viewCharacter_char_traitsCharacter(
      static_cast<const char*>(__str), static_cast<unsigned long>(__len));
  }
  static void Destructor0(void* objectHandle)
  {
    delete static_cast<
      AG_std::AG_basic_string_viewCharacter_char_traitsCharacter*>(
      objectHandle);
  }
};

struct AG_allocatorCharacter : public std::allocator<char>
{
  AG_allocatorCharacter()
    : std::allocator<char>()
  {
  }
  static void* allocator0() { return new AG_std::AG_allocatorCharacter(); }
  static void Destructor0(void* objectHandle)
  {
    delete static_cast<AG_std::AG_allocatorCharacter*>(objectHandle);
  }
};

struct AG_basic_stringCharacter_char_traitsCharacter_allocatorCharacter
  : public std::basic_string<char>
{
  AG_basic_stringCharacter_char_traitsCharacter_allocatorCharacter()
    : std::basic_string<char>()
  {
  }
  AG_basic_stringCharacter_char_traitsCharacter_allocatorCharacter(
    const std::allocator<char>& __a)
    : std::basic_string<char>(__a)
  {
  }
  AG_basic_stringCharacter_char_traitsCharacter_allocatorCharacter(
    const std::basic_string<char>& __str,
    unsigned long __pos,
    const std::allocator<char>& __a)
    : std::basic_string<char>(__str, __pos, __a)
  {
  }
  AG_basic_stringCharacter_char_traitsCharacter_allocatorCharacter(
    const std::basic_string<char>& __str,
    unsigned long __pos,
    unsigned long __n)
    : std::basic_string<char>(__str, __pos, __n)
  {
  }
  AG_basic_stringCharacter_char_traitsCharacter_allocatorCharacter(
    const std::basic_string<char>& __str,
    unsigned long __pos,
    unsigned long __n,
    const std::allocator<char>& __a)
    : std::basic_string<char>(__str, __pos, __n, __a)
  {
  }
  AG_basic_stringCharacter_char_traitsCharacter_allocatorCharacter(
    const char* __s,
    unsigned long __n,
    const std::allocator<char>& __a)
    : std::basic_string<char>(__s, __n, __a)
  {
  }
  AG_basic_stringCharacter_char_traitsCharacter_allocatorCharacter(
    std::basic_string<char>&& __str)
    : std::basic_string<char>(std::move(__str))
  {
  }
  AG_basic_stringCharacter_char_traitsCharacter_allocatorCharacter(
    std::initializer_list<char> __l,
    const std::allocator<char>& __a)
    : std::basic_string<char>(__l, __a)
  {
  }
  AG_basic_stringCharacter_char_traitsCharacter_allocatorCharacter(
    const std::basic_string<char>& __str,
    const std::allocator<char>& __a)
    : std::basic_string<char>(__str, __a)
  {
  }
  static void* basic_string0()
  {
    return new AG_std::
      AG_basic_stringCharacter_char_traitsCharacter_allocatorCharacter();
  }
  static void* basic_string1(void* __a)
  {
    return new AG_std::
      AG_basic_stringCharacter_char_traitsCharacter_allocatorCharacter(
        *static_cast<const std::allocator<char>*>(__a));
  }
  static void* basic_string2(void* __str, int __pos, void* __a)
  {
    return new AG_std::
      AG_basic_stringCharacter_char_traitsCharacter_allocatorCharacter(
        *static_cast<const std::basic_string<char>*>(__str),
        static_cast<unsigned long>(__pos),
        *static_cast<const std::allocator<char>*>(__a));
  }
  static void* basic_string3(void* __str, int __pos, int __n)
  {
    return new AG_std::
      AG_basic_stringCharacter_char_traitsCharacter_allocatorCharacter(
        *static_cast<const std::basic_string<char>*>(__str),
        static_cast<unsigned long>(__pos),
        static_cast<unsigned long>(__n));
  }
  static void* basic_string4(void* __str, int __pos, int __n, void* __a)
  {
    return new AG_std::
      AG_basic_stringCharacter_char_traitsCharacter_allocatorCharacter(
        *static_cast<const std::basic_string<char>*>(__str),
        static_cast<unsigned long>(__pos),
        static_cast<unsigned long>(__n),
        *static_cast<const std::allocator<char>*>(__a));
  }
  static void* basic_string5(const char* __s, int __n, void* __a)
  {
    return new AG_std::
      AG_basic_stringCharacter_char_traitsCharacter_allocatorCharacter(
        static_cast<const char*>(__s),
        static_cast<unsigned long>(__n),
        *static_cast<const std::allocator<char>*>(__a));
  }
  static void* basic_string6(void* __str)
  {
    return new AG_std::
      AG_basic_stringCharacter_char_traitsCharacter_allocatorCharacter(
        std::move(*static_cast<std::basic_string<char>*>(__str)));
  }
  static void* basic_string7(void* __l, void* __a)
  {
    return new AG_std::
      AG_basic_stringCharacter_char_traitsCharacter_allocatorCharacter(
        *static_cast<std::initializer_list<char>*>(__l),
        *static_cast<const std::allocator<char>*>(__a));
  }
  static void* basic_string8(void* __str, void* __a)
  {
    return new AG_std::
      AG_basic_stringCharacter_char_traitsCharacter_allocatorCharacter(
        *static_cast<const std::basic_string<char>*>(__str),
        *static_cast<const std::allocator<char>*>(__a));
  }
  static void Destructor0(void* objectHandle)
  {
    delete static_cast<
      AG_std::
        AG_basic_stringCharacter_char_traitsCharacter_allocatorCharacter*>(
      objectHandle);
  }
};

struct AG_initializer_listCharacter : public std::initializer_list<char>
{
  AG_initializer_listCharacter()
    : std::initializer_list<char>()
  {
  }
  AG_initializer_listCharacter(std::initializer_list<char>&& param1)
    : std::initializer_list<char>(std::move(param1))
  {
  }
  static void* initializer_list0()
  {
    return new AG_std::AG_initializer_listCharacter();
  }
  static void* initializer_list1(void* param1)
  {
    return new AG_std::AG_initializer_listCharacter(
      std::move(*static_cast<std::initializer_list<char>*>(param1)));
  }
};

struct AG_error_category : public std::error_category
{
  AG_error_category()
    : std::error_category()
  {
  }
  void* AG_foreignObject;
  const char* (*AG_intercept_name0)(void* objectHandle);
  const char* name() const noexcept override
  {
    return AG_intercept_name0(AG_foreignObject);
  }
  void* (*AG_intercept_message0)(void* objectHandle, int param1);
  std::basic_string<char> message(int param1) const override
  {
    return std::move(*static_cast<std::basic_string<char>*>(
      AG_intercept_message0(AG_foreignObject, param1)));
  }
  static const char* AG_virtual_name0(void* objectHandle)
  {
    return static_cast<AG_std::AG_error_category*>(objectHandle)->name();
  }
  static void* AG_virtual_message0(void* objectHandle, int param1)
  {
    return new std::basic_string<char>(
      static_cast<AG_std::AG_error_category*>(objectHandle)->message(param1));
  }
  static void* error_category0() { return new AG_std::AG_error_category(); }
  static void Destructor0(void* objectHandle)
  {
    delete static_cast<AG_std::AG_error_category*>(objectHandle);
  }
  static const char* name0(void* objectHandle)
  {
    return static_cast<AG_std::AG_error_category*>(objectHandle)
      ->std::error_category::name();
  }
  static void* message0(void* objectHandle, int param1)
  {
    return new std::basic_string<char>(
      static_cast<AG_std::AG_error_category*>(objectHandle)
        ->std::error_category::message(param1));
  }
};

struct AG_error_code : public std::error_code
{
  AG_error_code()
    : std::error_code()
  {
  }
  AG_error_code(int __v, const std::error_category& __cat)
    : std::error_code(__v, __cat)
  {
  }
  static void* error_code0() { return new AG_std::AG_error_code(); }
  static void* error_code1(int __v, void* __cat)
  {
    return new AG_std::AG_error_code(
      static_cast<int>(__v), *static_cast<const std::error_category*>(__cat));
  }
  static void Destructor0(void* objectHandle)
  {
    delete static_cast<AG_std::AG_error_code*>(objectHandle);
  }
};

namespace AG_filesystem {
struct AG_path : public std::filesystem::path
{
  AG_path()
    : std::filesystem::path()
  {
  }
  AG_path(std::filesystem::path&& __p)
    : std::filesystem::path(std::move(__p))
  {
  }
  AG_path(std::basic_string<char>&& __source,
          std::filesystem::path::format param2)
    : std::filesystem::path(std::move(__source), param2)
  {
  }
  static void* path0() { return new AG_std::AG_filesystem::AG_path(); }
  static void* path1(void* __p)
  {
    return new AG_std::AG_filesystem::AG_path(
      std::move(*static_cast<std::filesystem::path*>(__p)));
  }
  static void* path2(void* __source, int param2)
  {
    return new AG_std::AG_filesystem::AG_path(
      std::move(*static_cast<std::basic_string<char>*>(__source)),
      static_cast<std::filesystem::path::format>(param2));
  }
  static void Destructor0(void* objectHandle)
  {
    delete static_cast<AG_std::AG_filesystem::AG_path*>(objectHandle);
  }
};

}
struct AG_nothrow_t : public std::nothrow_t
{
  AG_nothrow_t()
    : std::nothrow_t()
  {
  }
  AG_nothrow_t(std::nothrow_t&& param1)
    : std::nothrow_t(std::move(param1))
  {
  }
  static void* nothrow_t0() { return new AG_std::AG_nothrow_t(); }
  static void* nothrow_t1(void* param1)
  {
    return new AG_std::AG_nothrow_t(
      std::move(*static_cast<std::nothrow_t*>(param1)));
  }
};

struct AG_allocatorpath : public std::allocator<std::filesystem::path>
{
  AG_allocatorpath()
    : std::allocator<std::filesystem::path>()
  {
  }
  static void* allocator0() { return new AG_std::AG_allocatorpath(); }
  static void Destructor0(void* objectHandle)
  {
    delete static_cast<AG_std::AG_allocatorpath*>(objectHandle);
  }
};

struct AG_vectorpath_allocatorpath : public std::vector<std::filesystem::path>
{
  AG_vectorpath_allocatorpath()
    : std::vector<std::filesystem::path>()
  {
  }
  AG_vectorpath_allocatorpath(const std::allocator<std::filesystem::path>& __a)
    : std::vector<std::filesystem::path>(__a)
  {
  }
  AG_vectorpath_allocatorpath(unsigned long __n,
                              const std::allocator<std::filesystem::path>& __a)
    : std::vector<std::filesystem::path>(__n, __a)
  {
  }
  AG_vectorpath_allocatorpath(unsigned long __n,
                              const std::filesystem::path& __value,
                              const std::allocator<std::filesystem::path>& __a)
    : std::vector<std::filesystem::path>(__n, __value, __a)
  {
  }
  AG_vectorpath_allocatorpath(std::vector<std::filesystem::path>&& param1)
    : std::vector<std::filesystem::path>(std::move(param1))
  {
  }
  AG_vectorpath_allocatorpath(const std::vector<std::filesystem::path>& __x,
                              const std::allocator<std::filesystem::path>& __a)
    : std::vector<std::filesystem::path>(__x, __a)
  {
  }
  AG_vectorpath_allocatorpath(std::initializer_list<std::filesystem::path> __l,
                              const std::allocator<std::filesystem::path>& __a)
    : std::vector<std::filesystem::path>(__l, __a)
  {
  }
  static void* vector0() { return new AG_std::AG_vectorpath_allocatorpath(); }
  static void* vector1(void* __a)
  {
    return new AG_std::AG_vectorpath_allocatorpath(
      *static_cast<const std::allocator<std::filesystem::path>*>(__a));
  }
  static void* vector2(int __n, void* __a)
  {
    return new AG_std::AG_vectorpath_allocatorpath(
      static_cast<unsigned long>(__n),
      *static_cast<const std::allocator<std::filesystem::path>*>(__a));
  }
  static void* vector3(int __n, void* __value, void* __a)
  {
    return new AG_std::AG_vectorpath_allocatorpath(
      static_cast<unsigned long>(__n),
      *static_cast<const std::filesystem::path*>(__value),
      *static_cast<const std::allocator<std::filesystem::path>*>(__a));
  }
  static void* vector4(void* param1)
  {
    return new AG_std::AG_vectorpath_allocatorpath(
      std::move(*static_cast<std::vector<std::filesystem::path>*>(param1)));
  }
  static void* vector5(void* __x, void* __a)
  {
    return new AG_std::AG_vectorpath_allocatorpath(
      *static_cast<const std::vector<std::filesystem::path>*>(__x),
      *static_cast<const std::allocator<std::filesystem::path>*>(__a));
  }
  static void* vector6(void* __l, void* __a)
  {
    return new AG_std::AG_vectorpath_allocatorpath(
      *static_cast<std::initializer_list<std::filesystem::path>*>(__l),
      *static_cast<const std::allocator<std::filesystem::path>*>(__a));
  }
  static void Destructor0(void* objectHandle)
  {
    delete static_cast<AG_std::AG_vectorpath_allocatorpath*>(objectHandle);
  }
};

struct AG__Vector_basepath_allocatorpath
  : public std::_Vector_base<std::filesystem::path,
                             std::allocator<std::filesystem::path>>
{
  AG__Vector_basepath_allocatorpath()
    : std::_Vector_base<std::filesystem::path,
                        std::allocator<std::filesystem::path>>()
  {
  }
  AG__Vector_basepath_allocatorpath(
    const std::allocator<std::filesystem::path>& __a)
    : std::_Vector_base<std::filesystem::path,
                        std::allocator<std::filesystem::path>>(__a)
  {
  }
  AG__Vector_basepath_allocatorpath(unsigned long __n)
    : std::_Vector_base<std::filesystem::path,
                        std::allocator<std::filesystem::path>>(__n)
  {
  }
  AG__Vector_basepath_allocatorpath(
    unsigned long __n,
    const std::allocator<std::filesystem::path>& __a)
    : std::_Vector_base<std::filesystem::path,
                        std::allocator<std::filesystem::path>>(__n, __a)
  {
  }
  AG__Vector_basepath_allocatorpath(
    std::_Vector_base<std::filesystem::path,
                      std::allocator<std::filesystem::path>>&& param1)
    : std::_Vector_base<std::filesystem::path,
                        std::allocator<std::filesystem::path>>(
        std::move(param1))
  {
  }
  AG__Vector_basepath_allocatorpath(
    std::_Vector_base<std::filesystem::path,
                      std::allocator<std::filesystem::path>>&& __x,
    const std::allocator<std::filesystem::path>& __a)
    : std::_Vector_base<std::filesystem::path,
                        std::allocator<std::filesystem::path>>(std::move(__x),
                                                               __a)
  {
  }
  AG__Vector_basepath_allocatorpath(
    const std::allocator<std::filesystem::path>& __a,
    std::_Vector_base<std::filesystem::path,
                      std::allocator<std::filesystem::path>>&& __x)
    : std::_Vector_base<std::filesystem::path,
                        std::allocator<std::filesystem::path>>(__a,
                                                               std::move(__x))
  {
  }
  static void* _Vector_base0()
  {
    return new AG_std::AG__Vector_basepath_allocatorpath();
  }
  static void* _Vector_base1(void* __a)
  {
    return new AG_std::AG__Vector_basepath_allocatorpath(
      *static_cast<const std::allocator<std::filesystem::path>*>(__a));
  }
  static void* _Vector_base2(int __n)
  {
    return new AG_std::AG__Vector_basepath_allocatorpath(
      static_cast<unsigned long>(__n));
  }
  static void* _Vector_base3(int __n, void* __a)
  {
    return new AG_std::AG__Vector_basepath_allocatorpath(
      static_cast<unsigned long>(__n),
      *static_cast<const std::allocator<std::filesystem::path>*>(__a));
  }
  static void* _Vector_base4(void* param1)
  {
    return new AG_std::AG__Vector_basepath_allocatorpath(std::move(
      *static_cast<std::_Vector_base<std::filesystem::path,
                                     std::allocator<std::filesystem::path>>*>(
        param1)));
  }
  static void* _Vector_base5(void* __x, void* __a)
  {
    return new AG_std::AG__Vector_basepath_allocatorpath(
      std::move(
        *static_cast<std::_Vector_base<std::filesystem::path,
                                       std::allocator<std::filesystem::path>>*>(
          __x)),
      *static_cast<const std::allocator<std::filesystem::path>*>(__a));
  }
  static void* _Vector_base6(void* __a, void* __x)
  {
    return new AG_std::AG__Vector_basepath_allocatorpath(
      *static_cast<const std::allocator<std::filesystem::path>*>(__a),
      std::move(
        *static_cast<std::_Vector_base<std::filesystem::path,
                                       std::allocator<std::filesystem::path>>*>(
          __x)));
  }
  static void Destructor0(void* objectHandle)
  {
    delete static_cast<AG_std::AG__Vector_basepath_allocatorpath*>(
      objectHandle);
  }
};

struct AG___type_identityallocatorpath
  : public std::__type_identity<std::allocator<std::filesystem::path>>
{
  static void Destructor0(void* objectHandle)
  {
    delete static_cast<AG_std::AG___type_identityallocatorpath*>(objectHandle);
  }
};

struct AG_initializer_listpath
{};

struct AG_enable_shared_from_thisEntityContext
  : public std::enable_shared_from_this<ag::clang::EntityContext>
{
  AG_enable_shared_from_thisEntityContext()
    : std::enable_shared_from_this<ag::clang::EntityContext>()
  {
  }
  static void* enable_shared_from_this0()
  {
    return new AG_std::AG_enable_shared_from_thisEntityContext();
  }
  static void Destructor0(void* objectHandle)
  {
    delete static_cast<AG_std::AG_enable_shared_from_thisEntityContext*>(
      objectHandle);
  }
};

struct AG_shared_ptrEntityContext
  : public std::shared_ptr<ag::clang::EntityContext>
{
  AG_shared_ptrEntityContext()
    : std::shared_ptr<ag::clang::EntityContext>()
  {
  }
  AG_shared_ptrEntityContext(std::shared_ptr<ag::clang::EntityContext>&& __r)
    : std::shared_ptr<ag::clang::EntityContext>(std::move(__r))
  {
  }
  static void* shared_ptr0()
  {
    return new AG_std::AG_shared_ptrEntityContext();
  }
  static void* shared_ptr1(void* __r)
  {
    return new AG_std::AG_shared_ptrEntityContext(
      std::move(*static_cast<std::shared_ptr<ag::clang::EntityContext>*>(__r)));
  }
  static void Destructor0(void* objectHandle)
  {
    delete static_cast<AG_std::AG_shared_ptrEntityContext*>(objectHandle);
  }
};

struct AG___shared_ptrEntityContext_2
  : public std::__shared_ptr<ag::clang::EntityContext>
{
  AG___shared_ptrEntityContext_2()
    : std::__shared_ptr<ag::clang::EntityContext>()
  {
  }
  AG___shared_ptrEntityContext_2(
    std::__shared_ptr<ag::clang::EntityContext>&& __r)
    : std::__shared_ptr<ag::clang::EntityContext>(std::move(__r))
  {
  }
  AG___shared_ptrEntityContext_2(
    const std::__weak_ptr<ag::clang::EntityContext>& __r,
    std::nothrow_t param2)
    : std::__shared_ptr<ag::clang::EntityContext>(__r, param2)
  {
  }
  static void* __shared_ptr0()
  {
    return new AG_std::AG___shared_ptrEntityContext_2();
  }
  static void* __shared_ptr1(void* __r)
  {
    return new AG_std::AG___shared_ptrEntityContext_2(std::move(
      *static_cast<std::__shared_ptr<ag::clang::EntityContext>*>(__r)));
  }
  static void* __shared_ptr2(void* __r, void* param2)
  {
    return new AG_std::AG___shared_ptrEntityContext_2(
      *static_cast<const std::__weak_ptr<ag::clang::EntityContext>*>(__r),
      *static_cast<std::nothrow_t*>(param2));
  }
  static void Destructor0(void* objectHandle)
  {
    delete static_cast<AG_std::AG___shared_ptrEntityContext_2*>(objectHandle);
  }
};

struct AG___shared_ptr_accessEntityContext_2_0_0
  : public std::__shared_ptr_access<ag::clang::EntityContext,
                                    __gnu_cxx::_S_atomic>
{
  AG___shared_ptr_accessEntityContext_2_0_0(
    std::__shared_ptr_access<ag::clang::EntityContext, __gnu_cxx::_S_atomic>&&
      param1)
    : std::__shared_ptr_access<ag::clang::EntityContext, __gnu_cxx::_S_atomic>(
        std::move(param1))
  {
  }
  AG___shared_ptr_accessEntityContext_2_0_0()
    : std::__shared_ptr_access<ag::clang::EntityContext, __gnu_cxx::_S_atomic>()
  {
  }
  static void Destructor0(void* objectHandle)
  {
    delete static_cast<AG_std::AG___shared_ptr_accessEntityContext_2_0_0*>(
      objectHandle);
  }
  static void* __shared_ptr_access0(void* param1)
  {
    return new AG_std::AG___shared_ptr_accessEntityContext_2_0_0(std::move(
      *static_cast<std::__shared_ptr_access<ag::clang::EntityContext,
                                            __gnu_cxx::_S_atomic>*>(param1)));
  }
  static void* __shared_ptr_access1()
  {
    return new AG_std::AG___shared_ptr_accessEntityContext_2_0_0();
  }
};

struct AG___weak_ptrEntityContext_2
  : public std::__weak_ptr<ag::clang::EntityContext>
{
  AG___weak_ptrEntityContext_2()
    : std::__weak_ptr<ag::clang::EntityContext>()
  {
  }
  AG___weak_ptrEntityContext_2(std::__weak_ptr<ag::clang::EntityContext>&& __r)
    : std::__weak_ptr<ag::clang::EntityContext>(std::move(__r))
  {
  }
  static void* __weak_ptr0()
  {
    return new AG_std::AG___weak_ptrEntityContext_2();
  }
  static void* __weak_ptr1(void* __r)
  {
    return new AG_std::AG___weak_ptrEntityContext_2(
      std::move(*static_cast<std::__weak_ptr<ag::clang::EntityContext>*>(__r)));
  }
  static void Destructor0(void* objectHandle)
  {
    delete static_cast<AG_std::AG___weak_ptrEntityContext_2*>(objectHandle);
  }
};

struct AG_shared_ptrTypeContext : public std::shared_ptr<ag::clang::TypeContext>
{
  AG_shared_ptrTypeContext()
    : std::shared_ptr<ag::clang::TypeContext>()
  {
  }
  AG_shared_ptrTypeContext(std::shared_ptr<ag::clang::TypeContext>&& __r)
    : std::shared_ptr<ag::clang::TypeContext>(std::move(__r))
  {
  }
  static void* shared_ptr0() { return new AG_std::AG_shared_ptrTypeContext(); }
  static void* shared_ptr1(void* __r)
  {
    return new AG_std::AG_shared_ptrTypeContext(
      std::move(*static_cast<std::shared_ptr<ag::clang::TypeContext>*>(__r)));
  }
  static void Destructor0(void* objectHandle)
  {
    delete static_cast<AG_std::AG_shared_ptrTypeContext*>(objectHandle);
  }
};

struct AG___shared_ptrTypeContext_2
  : public std::__shared_ptr<ag::clang::TypeContext>
{
  AG___shared_ptrTypeContext_2()
    : std::__shared_ptr<ag::clang::TypeContext>()
  {
  }
  AG___shared_ptrTypeContext_2(std::__shared_ptr<ag::clang::TypeContext>&& __r)
    : std::__shared_ptr<ag::clang::TypeContext>(std::move(__r))
  {
  }
  AG___shared_ptrTypeContext_2(
    const std::__weak_ptr<ag::clang::TypeContext>& __r,
    std::nothrow_t param2)
    : std::__shared_ptr<ag::clang::TypeContext>(__r, param2)
  {
  }
  static void* __shared_ptr0()
  {
    return new AG_std::AG___shared_ptrTypeContext_2();
  }
  static void* __shared_ptr1(void* __r)
  {
    return new AG_std::AG___shared_ptrTypeContext_2(
      std::move(*static_cast<std::__shared_ptr<ag::clang::TypeContext>*>(__r)));
  }
  static void* __shared_ptr2(void* __r, void* param2)
  {
    return new AG_std::AG___shared_ptrTypeContext_2(
      *static_cast<const std::__weak_ptr<ag::clang::TypeContext>*>(__r),
      *static_cast<std::nothrow_t*>(param2));
  }
  static void Destructor0(void* objectHandle)
  {
    delete static_cast<AG_std::AG___shared_ptrTypeContext_2*>(objectHandle);
  }
};

struct AG___shared_ptr_accessTypeContext_2_0_0
  : public std::__shared_ptr_access<ag::clang::TypeContext,
                                    __gnu_cxx::_S_atomic>
{
  AG___shared_ptr_accessTypeContext_2_0_0(
    std::__shared_ptr_access<ag::clang::TypeContext, __gnu_cxx::_S_atomic>&&
      param1)
    : std::__shared_ptr_access<ag::clang::TypeContext, __gnu_cxx::_S_atomic>(
        std::move(param1))
  {
  }
  AG___shared_ptr_accessTypeContext_2_0_0()
    : std::__shared_ptr_access<ag::clang::TypeContext, __gnu_cxx::_S_atomic>()
  {
  }
  static void Destructor0(void* objectHandle)
  {
    delete static_cast<AG_std::AG___shared_ptr_accessTypeContext_2_0_0*>(
      objectHandle);
  }
  static void* __shared_ptr_access0(void* param1)
  {
    return new AG_std::AG___shared_ptr_accessTypeContext_2_0_0(std::move(
      *static_cast<std::__shared_ptr_access<ag::clang::TypeContext,
                                            __gnu_cxx::_S_atomic>*>(param1)));
  }
  static void* __shared_ptr_access1()
  {
    return new AG_std::AG___shared_ptr_accessTypeContext_2_0_0();
  }
};

struct AG___weak_ptrTypeContext_2
  : public std::__weak_ptr<ag::clang::TypeContext>
{
  AG___weak_ptrTypeContext_2()
    : std::__weak_ptr<ag::clang::TypeContext>()
  {
  }
  AG___weak_ptrTypeContext_2(std::__weak_ptr<ag::clang::TypeContext>&& __r)
    : std::__weak_ptr<ag::clang::TypeContext>(std::move(__r))
  {
  }
  static void* __weak_ptr0()
  {
    return new AG_std::AG___weak_ptrTypeContext_2();
  }
  static void* __weak_ptr1(void* __r)
  {
    return new AG_std::AG___weak_ptrTypeContext_2(
      std::move(*static_cast<std::__weak_ptr<ag::clang::TypeContext>*>(__r)));
  }
  static void Destructor0(void* objectHandle)
  {
    delete static_cast<AG_std::AG___weak_ptrTypeContext_2*>(objectHandle);
  }
};

struct AG_shared_ptrTyperefContext
  : public std::shared_ptr<ag::clang::TyperefContext>
{
  AG_shared_ptrTyperefContext()
    : std::shared_ptr<ag::clang::TyperefContext>()
  {
  }
  AG_shared_ptrTyperefContext(std::shared_ptr<ag::clang::TyperefContext>&& __r)
    : std::shared_ptr<ag::clang::TyperefContext>(std::move(__r))
  {
  }
  static void* shared_ptr0()
  {
    return new AG_std::AG_shared_ptrTyperefContext();
  }
  static void* shared_ptr1(void* __r)
  {
    return new AG_std::AG_shared_ptrTyperefContext(std::move(
      *static_cast<std::shared_ptr<ag::clang::TyperefContext>*>(__r)));
  }
  static void Destructor0(void* objectHandle)
  {
    delete static_cast<AG_std::AG_shared_ptrTyperefContext*>(objectHandle);
  }
};

struct AG___shared_ptrTyperefContext_2
  : public std::__shared_ptr<ag::clang::TyperefContext>
{
  AG___shared_ptrTyperefContext_2()
    : std::__shared_ptr<ag::clang::TyperefContext>()
  {
  }
  AG___shared_ptrTyperefContext_2(
    std::__shared_ptr<ag::clang::TyperefContext>&& __r)
    : std::__shared_ptr<ag::clang::TyperefContext>(std::move(__r))
  {
  }
  AG___shared_ptrTyperefContext_2(
    const std::__weak_ptr<ag::clang::TyperefContext>& __r,
    std::nothrow_t param2)
    : std::__shared_ptr<ag::clang::TyperefContext>(__r, param2)
  {
  }
  static void* __shared_ptr0()
  {
    return new AG_std::AG___shared_ptrTyperefContext_2();
  }
  static void* __shared_ptr1(void* __r)
  {
    return new AG_std::AG___shared_ptrTyperefContext_2(std::move(
      *static_cast<std::__shared_ptr<ag::clang::TyperefContext>*>(__r)));
  }
  static void* __shared_ptr2(void* __r, void* param2)
  {
    return new AG_std::AG___shared_ptrTyperefContext_2(
      *static_cast<const std::__weak_ptr<ag::clang::TyperefContext>*>(__r),
      *static_cast<std::nothrow_t*>(param2));
  }
  static void Destructor0(void* objectHandle)
  {
    delete static_cast<AG_std::AG___shared_ptrTyperefContext_2*>(objectHandle);
  }
};

struct AG___shared_ptr_accessTyperefContext_2_0_0
  : public std::__shared_ptr_access<ag::clang::TyperefContext,
                                    __gnu_cxx::_S_atomic>
{
  AG___shared_ptr_accessTyperefContext_2_0_0(
    std::__shared_ptr_access<ag::clang::TyperefContext, __gnu_cxx::_S_atomic>&&
      param1)
    : std::__shared_ptr_access<ag::clang::TyperefContext, __gnu_cxx::_S_atomic>(
        std::move(param1))
  {
  }
  AG___shared_ptr_accessTyperefContext_2_0_0()
    : std::__shared_ptr_access<ag::clang::TyperefContext,
                               __gnu_cxx::_S_atomic>()
  {
  }
  static void Destructor0(void* objectHandle)
  {
    delete static_cast<AG_std::AG___shared_ptr_accessTyperefContext_2_0_0*>(
      objectHandle);
  }
  static void* __shared_ptr_access0(void* param1)
  {
    return new AG_std::AG___shared_ptr_accessTyperefContext_2_0_0(std::move(
      *static_cast<std::__shared_ptr_access<ag::clang::TyperefContext,
                                            __gnu_cxx::_S_atomic>*>(param1)));
  }
  static void* __shared_ptr_access1()
  {
    return new AG_std::AG___shared_ptr_accessTyperefContext_2_0_0();
  }
};

struct AG___weak_ptrTyperefContext_2
  : public std::__weak_ptr<ag::clang::TyperefContext>
{
  AG___weak_ptrTyperefContext_2()
    : std::__weak_ptr<ag::clang::TyperefContext>()
  {
  }
  AG___weak_ptrTyperefContext_2(
    std::__weak_ptr<ag::clang::TyperefContext>&& __r)
    : std::__weak_ptr<ag::clang::TyperefContext>(std::move(__r))
  {
  }
  static void* __weak_ptr0()
  {
    return new AG_std::AG___weak_ptrTyperefContext_2();
  }
  static void* __weak_ptr1(void* __r)
  {
    return new AG_std::AG___weak_ptrTyperefContext_2(std::move(
      *static_cast<std::__weak_ptr<ag::clang::TyperefContext>*>(__r)));
  }
  static void Destructor0(void* objectHandle)
  {
    delete static_cast<AG_std::AG___weak_ptrTyperefContext_2*>(objectHandle);
  }
};

struct AG_shared_ptrFunctionContext
  : public std::shared_ptr<ag::clang::FunctionContext>
{
  AG_shared_ptrFunctionContext()
    : std::shared_ptr<ag::clang::FunctionContext>()
  {
  }
  AG_shared_ptrFunctionContext(
    std::shared_ptr<ag::clang::FunctionContext>&& __r)
    : std::shared_ptr<ag::clang::FunctionContext>(std::move(__r))
  {
  }
  static void* shared_ptr0()
  {
    return new AG_std::AG_shared_ptrFunctionContext();
  }
  static void* shared_ptr1(void* __r)
  {
    return new AG_std::AG_shared_ptrFunctionContext(std::move(
      *static_cast<std::shared_ptr<ag::clang::FunctionContext>*>(__r)));
  }
  static void Destructor0(void* objectHandle)
  {
    delete static_cast<AG_std::AG_shared_ptrFunctionContext*>(objectHandle);
  }
};

struct AG___shared_ptrFunctionContext_2
  : public std::__shared_ptr<ag::clang::FunctionContext>
{
  AG___shared_ptrFunctionContext_2()
    : std::__shared_ptr<ag::clang::FunctionContext>()
  {
  }
  AG___shared_ptrFunctionContext_2(
    std::__shared_ptr<ag::clang::FunctionContext>&& __r)
    : std::__shared_ptr<ag::clang::FunctionContext>(std::move(__r))
  {
  }
  AG___shared_ptrFunctionContext_2(
    const std::__weak_ptr<ag::clang::FunctionContext>& __r,
    std::nothrow_t param2)
    : std::__shared_ptr<ag::clang::FunctionContext>(__r, param2)
  {
  }
  static void* __shared_ptr0()
  {
    return new AG_std::AG___shared_ptrFunctionContext_2();
  }
  static void* __shared_ptr1(void* __r)
  {
    return new AG_std::AG___shared_ptrFunctionContext_2(std::move(
      *static_cast<std::__shared_ptr<ag::clang::FunctionContext>*>(__r)));
  }
  static void* __shared_ptr2(void* __r, void* param2)
  {
    return new AG_std::AG___shared_ptrFunctionContext_2(
      *static_cast<const std::__weak_ptr<ag::clang::FunctionContext>*>(__r),
      *static_cast<std::nothrow_t*>(param2));
  }
  static void Destructor0(void* objectHandle)
  {
    delete static_cast<AG_std::AG___shared_ptrFunctionContext_2*>(objectHandle);
  }
};

struct AG___shared_ptr_accessFunctionContext_2_0_0
  : public std::__shared_ptr_access<ag::clang::FunctionContext,
                                    __gnu_cxx::_S_atomic>
{
  AG___shared_ptr_accessFunctionContext_2_0_0(
    std::__shared_ptr_access<ag::clang::FunctionContext, __gnu_cxx::_S_atomic>&&
      param1)
    : std::__shared_ptr_access<ag::clang::FunctionContext,
                               __gnu_cxx::_S_atomic>(std::move(param1))
  {
  }
  AG___shared_ptr_accessFunctionContext_2_0_0()
    : std::__shared_ptr_access<ag::clang::FunctionContext,
                               __gnu_cxx::_S_atomic>()
  {
  }
  static void Destructor0(void* objectHandle)
  {
    delete static_cast<AG_std::AG___shared_ptr_accessFunctionContext_2_0_0*>(
      objectHandle);
  }
  static void* __shared_ptr_access0(void* param1)
  {
    return new AG_std::AG___shared_ptr_accessFunctionContext_2_0_0(std::move(
      *static_cast<std::__shared_ptr_access<ag::clang::FunctionContext,
                                            __gnu_cxx::_S_atomic>*>(param1)));
  }
  static void* __shared_ptr_access1()
  {
    return new AG_std::AG___shared_ptr_accessFunctionContext_2_0_0();
  }
};

struct AG___weak_ptrFunctionContext_2
  : public std::__weak_ptr<ag::clang::FunctionContext>
{
  AG___weak_ptrFunctionContext_2()
    : std::__weak_ptr<ag::clang::FunctionContext>()
  {
  }
  AG___weak_ptrFunctionContext_2(
    std::__weak_ptr<ag::clang::FunctionContext>&& __r)
    : std::__weak_ptr<ag::clang::FunctionContext>(std::move(__r))
  {
  }
  static void* __weak_ptr0()
  {
    return new AG_std::AG___weak_ptrFunctionContext_2();
  }
  static void* __weak_ptr1(void* __r)
  {
    return new AG_std::AG___weak_ptrFunctionContext_2(std::move(
      *static_cast<std::__weak_ptr<ag::clang::FunctionContext>*>(__r)));
  }
  static void Destructor0(void* objectHandle)
  {
    delete static_cast<AG_std::AG___weak_ptrFunctionContext_2*>(objectHandle);
  }
};

struct AG_shared_ptrEntity : public std::shared_ptr<ag::Entity>
{
  AG_shared_ptrEntity()
    : std::shared_ptr<ag::Entity>()
  {
  }
  AG_shared_ptrEntity(std::shared_ptr<ag::Entity>&& __r)
    : std::shared_ptr<ag::Entity>(std::move(__r))
  {
  }
  static void* shared_ptr0() { return new AG_std::AG_shared_ptrEntity(); }
  static void* shared_ptr1(void* __r)
  {
    return new AG_std::AG_shared_ptrEntity(
      std::move(*static_cast<std::shared_ptr<ag::Entity>*>(__r)));
  }
  static void Destructor0(void* objectHandle)
  {
    delete static_cast<AG_std::AG_shared_ptrEntity*>(objectHandle);
  }
};

struct AG_enable_shared_from_thisFunctionEntity
  : public std::enable_shared_from_this<ag::FunctionEntity>
{
  AG_enable_shared_from_thisFunctionEntity()
    : std::enable_shared_from_this<ag::FunctionEntity>()
  {
  }
  static void* enable_shared_from_this0()
  {
    return new AG_std::AG_enable_shared_from_thisFunctionEntity();
  }
  static void Destructor0(void* objectHandle)
  {
    delete static_cast<AG_std::AG_enable_shared_from_thisFunctionEntity*>(
      objectHandle);
  }
};

struct AG_shared_ptrFunctionEntity : public std::shared_ptr<ag::FunctionEntity>
{
  AG_shared_ptrFunctionEntity()
    : std::shared_ptr<ag::FunctionEntity>()
  {
  }
  AG_shared_ptrFunctionEntity(std::shared_ptr<ag::FunctionEntity>&& __r)
    : std::shared_ptr<ag::FunctionEntity>(std::move(__r))
  {
  }
  static void* shared_ptr0()
  {
    return new AG_std::AG_shared_ptrFunctionEntity();
  }
  static void* shared_ptr1(void* __r)
  {
    return new AG_std::AG_shared_ptrFunctionEntity(
      std::move(*static_cast<std::shared_ptr<ag::FunctionEntity>*>(__r)));
  }
  static void Destructor0(void* objectHandle)
  {
    delete static_cast<AG_std::AG_shared_ptrFunctionEntity*>(objectHandle);
  }
};

struct AG___weak_ptrFunctionEntity_2
  : public std::__weak_ptr<ag::FunctionEntity>
{
  AG___weak_ptrFunctionEntity_2()
    : std::__weak_ptr<ag::FunctionEntity>()
  {
  }
  AG___weak_ptrFunctionEntity_2(std::__weak_ptr<ag::FunctionEntity>&& __r)
    : std::__weak_ptr<ag::FunctionEntity>(std::move(__r))
  {
  }
  static void* __weak_ptr0()
  {
    return new AG_std::AG___weak_ptrFunctionEntity_2();
  }
  static void* __weak_ptr1(void* __r)
  {
    return new AG_std::AG___weak_ptrFunctionEntity_2(
      std::move(*static_cast<std::__weak_ptr<ag::FunctionEntity>*>(__r)));
  }
  static void Destructor0(void* objectHandle)
  {
    delete static_cast<AG_std::AG___weak_ptrFunctionEntity_2*>(objectHandle);
  }
};

struct AG___shared_ptrFunctionEntity_2
  : public std::__shared_ptr<ag::FunctionEntity>
{
  AG___shared_ptrFunctionEntity_2()
    : std::__shared_ptr<ag::FunctionEntity>()
  {
  }
  AG___shared_ptrFunctionEntity_2(std::__shared_ptr<ag::FunctionEntity>&& __r)
    : std::__shared_ptr<ag::FunctionEntity>(std::move(__r))
  {
  }
  AG___shared_ptrFunctionEntity_2(
    const std::__weak_ptr<ag::FunctionEntity>& __r,
    std::nothrow_t param2)
    : std::__shared_ptr<ag::FunctionEntity>(__r, param2)
  {
  }
  static void* __shared_ptr0()
  {
    return new AG_std::AG___shared_ptrFunctionEntity_2();
  }
  static void* __shared_ptr1(void* __r)
  {
    return new AG_std::AG___shared_ptrFunctionEntity_2(
      std::move(*static_cast<std::__shared_ptr<ag::FunctionEntity>*>(__r)));
  }
  static void* __shared_ptr2(void* __r, void* param2)
  {
    return new AG_std::AG___shared_ptrFunctionEntity_2(
      *static_cast<const std::__weak_ptr<ag::FunctionEntity>*>(__r),
      *static_cast<std::nothrow_t*>(param2));
  }
  static void Destructor0(void* objectHandle)
  {
    delete static_cast<AG_std::AG___shared_ptrFunctionEntity_2*>(objectHandle);
  }
};

struct AG_shared_ptrTypeReferenceEntity
  : public std::shared_ptr<ag::TypeReferenceEntity>
{
  AG_shared_ptrTypeReferenceEntity()
    : std::shared_ptr<ag::TypeReferenceEntity>()
  {
  }
  AG_shared_ptrTypeReferenceEntity(
    std::shared_ptr<ag::TypeReferenceEntity>&& __r)
    : std::shared_ptr<ag::TypeReferenceEntity>(std::move(__r))
  {
  }
  static void* shared_ptr0()
  {
    return new AG_std::AG_shared_ptrTypeReferenceEntity();
  }
  static void* shared_ptr1(void* __r)
  {
    return new AG_std::AG_shared_ptrTypeReferenceEntity(
      std::move(*static_cast<std::shared_ptr<ag::TypeReferenceEntity>*>(__r)));
  }
  static void Destructor0(void* objectHandle)
  {
    delete static_cast<AG_std::AG_shared_ptrTypeReferenceEntity*>(objectHandle);
  }
};

struct AG___shared_ptrTypeReferenceEntity_2
  : public std::__shared_ptr<ag::TypeReferenceEntity>
{
  AG___shared_ptrTypeReferenceEntity_2()
    : std::__shared_ptr<ag::TypeReferenceEntity>()
  {
  }
  AG___shared_ptrTypeReferenceEntity_2(
    std::__shared_ptr<ag::TypeReferenceEntity>&& __r)
    : std::__shared_ptr<ag::TypeReferenceEntity>(std::move(__r))
  {
  }
  AG___shared_ptrTypeReferenceEntity_2(
    const std::__weak_ptr<ag::TypeReferenceEntity>& __r,
    std::nothrow_t param2)
    : std::__shared_ptr<ag::TypeReferenceEntity>(__r, param2)
  {
  }
  static void* __shared_ptr0()
  {
    return new AG_std::AG___shared_ptrTypeReferenceEntity_2();
  }
  static void* __shared_ptr1(void* __r)
  {
    return new AG_std::AG___shared_ptrTypeReferenceEntity_2(std::move(
      *static_cast<std::__shared_ptr<ag::TypeReferenceEntity>*>(__r)));
  }
  static void* __shared_ptr2(void* __r, void* param2)
  {
    return new AG_std::AG___shared_ptrTypeReferenceEntity_2(
      *static_cast<const std::__weak_ptr<ag::TypeReferenceEntity>*>(__r),
      *static_cast<std::nothrow_t*>(param2));
  }
  static void Destructor0(void* objectHandle)
  {
    delete static_cast<AG_std::AG___shared_ptrTypeReferenceEntity_2*>(
      objectHandle);
  }
};

struct AG___shared_ptr_accessTypeReferenceEntity_2_0_0
  : public std::__shared_ptr_access<ag::TypeReferenceEntity,
                                    __gnu_cxx::_S_atomic>
{
  AG___shared_ptr_accessTypeReferenceEntity_2_0_0(
    std::__shared_ptr_access<ag::TypeReferenceEntity, __gnu_cxx::_S_atomic>&&
      param1)
    : std::__shared_ptr_access<ag::TypeReferenceEntity, __gnu_cxx::_S_atomic>(
        std::move(param1))
  {
  }
  static void Destructor0(void* objectHandle)
  {
    delete static_cast<
      AG_std::AG___shared_ptr_accessTypeReferenceEntity_2_0_0*>(objectHandle);
  }
  static void* __shared_ptr_access0(void* param1)
  {
    return new AG_std::AG___shared_ptr_accessTypeReferenceEntity_2_0_0(
      std::move(
        *static_cast<std::__shared_ptr_access<ag::TypeReferenceEntity,
                                              __gnu_cxx::_S_atomic>*>(param1)));
  }
};

struct AG___weak_ptrTypeReferenceEntity_2
{};

struct AG_weak_ptrFunctionGroupEntity
  : public std::weak_ptr<ag::FunctionGroupEntity>
{
  AG_weak_ptrFunctionGroupEntity()
    : std::weak_ptr<ag::FunctionGroupEntity>()
  {
  }
  AG_weak_ptrFunctionGroupEntity(
    std::weak_ptr<ag::FunctionGroupEntity>&& param1)
    : std::weak_ptr<ag::FunctionGroupEntity>(std::move(param1))
  {
  }
  static void* weak_ptr0()
  {
    return new AG_std::AG_weak_ptrFunctionGroupEntity();
  }
  static void* weak_ptr1(void* param1)
  {
    return new AG_std::AG_weak_ptrFunctionGroupEntity(
      std::move(*static_cast<std::weak_ptr<ag::FunctionGroupEntity>*>(param1)));
  }
  static void Destructor0(void* objectHandle)
  {
    delete static_cast<AG_std::AG_weak_ptrFunctionGroupEntity*>(objectHandle);
  }
};

struct AG___weak_ptrFunctionGroupEntity_2
  : public std::__weak_ptr<ag::FunctionGroupEntity>
{
  AG___weak_ptrFunctionGroupEntity_2()
    : std::__weak_ptr<ag::FunctionGroupEntity>()
  {
  }
  AG___weak_ptrFunctionGroupEntity_2(
    std::__weak_ptr<ag::FunctionGroupEntity>&& __r)
    : std::__weak_ptr<ag::FunctionGroupEntity>(std::move(__r))
  {
  }
  static void* __weak_ptr0()
  {
    return new AG_std::AG___weak_ptrFunctionGroupEntity_2();
  }
  static void* __weak_ptr1(void* __r)
  {
    return new AG_std::AG___weak_ptrFunctionGroupEntity_2(
      std::move(*static_cast<std::__weak_ptr<ag::FunctionGroupEntity>*>(__r)));
  }
  static void Destructor0(void* objectHandle)
  {
    delete static_cast<AG_std::AG___weak_ptrFunctionGroupEntity_2*>(
      objectHandle);
  }
};

struct AG___shared_ptrFunctionGroupEntity_2
  : public std::__shared_ptr<ag::FunctionGroupEntity>
{
  AG___shared_ptrFunctionGroupEntity_2()
    : std::__shared_ptr<ag::FunctionGroupEntity>()
  {
  }
  AG___shared_ptrFunctionGroupEntity_2(
    std::__shared_ptr<ag::FunctionGroupEntity>&& __r)
    : std::__shared_ptr<ag::FunctionGroupEntity>(std::move(__r))
  {
  }
  AG___shared_ptrFunctionGroupEntity_2(
    const std::__weak_ptr<ag::FunctionGroupEntity>& __r,
    std::nothrow_t param2)
    : std::__shared_ptr<ag::FunctionGroupEntity>(__r, param2)
  {
  }
  static void* __shared_ptr0()
  {
    return new AG_std::AG___shared_ptrFunctionGroupEntity_2();
  }
  static void* __shared_ptr1(void* __r)
  {
    return new AG_std::AG___shared_ptrFunctionGroupEntity_2(std::move(
      *static_cast<std::__shared_ptr<ag::FunctionGroupEntity>*>(__r)));
  }
  static void* __shared_ptr2(void* __r, void* param2)
  {
    return new AG_std::AG___shared_ptrFunctionGroupEntity_2(
      *static_cast<const std::__weak_ptr<ag::FunctionGroupEntity>*>(__r),
      *static_cast<std::nothrow_t*>(param2));
  }
  static void Destructor0(void* objectHandle)
  {
    delete static_cast<AG_std::AG___shared_ptrFunctionGroupEntity_2*>(
      objectHandle);
  }
};

struct AG_shared_ptrFunctionGroupEntity
  : public std::shared_ptr<ag::FunctionGroupEntity>
{
  AG_shared_ptrFunctionGroupEntity()
    : std::shared_ptr<ag::FunctionGroupEntity>()
  {
  }
  AG_shared_ptrFunctionGroupEntity(
    std::shared_ptr<ag::FunctionGroupEntity>&& __r)
    : std::shared_ptr<ag::FunctionGroupEntity>(std::move(__r))
  {
  }
  static void* shared_ptr0()
  {
    return new AG_std::AG_shared_ptrFunctionGroupEntity();
  }
  static void* shared_ptr1(void* __r)
  {
    return new AG_std::AG_shared_ptrFunctionGroupEntity(
      std::move(*static_cast<std::shared_ptr<ag::FunctionGroupEntity>*>(__r)));
  }
  static void Destructor0(void* objectHandle)
  {
    delete static_cast<AG_std::AG_shared_ptrFunctionGroupEntity*>(objectHandle);
  }
};

struct AG_shared_ptrOverloadContext
  : public std::shared_ptr<ag::clang::OverloadContext>
{
  AG_shared_ptrOverloadContext()
    : std::shared_ptr<ag::clang::OverloadContext>()
  {
  }
  AG_shared_ptrOverloadContext(
    std::shared_ptr<ag::clang::OverloadContext>&& __r)
    : std::shared_ptr<ag::clang::OverloadContext>(std::move(__r))
  {
  }
  static void* shared_ptr0()
  {
    return new AG_std::AG_shared_ptrOverloadContext();
  }
  static void* shared_ptr1(void* __r)
  {
    return new AG_std::AG_shared_ptrOverloadContext(std::move(
      *static_cast<std::shared_ptr<ag::clang::OverloadContext>*>(__r)));
  }
  static void Destructor0(void* objectHandle)
  {
    delete static_cast<AG_std::AG_shared_ptrOverloadContext*>(objectHandle);
  }
};

struct AG___shared_ptrOverloadContext_2
  : public std::__shared_ptr<ag::clang::OverloadContext>
{
  AG___shared_ptrOverloadContext_2()
    : std::__shared_ptr<ag::clang::OverloadContext>()
  {
  }
  AG___shared_ptrOverloadContext_2(
    std::__shared_ptr<ag::clang::OverloadContext>&& __r)
    : std::__shared_ptr<ag::clang::OverloadContext>(std::move(__r))
  {
  }
  AG___shared_ptrOverloadContext_2(
    const std::__weak_ptr<ag::clang::OverloadContext>& __r,
    std::nothrow_t param2)
    : std::__shared_ptr<ag::clang::OverloadContext>(__r, param2)
  {
  }
  static void* __shared_ptr0()
  {
    return new AG_std::AG___shared_ptrOverloadContext_2();
  }
  static void* __shared_ptr1(void* __r)
  {
    return new AG_std::AG___shared_ptrOverloadContext_2(std::move(
      *static_cast<std::__shared_ptr<ag::clang::OverloadContext>*>(__r)));
  }
  static void* __shared_ptr2(void* __r, void* param2)
  {
    return new AG_std::AG___shared_ptrOverloadContext_2(
      *static_cast<const std::__weak_ptr<ag::clang::OverloadContext>*>(__r),
      *static_cast<std::nothrow_t*>(param2));
  }
  static void Destructor0(void* objectHandle)
  {
    delete static_cast<AG_std::AG___shared_ptrOverloadContext_2*>(objectHandle);
  }
};

struct AG___shared_ptr_accessOverloadContext_2_0_0
  : public std::__shared_ptr_access<ag::clang::OverloadContext,
                                    __gnu_cxx::_S_atomic>
{
  AG___shared_ptr_accessOverloadContext_2_0_0(
    std::__shared_ptr_access<ag::clang::OverloadContext, __gnu_cxx::_S_atomic>&&
      param1)
    : std::__shared_ptr_access<ag::clang::OverloadContext,
                               __gnu_cxx::_S_atomic>(std::move(param1))
  {
  }
  AG___shared_ptr_accessOverloadContext_2_0_0()
    : std::__shared_ptr_access<ag::clang::OverloadContext,
                               __gnu_cxx::_S_atomic>()
  {
  }
  static void Destructor0(void* objectHandle)
  {
    delete static_cast<AG_std::AG___shared_ptr_accessOverloadContext_2_0_0*>(
      objectHandle);
  }
  static void* __shared_ptr_access0(void* param1)
  {
    return new AG_std::AG___shared_ptr_accessOverloadContext_2_0_0(std::move(
      *static_cast<std::__shared_ptr_access<ag::clang::OverloadContext,
                                            __gnu_cxx::_S_atomic>*>(param1)));
  }
  static void* __shared_ptr_access1()
  {
    return new AG_std::AG___shared_ptr_accessOverloadContext_2_0_0();
  }
};

struct AG___weak_ptrOverloadContext_2
  : public std::__weak_ptr<ag::clang::OverloadContext>
{
  AG___weak_ptrOverloadContext_2()
    : std::__weak_ptr<ag::clang::OverloadContext>()
  {
  }
  AG___weak_ptrOverloadContext_2(
    std::__weak_ptr<ag::clang::OverloadContext>&& __r)
    : std::__weak_ptr<ag::clang::OverloadContext>(std::move(__r))
  {
  }
  static void* __weak_ptr0()
  {
    return new AG_std::AG___weak_ptrOverloadContext_2();
  }
  static void* __weak_ptr1(void* __r)
  {
    return new AG_std::AG___weak_ptrOverloadContext_2(std::move(
      *static_cast<std::__weak_ptr<ag::clang::OverloadContext>*>(__r)));
  }
  static void Destructor0(void* objectHandle)
  {
    delete static_cast<AG_std::AG___weak_ptrOverloadContext_2*>(objectHandle);
  }
};

struct AG___shared_ptrEntity_2 : public std::__shared_ptr<ag::Entity>
{
  AG___shared_ptrEntity_2()
    : std::__shared_ptr<ag::Entity>()
  {
  }
  AG___shared_ptrEntity_2(std::__shared_ptr<ag::Entity>&& __r)
    : std::__shared_ptr<ag::Entity>(std::move(__r))
  {
  }
  AG___shared_ptrEntity_2(const std::__weak_ptr<ag::Entity>& __r,
                          std::nothrow_t param2)
    : std::__shared_ptr<ag::Entity>(__r, param2)
  {
  }
  static void* __shared_ptr0() { return new AG_std::AG___shared_ptrEntity_2(); }
  static void* __shared_ptr1(void* __r)
  {
    return new AG_std::AG___shared_ptrEntity_2(
      std::move(*static_cast<std::__shared_ptr<ag::Entity>*>(__r)));
  }
  static void* __shared_ptr2(void* __r, void* param2)
  {
    return new AG_std::AG___shared_ptrEntity_2(
      *static_cast<const std::__weak_ptr<ag::Entity>*>(__r),
      *static_cast<std::nothrow_t*>(param2));
  }
  static void Destructor0(void* objectHandle)
  {
    delete static_cast<AG_std::AG___shared_ptrEntity_2*>(objectHandle);
  }
};

struct AG___shared_ptr_accessEntity_2_0_0
  : public std::__shared_ptr_access<ag::Entity, __gnu_cxx::_S_atomic>
{
  AG___shared_ptr_accessEntity_2_0_0(
    std::__shared_ptr_access<ag::Entity, __gnu_cxx::_S_atomic>&& param1)
    : std::__shared_ptr_access<ag::Entity, __gnu_cxx::_S_atomic>(
        std::move(param1))
  {
  }
  AG___shared_ptr_accessEntity_2_0_0()
    : std::__shared_ptr_access<ag::Entity, __gnu_cxx::_S_atomic>()
  {
  }
  static void Destructor0(void* objectHandle)
  {
    delete static_cast<AG_std::AG___shared_ptr_accessEntity_2_0_0*>(
      objectHandle);
  }
  static void* __shared_ptr_access0(void* param1)
  {
    return new AG_std::AG___shared_ptr_accessEntity_2_0_0(std::move(
      *static_cast<std::__shared_ptr_access<ag::Entity, __gnu_cxx::_S_atomic>*>(
        param1)));
  }
  static void* __shared_ptr_access1()
  {
    return new AG_std::AG___shared_ptr_accessEntity_2_0_0();
  }
};

struct AG___weak_ptrEntity_2
{};

struct AG_enable_shared_from_thisClassEntity
  : public std::enable_shared_from_this<ag::ClassEntity>
{
  AG_enable_shared_from_thisClassEntity()
    : std::enable_shared_from_this<ag::ClassEntity>()
  {
  }
  static void* enable_shared_from_this0()
  {
    return new AG_std::AG_enable_shared_from_thisClassEntity();
  }
  static void Destructor0(void* objectHandle)
  {
    delete static_cast<AG_std::AG_enable_shared_from_thisClassEntity*>(
      objectHandle);
  }
};

struct AG_shared_ptrClassEntity : public std::shared_ptr<ag::ClassEntity>
{
  AG_shared_ptrClassEntity()
    : std::shared_ptr<ag::ClassEntity>()
  {
  }
  AG_shared_ptrClassEntity(std::shared_ptr<ag::ClassEntity>&& __r)
    : std::shared_ptr<ag::ClassEntity>(std::move(__r))
  {
  }
  static void* shared_ptr0() { return new AG_std::AG_shared_ptrClassEntity(); }
  static void* shared_ptr1(void* __r)
  {
    return new AG_std::AG_shared_ptrClassEntity(
      std::move(*static_cast<std::shared_ptr<ag::ClassEntity>*>(__r)));
  }
  static void Destructor0(void* objectHandle)
  {
    delete static_cast<AG_std::AG_shared_ptrClassEntity*>(objectHandle);
  }
};

struct AG___shared_ptrClassEntity_2 : public std::__shared_ptr<ag::ClassEntity>
{
  AG___shared_ptrClassEntity_2()
    : std::__shared_ptr<ag::ClassEntity>()
  {
  }
  AG___shared_ptrClassEntity_2(std::__shared_ptr<ag::ClassEntity>&& __r)
    : std::__shared_ptr<ag::ClassEntity>(std::move(__r))
  {
  }
  AG___shared_ptrClassEntity_2(const std::__weak_ptr<ag::ClassEntity>& __r,
                               std::nothrow_t param2)
    : std::__shared_ptr<ag::ClassEntity>(__r, param2)
  {
  }
  static void* __shared_ptr0()
  {
    return new AG_std::AG___shared_ptrClassEntity_2();
  }
  static void* __shared_ptr1(void* __r)
  {
    return new AG_std::AG___shared_ptrClassEntity_2(
      std::move(*static_cast<std::__shared_ptr<ag::ClassEntity>*>(__r)));
  }
  static void* __shared_ptr2(void* __r, void* param2)
  {
    return new AG_std::AG___shared_ptrClassEntity_2(
      *static_cast<const std::__weak_ptr<ag::ClassEntity>*>(__r),
      *static_cast<std::nothrow_t*>(param2));
  }
  static void Destructor0(void* objectHandle)
  {
    delete static_cast<AG_std::AG___shared_ptrClassEntity_2*>(objectHandle);
  }
};

struct AG___shared_ptr_accessClassEntity_2_0_0
  : public std::__shared_ptr_access<ag::ClassEntity, __gnu_cxx::_S_atomic>
{
  AG___shared_ptr_accessClassEntity_2_0_0(
    std::__shared_ptr_access<ag::ClassEntity, __gnu_cxx::_S_atomic>&& param1)
    : std::__shared_ptr_access<ag::ClassEntity, __gnu_cxx::_S_atomic>(
        std::move(param1))
  {
  }
  static void Destructor0(void* objectHandle)
  {
    delete static_cast<AG_std::AG___shared_ptr_accessClassEntity_2_0_0*>(
      objectHandle);
  }
  static void* __shared_ptr_access0(void* param1)
  {
    return new AG_std::AG___shared_ptr_accessClassEntity_2_0_0(std::move(
      *static_cast<
        std::__shared_ptr_access<ag::ClassEntity, __gnu_cxx::_S_atomic>*>(
        param1)));
  }
};

struct AG___weak_ptrClassEntity_2 : public std::__weak_ptr<ag::ClassEntity>
{
  AG___weak_ptrClassEntity_2()
    : std::__weak_ptr<ag::ClassEntity>()
  {
  }
  AG___weak_ptrClassEntity_2(std::__weak_ptr<ag::ClassEntity>&& __r)
    : std::__weak_ptr<ag::ClassEntity>(std::move(__r))
  {
  }
  static void* __weak_ptr0()
  {
    return new AG_std::AG___weak_ptrClassEntity_2();
  }
  static void* __weak_ptr1(void* __r)
  {
    return new AG_std::AG___weak_ptrClassEntity_2(
      std::move(*static_cast<std::__weak_ptr<ag::ClassEntity>*>(__r)));
  }
  static void Destructor0(void* objectHandle)
  {
    delete static_cast<AG_std::AG___weak_ptrClassEntity_2*>(objectHandle);
  }
};

struct AG_weak_ptrClassEntity : public std::weak_ptr<ag::ClassEntity>
{
  AG_weak_ptrClassEntity()
    : std::weak_ptr<ag::ClassEntity>()
  {
  }
  AG_weak_ptrClassEntity(std::weak_ptr<ag::ClassEntity>&& param1)
    : std::weak_ptr<ag::ClassEntity>(std::move(param1))
  {
  }
  static void* weak_ptr0() { return new AG_std::AG_weak_ptrClassEntity(); }
  static void* weak_ptr1(void* param1)
  {
    return new AG_std::AG_weak_ptrClassEntity(
      std::move(*static_cast<std::weak_ptr<ag::ClassEntity>*>(param1)));
  }
  static void Destructor0(void* objectHandle)
  {
    delete static_cast<AG_std::AG_weak_ptrClassEntity*>(objectHandle);
  }
};

struct AG_shared_ptrTypeEntity : public std::shared_ptr<ag::TypeEntity>
{
  AG_shared_ptrTypeEntity()
    : std::shared_ptr<ag::TypeEntity>()
  {
  }
  AG_shared_ptrTypeEntity(std::shared_ptr<ag::TypeEntity>&& __r)
    : std::shared_ptr<ag::TypeEntity>(std::move(__r))
  {
  }
  static void* shared_ptr0() { return new AG_std::AG_shared_ptrTypeEntity(); }
  static void* shared_ptr1(void* __r)
  {
    return new AG_std::AG_shared_ptrTypeEntity(
      std::move(*static_cast<std::shared_ptr<ag::TypeEntity>*>(__r)));
  }
  static void Destructor0(void* objectHandle)
  {
    delete static_cast<AG_std::AG_shared_ptrTypeEntity*>(objectHandle);
  }
};

struct AG___shared_ptrTypeEntity_2 : public std::__shared_ptr<ag::TypeEntity>
{
  AG___shared_ptrTypeEntity_2()
    : std::__shared_ptr<ag::TypeEntity>()
  {
  }
  AG___shared_ptrTypeEntity_2(std::__shared_ptr<ag::TypeEntity>&& __r)
    : std::__shared_ptr<ag::TypeEntity>(std::move(__r))
  {
  }
  AG___shared_ptrTypeEntity_2(const std::__weak_ptr<ag::TypeEntity>& __r,
                              std::nothrow_t param2)
    : std::__shared_ptr<ag::TypeEntity>(__r, param2)
  {
  }
  static void* __shared_ptr0()
  {
    return new AG_std::AG___shared_ptrTypeEntity_2();
  }
  static void* __shared_ptr1(void* __r)
  {
    return new AG_std::AG___shared_ptrTypeEntity_2(
      std::move(*static_cast<std::__shared_ptr<ag::TypeEntity>*>(__r)));
  }
  static void* __shared_ptr2(void* __r, void* param2)
  {
    return new AG_std::AG___shared_ptrTypeEntity_2(
      *static_cast<const std::__weak_ptr<ag::TypeEntity>*>(__r),
      *static_cast<std::nothrow_t*>(param2));
  }
  static void Destructor0(void* objectHandle)
  {
    delete static_cast<AG_std::AG___shared_ptrTypeEntity_2*>(objectHandle);
  }
};

struct AG___shared_ptr_accessTypeEntity_2_0_0
  : public std::__shared_ptr_access<ag::TypeEntity, __gnu_cxx::_S_atomic>
{
  AG___shared_ptr_accessTypeEntity_2_0_0(
    std::__shared_ptr_access<ag::TypeEntity, __gnu_cxx::_S_atomic>&& param1)
    : std::__shared_ptr_access<ag::TypeEntity, __gnu_cxx::_S_atomic>(
        std::move(param1))
  {
  }
  AG___shared_ptr_accessTypeEntity_2_0_0()
    : std::__shared_ptr_access<ag::TypeEntity, __gnu_cxx::_S_atomic>()
  {
  }
  static void Destructor0(void* objectHandle)
  {
    delete static_cast<AG_std::AG___shared_ptr_accessTypeEntity_2_0_0*>(
      objectHandle);
  }
  static void* __shared_ptr_access0(void* param1)
  {
    return new AG_std::AG___shared_ptr_accessTypeEntity_2_0_0(std::move(
      *static_cast<
        std::__shared_ptr_access<ag::TypeEntity, __gnu_cxx::_S_atomic>*>(
        param1)));
  }
  static void* __shared_ptr_access1()
  {
    return new AG_std::AG___shared_ptr_accessTypeEntity_2_0_0();
  }
};

struct AG___weak_ptrTypeEntity_2 : public std::__weak_ptr<ag::TypeEntity>
{
  AG___weak_ptrTypeEntity_2()
    : std::__weak_ptr<ag::TypeEntity>()
  {
  }
  AG___weak_ptrTypeEntity_2(std::__weak_ptr<ag::TypeEntity>&& __r)
    : std::__weak_ptr<ag::TypeEntity>(std::move(__r))
  {
  }
  static void* __weak_ptr0() { return new AG_std::AG___weak_ptrTypeEntity_2(); }
  static void* __weak_ptr1(void* __r)
  {
    return new AG_std::AG___weak_ptrTypeEntity_2(
      std::move(*static_cast<std::__weak_ptr<ag::TypeEntity>*>(__r)));
  }
  static void Destructor0(void* objectHandle)
  {
    delete static_cast<AG_std::AG___weak_ptrTypeEntity_2*>(objectHandle);
  }
};

struct AG_shared_ptrEnumEntryEntity
  : public std::shared_ptr<ag::EnumEntryEntity>
{
  AG_shared_ptrEnumEntryEntity()
    : std::shared_ptr<ag::EnumEntryEntity>()
  {
  }
  AG_shared_ptrEnumEntryEntity(std::shared_ptr<ag::EnumEntryEntity>&& __r)
    : std::shared_ptr<ag::EnumEntryEntity>(std::move(__r))
  {
  }
  static void* shared_ptr0()
  {
    return new AG_std::AG_shared_ptrEnumEntryEntity();
  }
  static void* shared_ptr1(void* __r)
  {
    return new AG_std::AG_shared_ptrEnumEntryEntity(
      std::move(*static_cast<std::shared_ptr<ag::EnumEntryEntity>*>(__r)));
  }
  static void Destructor0(void* objectHandle)
  {
    delete static_cast<AG_std::AG_shared_ptrEnumEntryEntity*>(objectHandle);
  }
};

struct AG_shared_ptrPrimitiveEntity
  : public std::shared_ptr<ag::PrimitiveEntity>
{
  AG_shared_ptrPrimitiveEntity()
    : std::shared_ptr<ag::PrimitiveEntity>()
  {
  }
  AG_shared_ptrPrimitiveEntity(std::shared_ptr<ag::PrimitiveEntity>&& __r)
    : std::shared_ptr<ag::PrimitiveEntity>(std::move(__r))
  {
  }
  static void* shared_ptr0()
  {
    return new AG_std::AG_shared_ptrPrimitiveEntity();
  }
  static void* shared_ptr1(void* __r)
  {
    return new AG_std::AG_shared_ptrPrimitiveEntity(
      std::move(*static_cast<std::shared_ptr<ag::PrimitiveEntity>*>(__r)));
  }
  static void Destructor0(void* objectHandle)
  {
    delete static_cast<AG_std::AG_shared_ptrPrimitiveEntity*>(objectHandle);
  }
};

struct AG___shared_ptrPrimitiveEntity_2
  : public std::__shared_ptr<ag::PrimitiveEntity>
{
  AG___shared_ptrPrimitiveEntity_2()
    : std::__shared_ptr<ag::PrimitiveEntity>()
  {
  }
  AG___shared_ptrPrimitiveEntity_2(std::__shared_ptr<ag::PrimitiveEntity>&& __r)
    : std::__shared_ptr<ag::PrimitiveEntity>(std::move(__r))
  {
  }
  AG___shared_ptrPrimitiveEntity_2(
    const std::__weak_ptr<ag::PrimitiveEntity>& __r,
    std::nothrow_t param2)
    : std::__shared_ptr<ag::PrimitiveEntity>(__r, param2)
  {
  }
  static void* __shared_ptr0()
  {
    return new AG_std::AG___shared_ptrPrimitiveEntity_2();
  }
  static void* __shared_ptr1(void* __r)
  {
    return new AG_std::AG___shared_ptrPrimitiveEntity_2(
      std::move(*static_cast<std::__shared_ptr<ag::PrimitiveEntity>*>(__r)));
  }
  static void* __shared_ptr2(void* __r, void* param2)
  {
    return new AG_std::AG___shared_ptrPrimitiveEntity_2(
      *static_cast<const std::__weak_ptr<ag::PrimitiveEntity>*>(__r),
      *static_cast<std::nothrow_t*>(param2));
  }
  static void Destructor0(void* objectHandle)
  {
    delete static_cast<AG_std::AG___shared_ptrPrimitiveEntity_2*>(objectHandle);
  }
};

struct AG___shared_ptr_accessPrimitiveEntity_2_0_0
  : public std::__shared_ptr_access<ag::PrimitiveEntity, __gnu_cxx::_S_atomic>
{
  AG___shared_ptr_accessPrimitiveEntity_2_0_0(
    std::__shared_ptr_access<ag::PrimitiveEntity, __gnu_cxx::_S_atomic>&&
      param1)
    : std::__shared_ptr_access<ag::PrimitiveEntity, __gnu_cxx::_S_atomic>(
        std::move(param1))
  {
  }
  static void Destructor0(void* objectHandle)
  {
    delete static_cast<AG_std::AG___shared_ptr_accessPrimitiveEntity_2_0_0*>(
      objectHandle);
  }
  static void* __shared_ptr_access0(void* param1)
  {
    return new AG_std::AG___shared_ptr_accessPrimitiveEntity_2_0_0(std::move(
      *static_cast<
        std::__shared_ptr_access<ag::PrimitiveEntity, __gnu_cxx::_S_atomic>*>(
        param1)));
  }
};

struct AG___weak_ptrPrimitiveEntity_2
{};

struct AG___shared_ptrEnumEntryEntity_2
  : public std::__shared_ptr<ag::EnumEntryEntity>
{
  AG___shared_ptrEnumEntryEntity_2()
    : std::__shared_ptr<ag::EnumEntryEntity>()
  {
  }
  AG___shared_ptrEnumEntryEntity_2(std::__shared_ptr<ag::EnumEntryEntity>&& __r)
    : std::__shared_ptr<ag::EnumEntryEntity>(std::move(__r))
  {
  }
  AG___shared_ptrEnumEntryEntity_2(
    const std::__weak_ptr<ag::EnumEntryEntity>& __r,
    std::nothrow_t param2)
    : std::__shared_ptr<ag::EnumEntryEntity>(__r, param2)
  {
  }
  static void* __shared_ptr0()
  {
    return new AG_std::AG___shared_ptrEnumEntryEntity_2();
  }
  static void* __shared_ptr1(void* __r)
  {
    return new AG_std::AG___shared_ptrEnumEntryEntity_2(
      std::move(*static_cast<std::__shared_ptr<ag::EnumEntryEntity>*>(__r)));
  }
  static void* __shared_ptr2(void* __r, void* param2)
  {
    return new AG_std::AG___shared_ptrEnumEntryEntity_2(
      *static_cast<const std::__weak_ptr<ag::EnumEntryEntity>*>(__r),
      *static_cast<std::nothrow_t*>(param2));
  }
  static void Destructor0(void* objectHandle)
  {
    delete static_cast<AG_std::AG___shared_ptrEnumEntryEntity_2*>(objectHandle);
  }
};

struct AG___shared_ptr_accessEnumEntryEntity_2_0_0
  : public std::__shared_ptr_access<ag::EnumEntryEntity, __gnu_cxx::_S_atomic>
{
  AG___shared_ptr_accessEnumEntryEntity_2_0_0(
    std::__shared_ptr_access<ag::EnumEntryEntity, __gnu_cxx::_S_atomic>&&
      param1)
    : std::__shared_ptr_access<ag::EnumEntryEntity, __gnu_cxx::_S_atomic>(
        std::move(param1))
  {
  }
  AG___shared_ptr_accessEnumEntryEntity_2_0_0()
    : std::__shared_ptr_access<ag::EnumEntryEntity, __gnu_cxx::_S_atomic>()
  {
  }
  static void Destructor0(void* objectHandle)
  {
    delete static_cast<AG_std::AG___shared_ptr_accessEnumEntryEntity_2_0_0*>(
      objectHandle);
  }
  static void* __shared_ptr_access0(void* param1)
  {
    return new AG_std::AG___shared_ptr_accessEnumEntryEntity_2_0_0(std::move(
      *static_cast<
        std::__shared_ptr_access<ag::EnumEntryEntity, __gnu_cxx::_S_atomic>*>(
        param1)));
  }
  static void* __shared_ptr_access1()
  {
    return new AG_std::AG___shared_ptr_accessEnumEntryEntity_2_0_0();
  }
};

struct AG___weak_ptrEnumEntryEntity_2
  : public std::__weak_ptr<ag::EnumEntryEntity>
{
  AG___weak_ptrEnumEntryEntity_2()
    : std::__weak_ptr<ag::EnumEntryEntity>()
  {
  }
  AG___weak_ptrEnumEntryEntity_2(std::__weak_ptr<ag::EnumEntryEntity>&& __r)
    : std::__weak_ptr<ag::EnumEntryEntity>(std::move(__r))
  {
  }
  static void* __weak_ptr0()
  {
    return new AG_std::AG___weak_ptrEnumEntryEntity_2();
  }
  static void* __weak_ptr1(void* __r)
  {
    return new AG_std::AG___weak_ptrEnumEntryEntity_2(
      std::move(*static_cast<std::__weak_ptr<ag::EnumEntryEntity>*>(__r)));
  }
  static void Destructor0(void* objectHandle)
  {
    delete static_cast<AG_std::AG___weak_ptrEnumEntryEntity_2*>(objectHandle);
  }
};

struct AG___shared_ptr_accessFunctionEntity_2_0_0
  : public std::__shared_ptr_access<ag::FunctionEntity, __gnu_cxx::_S_atomic>
{
  AG___shared_ptr_accessFunctionEntity_2_0_0(
    std::__shared_ptr_access<ag::FunctionEntity, __gnu_cxx::_S_atomic>&& param1)
    : std::__shared_ptr_access<ag::FunctionEntity, __gnu_cxx::_S_atomic>(
        std::move(param1))
  {
  }
  AG___shared_ptr_accessFunctionEntity_2_0_0()
    : std::__shared_ptr_access<ag::FunctionEntity, __gnu_cxx::_S_atomic>()
  {
  }
  static void Destructor0(void* objectHandle)
  {
    delete static_cast<AG_std::AG___shared_ptr_accessFunctionEntity_2_0_0*>(
      objectHandle);
  }
  static void* __shared_ptr_access0(void* param1)
  {
    return new AG_std::AG___shared_ptr_accessFunctionEntity_2_0_0(std::move(
      *static_cast<
        std::__shared_ptr_access<ag::FunctionEntity, __gnu_cxx::_S_atomic>*>(
        param1)));
  }
  static void* __shared_ptr_access1()
  {
    return new AG_std::AG___shared_ptr_accessFunctionEntity_2_0_0();
  }
};

struct AG_shared_ptrDirIterImpl
  : public std::shared_ptr<llvm::vfs::detail::DirIterImpl>
{
  AG_shared_ptrDirIterImpl()
    : std::shared_ptr<llvm::vfs::detail::DirIterImpl>()
  {
  }
  AG_shared_ptrDirIterImpl(
    std::shared_ptr<llvm::vfs::detail::DirIterImpl>&& __r)
    : std::shared_ptr<llvm::vfs::detail::DirIterImpl>(std::move(__r))
  {
  }
  static void* shared_ptr0() { return new AG_std::AG_shared_ptrDirIterImpl(); }
  static void* shared_ptr1(void* __r)
  {
    return new AG_std::AG_shared_ptrDirIterImpl(std::move(
      *static_cast<std::shared_ptr<llvm::vfs::detail::DirIterImpl>*>(__r)));
  }
  static void Destructor0(void* objectHandle)
  {
    delete static_cast<AG_std::AG_shared_ptrDirIterImpl*>(objectHandle);
  }
};

struct AG___shared_ptrDirIterImpl_2
  : public std::__shared_ptr<llvm::vfs::detail::DirIterImpl>
{
  AG___shared_ptrDirIterImpl_2()
    : std::__shared_ptr<llvm::vfs::detail::DirIterImpl>()
  {
  }
  AG___shared_ptrDirIterImpl_2(
    std::__shared_ptr<llvm::vfs::detail::DirIterImpl>&& __r)
    : std::__shared_ptr<llvm::vfs::detail::DirIterImpl>(std::move(__r))
  {
  }
  AG___shared_ptrDirIterImpl_2(
    const std::__weak_ptr<llvm::vfs::detail::DirIterImpl>& __r,
    std::nothrow_t param2)
    : std::__shared_ptr<llvm::vfs::detail::DirIterImpl>(__r, param2)
  {
  }
  static void* __shared_ptr0()
  {
    return new AG_std::AG___shared_ptrDirIterImpl_2();
  }
  static void* __shared_ptr1(void* __r)
  {
    return new AG_std::AG___shared_ptrDirIterImpl_2(std::move(
      *static_cast<std::__shared_ptr<llvm::vfs::detail::DirIterImpl>*>(__r)));
  }
  static void* __shared_ptr2(void* __r, void* param2)
  {
    return new AG_std::AG___shared_ptrDirIterImpl_2(
      *static_cast<const std::__weak_ptr<llvm::vfs::detail::DirIterImpl>*>(__r),
      *static_cast<std::nothrow_t*>(param2));
  }
  static void Destructor0(void* objectHandle)
  {
    delete static_cast<AG_std::AG___shared_ptrDirIterImpl_2*>(objectHandle);
  }
};

struct AG___shared_ptr_accessDirIterImpl_2_0_0
  : public std::__shared_ptr_access<llvm::vfs::detail::DirIterImpl,
                                    __gnu_cxx::_S_atomic>
{
  AG___shared_ptr_accessDirIterImpl_2_0_0(
    std::__shared_ptr_access<llvm::vfs::detail::DirIterImpl,
                             __gnu_cxx::_S_atomic>&& param1)
    : std::__shared_ptr_access<llvm::vfs::detail::DirIterImpl,
                               __gnu_cxx::_S_atomic>(std::move(param1))
  {
  }
  AG___shared_ptr_accessDirIterImpl_2_0_0()
    : std::__shared_ptr_access<llvm::vfs::detail::DirIterImpl,
                               __gnu_cxx::_S_atomic>()
  {
  }
  static void Destructor0(void* objectHandle)
  {
    delete static_cast<AG_std::AG___shared_ptr_accessDirIterImpl_2_0_0*>(
      objectHandle);
  }
  static void* __shared_ptr_access0(void* param1)
  {
    return new AG_std::AG___shared_ptr_accessDirIterImpl_2_0_0(std::move(
      *static_cast<std::__shared_ptr_access<llvm::vfs::detail::DirIterImpl,
                                            __gnu_cxx::_S_atomic>*>(param1)));
  }
  static void* __shared_ptr_access1()
  {
    return new AG_std::AG___shared_ptr_accessDirIterImpl_2_0_0();
  }
};

struct AG___weak_ptrDirIterImpl_2
{};

struct AG___shared_ptr_accessFunctionGroupEntity_2_0_0
  : public std::__shared_ptr_access<ag::FunctionGroupEntity,
                                    __gnu_cxx::_S_atomic>
{
  AG___shared_ptr_accessFunctionGroupEntity_2_0_0(
    std::__shared_ptr_access<ag::FunctionGroupEntity, __gnu_cxx::_S_atomic>&&
      param1)
    : std::__shared_ptr_access<ag::FunctionGroupEntity, __gnu_cxx::_S_atomic>(
        std::move(param1))
  {
  }
  static void Destructor0(void* objectHandle)
  {
    delete static_cast<
      AG_std::AG___shared_ptr_accessFunctionGroupEntity_2_0_0*>(objectHandle);
  }
  static void* __shared_ptr_access0(void* param1)
  {
    return new AG_std::AG___shared_ptr_accessFunctionGroupEntity_2_0_0(
      std::move(
        *static_cast<std::__shared_ptr_access<ag::FunctionGroupEntity,
                                              __gnu_cxx::_S_atomic>*>(param1)));
  }
};

}
namespace AG___gnu_cxx {
struct AG___normal_iteratorpath_vectorpath_allocatorpath
  : public __gnu_cxx::__normal_iterator<std::filesystem::path*,
                                        std::vector<std::filesystem::path>>
{
  AG___normal_iteratorpath_vectorpath_allocatorpath()
    : __gnu_cxx::__normal_iterator<std::filesystem::path*,
                                   std::vector<std::filesystem::path>>()
  {
  }
  AG___normal_iteratorpath_vectorpath_allocatorpath(
    std::filesystem::path* const& __i)
    : __gnu_cxx::__normal_iterator<std::filesystem::path*,
                                   std::vector<std::filesystem::path>>(__i)
  {
  }
  AG___normal_iteratorpath_vectorpath_allocatorpath(
    __gnu_cxx::__normal_iterator<std::filesystem::path*,
                                 std::vector<std::filesystem::path>>&& param1)
    : __gnu_cxx::__normal_iterator<std::filesystem::path*,
                                   std::vector<std::filesystem::path>>(
        std::move(param1))
  {
  }
  static void* __normal_iterator0()
  {
    return new AG___gnu_cxx::
      AG___normal_iteratorpath_vectorpath_allocatorpath();
  }
  static void* __normal_iterator1(void* __i)
  {
    return new AG___gnu_cxx::AG___normal_iteratorpath_vectorpath_allocatorpath(
      *static_cast<std::filesystem::path* const*>(__i));
  }
  static void* __normal_iterator2(void* param1)
  {
    return new AG___gnu_cxx::AG___normal_iteratorpath_vectorpath_allocatorpath(
      std::move(
        *static_cast<
          __gnu_cxx::__normal_iterator<std::filesystem::path*,
                                       std::vector<std::filesystem::path>>*>(
          param1)));
  }
  static void Destructor0(void* objectHandle)
  {
    delete static_cast<
      AG___gnu_cxx::AG___normal_iteratorpath_vectorpath_allocatorpath*>(
      objectHandle);
  }
};

}
namespace AG_ag {
struct AG_FileList : public ag::FileList
{
  AG_FileList(std::filesystem::path rootDirectory,
              std::basic_string_view<char> extension)
    : ag::FileList(rootDirectory, extension)
  {
  }
  AG_FileList(ag::FileList&& param1)
    : ag::FileList(std::move(param1))
  {
  }
  static void* FileList0(void* rootDirectory, void* extension)
  {
    return new AG_ag::AG_FileList(
      *static_cast<std::filesystem::path*>(rootDirectory),
      *static_cast<std::basic_string_view<char>*>(extension));
  }
  static void* FileList1(void* param1)
  {
    return new AG_ag::AG_FileList(
      std::move(*static_cast<ag::FileList*>(param1)));
  }
  static void* begin0(void* objectHandle)
  {
    return new __gnu_cxx::__normal_iterator<std::filesystem::path*,
                                            std::vector<std::filesystem::path>>(
      static_cast<AG_ag::AG_FileList*>(objectHandle)->ag::FileList::begin());
  }
  static void* end0(void* objectHandle)
  {
    return new __gnu_cxx::__normal_iterator<std::filesystem::path*,
                                            std::vector<std::filesystem::path>>(
      static_cast<AG_ag::AG_FileList*>(objectHandle)->ag::FileList::end());
  }
  static void Destructor0(void* objectHandle)
  {
    delete static_cast<AG_ag::AG_FileList*>(objectHandle);
  }
};

namespace AG_clang {
struct AG_EntityContext : public ag::clang::EntityContext
{
  AG_EntityContext(ag::clang::EntityContext::Type type)
    : ag::clang::EntityContext(type)
  {
  }
  AG_EntityContext(ag::clang::EntityContext&& param1)
    : ag::clang::EntityContext(std::move(param1))
  {
  }
  static void* EntityContext0(int type)
  {
    return new AG_ag::AG_clang::AG_EntityContext(
      static_cast<ag::clang::EntityContext::Type>(type));
  }
  static void* EntityContext1(void* param1)
  {
    return new AG_ag::AG_clang::AG_EntityContext(
      std::move(*static_cast<ag::clang::EntityContext*>(param1)));
  }
  static void* getTypeContext0(void* objectHandle)
  {
    return new std::shared_ptr<ag::clang::TypeContext>(
      static_cast<AG_ag::AG_clang::AG_EntityContext*>(objectHandle)
        ->ag::clang::EntityContext::getTypeContext());
  }
  static void* getTyperefContext0(void* objectHandle)
  {
    return new std::shared_ptr<ag::clang::TyperefContext>(
      static_cast<AG_ag::AG_clang::AG_EntityContext*>(objectHandle)
        ->ag::clang::EntityContext::getTyperefContext());
  }
  static void* getFunctionContext0(void* objectHandle)
  {
    return new std::shared_ptr<ag::clang::FunctionContext>(
      static_cast<AG_ag::AG_clang::AG_EntityContext*>(objectHandle)
        ->ag::clang::EntityContext::getFunctionContext());
  }
  static void* getOverloadContext0(void* objectHandle)
  {
    return new std::shared_ptr<ag::clang::OverloadContext>(
      static_cast<AG_ag::AG_clang::AG_EntityContext*>(objectHandle)
        ->ag::clang::EntityContext::getOverloadContext());
  }
  static void Destructor0(void* objectHandle)
  {
    delete static_cast<AG_ag::AG_clang::AG_EntityContext*>(objectHandle);
  }
};

struct AG_TypeContext : public ag::clang::TypeContext
{
  AG_TypeContext(std::basic_string<char>&& includePath,
                 std::basic_string<char>&& realName)
    : ag::clang::TypeContext(std::move(includePath), std::move(realName))
  {
  }
  AG_TypeContext(ag::clang::TypeContext&& param1)
    : ag::clang::TypeContext(std::move(param1))
  {
  }
  static void* TypeContext0(void* includePath, void* realName)
  {
    return new AG_ag::AG_clang::AG_TypeContext(
      std::move(*static_cast<std::basic_string<char>*>(includePath)),
      std::move(*static_cast<std::basic_string<char>*>(realName)));
  }
  static void* TypeContext1(void* param1)
  {
    return new AG_ag::AG_clang::AG_TypeContext(
      std::move(*static_cast<ag::clang::TypeContext*>(param1)));
  }
  static void* getInclude0(void* objectHandle)
  {
    return (void*)&static_cast<AG_ag::AG_clang::AG_TypeContext*>(objectHandle)
      ->ag::clang::TypeContext::getInclude();
  }
  static void* getRealName0(void* objectHandle)
  {
    return (void*)&static_cast<AG_ag::AG_clang::AG_TypeContext*>(objectHandle)
      ->ag::clang::TypeContext::getRealName();
  }
  static void Destructor0(void* objectHandle)
  {
    delete static_cast<AG_ag::AG_clang::AG_TypeContext*>(objectHandle);
  }
};

struct AG_TyperefContext : public ag::clang::TyperefContext
{
  AG_TyperefContext(clang::QualType type, const clang::ASTContext& ctx)
    : ag::clang::TyperefContext(type, ctx)
  {
  }
  AG_TyperefContext(ag::clang::TyperefContext&& param1)
    : ag::clang::TyperefContext(std::move(param1))
  {
  }
  static void* TyperefContext0(void* type, void* ctx)
  {
    return new AG_ag::AG_clang::AG_TyperefContext(
      *static_cast<clang::QualType*>(type),
      *static_cast<const clang::ASTContext*>(ctx));
  }
  static void* TyperefContext1(void* param1)
  {
    return new AG_ag::AG_clang::AG_TyperefContext(
      std::move(*static_cast<ag::clang::TyperefContext*>(param1)));
  }
  static bool isRValueReference0(void* objectHandle)
  {
    return static_cast<AG_ag::AG_clang::AG_TyperefContext*>(objectHandle)
      ->ag::clang::TyperefContext::isRValueReference();
  }
  static bool isPointer0(void* objectHandle)
  {
    return static_cast<AG_ag::AG_clang::AG_TyperefContext*>(objectHandle)
      ->ag::clang::TyperefContext::isPointer();
  }
  static bool isConst0(void* objectHandle)
  {
    return static_cast<AG_ag::AG_clang::AG_TyperefContext*>(objectHandle)
      ->ag::clang::TyperefContext::isConst();
  }
  static bool isTypeTriviallyCopyable0(void* objectHandle)
  {
    return static_cast<AG_ag::AG_clang::AG_TyperefContext*>(objectHandle)
      ->ag::clang::TyperefContext::isTypeTriviallyCopyable();
  }
  static void* getWrittenType0(void* objectHandle)
  {
    return (void*)&static_cast<AG_ag::AG_clang::AG_TyperefContext*>(
             objectHandle)
      ->ag::clang::TyperefContext::getWrittenType();
  }
  static void* getOriginalType0(void* objectHandle)
  {
    return (void*)&static_cast<AG_ag::AG_clang::AG_TyperefContext*>(
             objectHandle)
      ->ag::clang::TyperefContext::getOriginalType();
  }
  static void Destructor0(void* objectHandle)
  {
    delete static_cast<AG_ag::AG_clang::AG_TyperefContext*>(objectHandle);
  }
};

struct AG_FunctionContext : public ag::clang::FunctionContext
{
  AG_FunctionContext(const clang::FunctionDecl* decl)
    : ag::clang::FunctionContext(decl)
  {
  }
  AG_FunctionContext(ag::clang::FunctionContext&& param1)
    : ag::clang::FunctionContext(std::move(param1))
  {
  }
  static void* FunctionContext0(void* decl)
  {
    return new AG_ag::AG_clang::AG_FunctionContext(
      static_cast<const clang::FunctionDecl*>(decl));
  }
  static void* FunctionContext1(void* param1)
  {
    return new AG_ag::AG_clang::AG_FunctionContext(
      std::move(*static_cast<ag::clang::FunctionContext*>(param1)));
  }
  static void* getSelfType0(void* objectHandle)
  {
    return new std::basic_string_view<char>(
      static_cast<AG_ag::AG_clang::AG_FunctionContext*>(objectHandle)
        ->ag::clang::FunctionContext::getSelfType());
  }
  static void* getOriginalName0(void* objectHandle)
  {
    return new std::basic_string_view<char>(
      static_cast<AG_ag::AG_clang::AG_FunctionContext*>(objectHandle)
        ->ag::clang::FunctionContext::getOriginalName());
  }
  static void Destructor0(void* objectHandle)
  {
    delete static_cast<AG_ag::AG_clang::AG_FunctionContext*>(objectHandle);
  }
};

struct AG_OverloadContext : public ag::clang::OverloadContext
{
  AG_OverloadContext(clang::FunctionDecl* decl,
                     std::weak_ptr<ag::FunctionGroupEntity> privateOverrides)
    : ag::clang::OverloadContext(decl, privateOverrides)
  {
  }
  AG_OverloadContext(ag::clang::OverloadContext&& param1)
    : ag::clang::OverloadContext(std::move(param1))
  {
  }
  static void* OverloadContext0(void* decl, void* privateOverrides)
  {
    return new AG_ag::AG_clang::AG_OverloadContext(
      static_cast<clang::FunctionDecl*>(decl),
      *static_cast<std::weak_ptr<ag::FunctionGroupEntity>*>(privateOverrides));
  }
  static void* OverloadContext1(void* param1)
  {
    return new AG_ag::AG_clang::AG_OverloadContext(
      std::move(*static_cast<ag::clang::OverloadContext*>(param1)));
  }
  static void* getEastQualifiers0(void* objectHandle)
  {
    return (void*)&static_cast<AG_ag::AG_clang::AG_OverloadContext*>(
             objectHandle)
      ->ag::clang::OverloadContext::getEastQualifiers();
  }
  static bool isPrivateOverride0(void* objectHandle)
  {
    return static_cast<AG_ag::AG_clang::AG_OverloadContext*>(objectHandle)
      ->ag::clang::OverloadContext::isPrivateOverride();
  }
  static void* getOverriddenInterface0(void* objectHandle)
  {
    return new std::shared_ptr<ag::FunctionGroupEntity>(
      static_cast<AG_ag::AG_clang::AG_OverloadContext*>(objectHandle)
        ->ag::clang::OverloadContext::getOverriddenInterface());
  }
  static void Destructor0(void* objectHandle)
  {
    delete static_cast<AG_ag::AG_clang::AG_OverloadContext*>(objectHandle);
  }
};

struct AG_GlueGenerator : public ag::clang::GlueGenerator
{
  AG_GlueGenerator(ag::clang::Backend& backend)
    : ag::clang::GlueGenerator(backend)
  {
  }
  AG_GlueGenerator(ag::clang::GlueGenerator&& param1)
    : ag::clang::GlueGenerator(std::move(param1))
  {
  }
  void* AG_foreignObject;
  void (*AG_intercept_generateEnum0)(void* objectHandle, void* entity);
  void generateEnum(ag::EnumEntity& entity) override
  {
    AG_intercept_generateEnum0(AG_foreignObject, &entity);
  }
  void (*AG_intercept_generateEnumEntry0)(void* objectHandle, void* entity);
  void generateEnumEntry(ag::EnumEntryEntity& entity) override
  {
    AG_intercept_generateEnumEntry0(AG_foreignObject, &entity);
  }
  void (*AG_intercept_generateTypeAlias0)(void* objectHandle, void* entity);
  void generateTypeAlias(ag::TypeAliasEntity& entity) override
  {
    AG_intercept_generateTypeAlias0(AG_foreignObject, &entity);
  }
  bool (*AG_intercept_generateBaseType0)(void* objectHandle,
                                         void* entity,
                                         int index);
  bool generateBaseType(ag::TypeEntity& entity, unsigned long index) override
  {
    return AG_intercept_generateBaseType0(AG_foreignObject, &entity, index);
  }
  void (*AG_intercept_initializeGenerationContext0)(void* objectHandle,
                                                    void* entity);
  void initializeGenerationContext(ag::Entity& entity) override
  {
    AG_intercept_initializeGenerationContext0(AG_foreignObject, &entity);
  }
  static void* GlueGenerator0(void* backend)
  {
    return new AG_ag::AG_clang::AG_GlueGenerator(
      *static_cast<ag::clang::Backend*>(backend));
  }
  static void* GlueGenerator1(void* param1)
  {
    return new AG_ag::AG_clang::AG_GlueGenerator(
      std::move(*static_cast<ag::clang::GlueGenerator*>(param1)));
  }
  static void Destructor0(void* objectHandle)
  {
    delete static_cast<AG_ag::AG_clang::AG_GlueGenerator*>(objectHandle);
  }
};

struct AG_Backend : public ag::clang::Backend
{
  AG_Backend(std::basic_string_view<char> compilationDatabasePath)
    : ag::clang::Backend(compilationDatabasePath)
  {
  }
  AG_Backend(ag::clang::Backend&& param1)
    : ag::clang::Backend(std::move(param1))
  {
  }
  void* AG_foreignObject;
  static void* Backend0(void* compilationDatabasePath)
  {
    return new AG_ag::AG_clang::AG_Backend(
      *static_cast<std::basic_string_view<char>*>(compilationDatabasePath));
  }
  static void* Backend1(void* param1)
  {
    return new AG_ag::AG_clang::AG_Backend(
      std::move(*static_cast<ag::clang::Backend*>(param1)));
  }
  static bool generateHierarchy0(void* objectHandle)
  {
    return static_cast<AG_ag::AG_clang::AG_Backend*>(objectHandle)
      ->ag::clang::Backend::generateHierarchy();
  }
  static void* getInclusion0(void* objectHandle, void* path)
  {
    return new std::basic_string<char>(
      static_cast<AG_ag::AG_clang::AG_Backend*>(objectHandle)
        ->ag::clang::Backend::getInclusion(
          *static_cast<const std::basic_string<char>*>(path)));
  }
  static void generateGlue0(void* objectHandle)
  {
    static_cast<AG_ag::AG_clang::AG_Backend*>(objectHandle)
      ->ag::clang::Backend::generateGlue();
  }
  static void Destructor0(void* objectHandle)
  {
    delete static_cast<AG_ag::AG_clang::AG_Backend*>(objectHandle);
  }
};

}
struct AG_EntityContext : public ag::EntityContext
{
  AG_EntityContext(ag::EntityContext&& param1)
    : ag::EntityContext(std::move(param1))
  {
  }
  AG_EntityContext()
    : ag::EntityContext()
  {
  }
  static void* EntityContext0(void* param1)
  {
    return new AG_ag::AG_EntityContext(
      std::move(*static_cast<ag::EntityContext*>(param1)));
  }
  static void* EntityContext1() { return new AG_ag::AG_EntityContext(); }
  static void Destructor0(void* objectHandle)
  {
    delete static_cast<AG_ag::AG_EntityContext*>(objectHandle);
  }
};

struct AG_FunctionGroupEntity : public ag::FunctionGroupEntity
{
  AG_FunctionGroupEntity(std::basic_string_view<char> name,
                         ag::FunctionEntity::Type type)
    : ag::FunctionGroupEntity(name, type)
  {
  }
  void* AG_foreignObject;
  void* (*AG_intercept_getParent0)(void* objectHandle);
  ag::Entity& getParent() const override
  {
    return *static_cast<ag::Entity*>(AG_intercept_getParent0(AG_foreignObject));
  }
  void* (*AG_intercept_resolve0)(void* objectHandle, void* qualifiedName);
  std::shared_ptr<ag::Entity> resolve(
    std::basic_string_view<char> qualifiedName) override
  {
    return std::move(*static_cast<std::shared_ptr<ag::Entity>*>(
      AG_intercept_resolve0(AG_foreignObject, &qualifiedName)));
  }
  void* (*AG_intercept_getName0)(void* objectHandle);
  const std::basic_string<char>& getName() const override
  {
    return *static_cast<const std::basic_string<char>*>(
      AG_intercept_getName0(AG_foreignObject));
  }
  void* (*AG_intercept_getHierarchy0)(void* objectHandle, void* delimiter);
  std::basic_string<char> getHierarchy(
    const std::basic_string<char>& delimiter) override
  {
    return std::move(*static_cast<std::basic_string<char>*>(
      AG_intercept_getHierarchy0(AG_foreignObject, (void*)&delimiter)));
  }
  void (*AG_intercept_onList0)(void* objectHandle, void* indent);
  void onList(std::basic_string_view<char> indent) override
  {
    AG_intercept_onList0(AG_foreignObject, &indent);
  }
  void (*AG_intercept_onInitialize0)(void* objectHandle);
  void onInitialize() override { AG_intercept_onInitialize0(AG_foreignObject); }
  static void* FunctionGroupEntity0(void* name, int type)
  {
    return new AG_ag::AG_FunctionGroupEntity(
      *static_cast<std::basic_string_view<char>*>(name),
      static_cast<ag::FunctionEntity::Type>(type));
  }
  static bool addOverload0(void* objectHandle, void* overload)
  {
    return static_cast<AG_ag::AG_FunctionGroupEntity*>(objectHandle)
      ->ag::FunctionGroupEntity::addOverload(std::move(
        *static_cast<std::shared_ptr<ag::FunctionEntity>*>(overload)));
  }
  static const char* getTypeString0(void* objectHandle)
  {
    return static_cast<AG_ag::AG_FunctionGroupEntity*>(objectHandle)
      ->ag::FunctionGroupEntity::getTypeString();
  }
  static void* findMatchingParameters0(void* objectHandle, void* entity)
  {
    return new std::shared_ptr<ag::FunctionEntity>(
      static_cast<AG_ag::AG_FunctionGroupEntity*>(objectHandle)
        ->ag::FunctionGroupEntity::findMatchingParameters(
          *static_cast<ag::FunctionEntity*>(entity)));
  }
  static int getOverloadCount0(void* objectHandle)
  {
    return static_cast<AG_ag::AG_FunctionGroupEntity*>(objectHandle)
      ->ag::FunctionGroupEntity::getOverloadCount();
  }
  static void* getOverload0(void* objectHandle, int index)
  {
    return &static_cast<AG_ag::AG_FunctionGroupEntity*>(objectHandle)
              ->ag::FunctionGroupEntity::getOverload(index);
  }
  static int getType0(void* objectHandle)
  {
    return static_cast<int>(
      static_cast<AG_ag::AG_FunctionGroupEntity*>(objectHandle)
        ->ag::FunctionGroupEntity::getType());
  }
  static bool hasOverridable0(void* objectHandle)
  {
    return static_cast<AG_ag::AG_FunctionGroupEntity*>(objectHandle)
      ->ag::FunctionGroupEntity::hasOverridable();
  }
  static void Destructor0(void* objectHandle)
  {
    delete static_cast<AG_ag::AG_FunctionGroupEntity*>(objectHandle);
  }
};

struct AG_Entity : public ag::Entity
{
  AG_Entity(ag::Entity::Type type, std::basic_string_view<char> name)
    : ag::Entity(type, name)
  {
  }
  AG_Entity(ag::Entity&& param1)
    : ag::Entity(std::move(param1))
  {
  }
  void* AG_foreignObject;
  void* (*AG_intercept_getParent0)(void* objectHandle);
  ag::Entity& getParent() const override
  {
    return *static_cast<ag::Entity*>(AG_intercept_getParent0(AG_foreignObject));
  }
  void* (*AG_intercept_resolve0)(void* objectHandle, void* qualifiedName);
  std::shared_ptr<ag::Entity> resolve(
    std::basic_string_view<char> qualifiedName) override
  {
    return std::move(*static_cast<std::shared_ptr<ag::Entity>*>(
      AG_intercept_resolve0(AG_foreignObject, &qualifiedName)));
  }
  void* (*AG_intercept_getName0)(void* objectHandle);
  const std::basic_string<char>& getName() const override
  {
    return *static_cast<const std::basic_string<char>*>(
      AG_intercept_getName0(AG_foreignObject));
  }
  void* (*AG_intercept_getHierarchy0)(void* objectHandle, void* delimiter);
  std::basic_string<char> getHierarchy(
    const std::basic_string<char>& delimiter) override
  {
    return std::move(*static_cast<std::basic_string<char>*>(
      AG_intercept_getHierarchy0(AG_foreignObject, (void*)&delimiter)));
  }
  const char* (*AG_intercept_getTypeString0)(void* objectHandle);
  const char* getTypeString() override
  {
    return AG_intercept_getTypeString0(AG_foreignObject);
  }
  void (*AG_intercept_onList0)(void* objectHandle, void* indent);
  void onList(std::basic_string_view<char> indent) override
  {
    AG_intercept_onList0(AG_foreignObject, &indent);
  }
  bool (*AG_intercept_hasName0)(void* objectHandle, void* str);
  bool hasName(std::basic_string_view<char> str) override
  {
    return AG_intercept_hasName0(AG_foreignObject, &str);
  }
  void (*AG_intercept_onInitialize0)(void* objectHandle);
  void onInitialize() override { AG_intercept_onInitialize0(AG_foreignObject); }
  void (*AG_intercept_onGenerate0)(void* objectHandle, void* generator);
  void onGenerate(ag::BindingGenerator& generator) override
  {
    AG_intercept_onGenerate0(AG_foreignObject, &generator);
  }
  void (*AG_intercept_onFirstUse0)(void* objectHandle);
  void onFirstUse() override { AG_intercept_onFirstUse0(AG_foreignObject); }
  static void* AG_virtual_getParent0(void* objectHandle)
  {
    return &static_cast<AG_ag::AG_Entity*>(objectHandle)->getParent();
  }
  static void* AG_virtual_resolve0(void* objectHandle, void* qualifiedName)
  {
    return new std::shared_ptr<ag::Entity>(
      static_cast<AG_ag::AG_Entity*>(objectHandle)
        ->resolve(*static_cast<std::basic_string_view<char>*>(qualifiedName)));
  }
  static void* AG_virtual_getName0(void* objectHandle)
  {
    return (void*)&static_cast<AG_ag::AG_Entity*>(objectHandle)->getName();
  }
  static void* AG_virtual_getHierarchy0(void* objectHandle, void* delimiter)
  {
    return new std::basic_string<char>(
      static_cast<AG_ag::AG_Entity*>(objectHandle)
        ->getHierarchy(
          *static_cast<const std::basic_string<char>*>(delimiter)));
  }
  static const char* AG_virtual_getTypeString0(void* objectHandle)
  {
    return static_cast<AG_ag::AG_Entity*>(objectHandle)->getTypeString();
  }
  static void AG_virtual_onList0(void* objectHandle, void* indent)
  {
    static_cast<AG_ag::AG_Entity*>(objectHandle)
      ->onList(*static_cast<std::basic_string_view<char>*>(indent));
  }
  static bool AG_virtual_hasName0(void* objectHandle, void* str)
  {
    return static_cast<AG_ag::AG_Entity*>(objectHandle)
      ->hasName(*static_cast<std::basic_string_view<char>*>(str));
  }
  static void AG_virtual_onInitialize0(void* objectHandle)
  {
    static_cast<AG_ag::AG_Entity*>(objectHandle)->onInitialize();
  }
  static void AG_virtual_onGenerate0(void* objectHandle, void* generator)
  {
    static_cast<AG_ag::AG_Entity*>(objectHandle)
      ->onGenerate(*static_cast<ag::BindingGenerator*>(generator));
  }
  static void AG_virtual_onFirstUse0(void* objectHandle)
  {
    static_cast<AG_ag::AG_Entity*>(objectHandle)->onFirstUse();
  }
  static void* Entity0(int type, void* name)
  {
    return new AG_ag::AG_Entity(
      static_cast<ag::Entity::Type>(type),
      *static_cast<std::basic_string_view<char>*>(name));
  }
  static void* Entity1(void* param1)
  {
    return new AG_ag::AG_Entity(std::move(*static_cast<ag::Entity*>(param1)));
  }
  static void addChild0(void* objectHandle, void* child)
  {
    static_cast<AG_ag::AG_Entity*>(objectHandle)
      ->ag::Entity::addChild(
        std::move(*static_cast<std::shared_ptr<ag::Entity>*>(child)));
  }
  static bool isRoot0(void* objectHandle)
  {
    return static_cast<AG_ag::AG_Entity*>(objectHandle)->ag::Entity::isRoot();
  }
  static void* getParent0(void* objectHandle)
  {
    return &static_cast<AG_ag::AG_Entity*>(objectHandle)
              ->ag::Entity::getParent();
  }
  static void initializeContext0(void* objectHandle, void* ctx)
  {
    static_cast<AG_ag::AG_Entity*>(objectHandle)
      ->ag::Entity::initializeContext(
        std::move(*static_cast<std::shared_ptr<ag::EntityContext>*>(ctx)));
  }
  static void* getContext0(void* objectHandle)
  {
    return new std::shared_ptr<ag::EntityContext>(
      static_cast<AG_ag::AG_Entity*>(objectHandle)->ag::Entity::getContext());
  }
  static void* resolve0(void* objectHandle, void* qualifiedName)
  {
    return new std::shared_ptr<ag::Entity>(
      static_cast<AG_ag::AG_Entity*>(objectHandle)
        ->ag::Entity::resolve(
          *static_cast<std::basic_string_view<char>*>(qualifiedName)));
  }
  static void* getName0(void* objectHandle)
  {
    return (void*)&static_cast<AG_ag::AG_Entity*>(objectHandle)
      ->ag::Entity::getName();
  }
  static void* getHierarchy0(void* objectHandle, void* delimiter)
  {
    return new std::basic_string<char>(
      static_cast<AG_ag::AG_Entity*>(objectHandle)
        ->ag::Entity::getHierarchy(
          *static_cast<const std::basic_string<char>*>(delimiter)));
  }
  static void generate0(void* objectHandle, void* generator)
  {
    static_cast<AG_ag::AG_Entity*>(objectHandle)
      ->ag::Entity::generate(*static_cast<ag::BindingGenerator*>(generator));
  }
  static void resetGenerationState0(void* objectHandle,
                                    void* generator,
                                    bool resetEntityContext)
  {
    static_cast<AG_ag::AG_Entity*>(objectHandle)
      ->ag::Entity::resetGenerationState(
        *static_cast<ag::BindingGenerator*>(generator), resetEntityContext);
  }
  static void initializeGenerationContext0(void* objectHandle, void* generator)
  {
    static_cast<AG_ag::AG_Entity*>(objectHandle)
      ->ag::Entity::initializeGenerationContext(
        *static_cast<ag::BindingGenerator*>(generator));
  }
  static bool isGenerated0(void* objectHandle)
  {
    return static_cast<AG_ag::AG_Entity*>(objectHandle)
      ->ag::Entity::isGenerated();
  }
  static void use0(void* objectHandle)
  {
    static_cast<AG_ag::AG_Entity*>(objectHandle)->ag::Entity::use();
  }
  static void useAll0(void* objectHandle)
  {
    static_cast<AG_ag::AG_Entity*>(objectHandle)->ag::Entity::useAll();
  }
  static int getType0(void* objectHandle)
  {
    return static_cast<int>(
      static_cast<AG_ag::AG_Entity*>(objectHandle)->ag::Entity::getType());
  }
  static int getUsages0(void* objectHandle)
  {
    return static_cast<AG_ag::AG_Entity*>(objectHandle)
      ->ag::Entity::getUsages();
  }
  static void disableNewUsages0(void* objectHandle)
  {
    static_cast<AG_ag::AG_Entity*>(objectHandle)
      ->ag::Entity::disableNewUsages();
  }
  static const char* getTypeString0(void* objectHandle)
  {
    return static_cast<AG_ag::AG_Entity*>(objectHandle)
      ->ag::Entity::getTypeString();
  }
  static void list0(void* objectHandle, int depth)
  {
    static_cast<AG_ag::AG_Entity*>(objectHandle)->ag::Entity::list(depth);
  }
  static void onList0(void* objectHandle, void* indent)
  {
    static_cast<AG_ag::AG_Entity*>(objectHandle)
      ->ag::Entity::onList(*static_cast<std::basic_string_view<char>*>(indent));
  }
  static bool hasName0(void* objectHandle, void* str)
  {
    return static_cast<AG_ag::AG_Entity*>(objectHandle)
      ->ag::Entity::hasName(*static_cast<std::basic_string_view<char>*>(str));
  }
  static void onInitialize0(void* objectHandle)
  {
    static_cast<AG_ag::AG_Entity*>(objectHandle)->ag::Entity::onInitialize();
  }
  static void onGenerate0(void* objectHandle, void* generator)
  {
    static_cast<AG_ag::AG_Entity*>(objectHandle)
      ->ag::Entity::onGenerate(*static_cast<ag::BindingGenerator*>(generator));
  }
  static void onFirstUse0(void* objectHandle)
  {
    static_cast<AG_ag::AG_Entity*>(objectHandle)->ag::Entity::onFirstUse();
  }
  static void resetUsages0(void* objectHandle)
  {
    static_cast<AG_ag::AG_Entity*>(objectHandle)->ag::Entity::resetUsages();
  }
  static void adoptEntity0(void* objectHandle, void* entity)
  {
    static_cast<AG_ag::AG_Entity*>(objectHandle)
      ->ag::Entity::adoptEntity(*static_cast<ag::Entity*>(entity));
  }
  static void Destructor0(void* objectHandle)
  {
    delete static_cast<AG_ag::AG_Entity*>(objectHandle);
  }
};

struct AG_BindingGenerator : public ag::BindingGenerator
{
  AG_BindingGenerator(ag::Backend& backend)
    : ag::BindingGenerator(backend)
  {
  }
  void* AG_foreignObject;
  void (*AG_intercept_generateClass0)(void* objectHandle, void* entity);
  void generateClass(ag::ClassEntity& entity) override
  {
    AG_intercept_generateClass0(AG_foreignObject, &entity);
  }
  void (*AG_intercept_generateEnum0)(void* objectHandle, void* entity);
  void generateEnum(ag::EnumEntity& entity) override
  {
    AG_intercept_generateEnum0(AG_foreignObject, &entity);
  }
  void (*AG_intercept_generateEnumEntry0)(void* objectHandle, void* entity);
  void generateEnumEntry(ag::EnumEntryEntity& entity) override
  {
    AG_intercept_generateEnumEntry0(AG_foreignObject, &entity);
  }
  void (*AG_intercept_generateFunction0)(void* objectHandle, void* entity);
  void generateFunction(ag::FunctionEntity& entity) override
  {
    AG_intercept_generateFunction0(AG_foreignObject, &entity);
  }
  void (*AG_intercept_generateTypeReference0)(void* objectHandle, void* entity);
  void generateTypeReference(ag::TypeReferenceEntity& entity) override
  {
    AG_intercept_generateTypeReference0(AG_foreignObject, &entity);
  }
  void (*AG_intercept_generateTypeAlias0)(void* objectHandle, void* entity);
  void generateTypeAlias(ag::TypeAliasEntity& entity) override
  {
    AG_intercept_generateTypeAlias0(AG_foreignObject, &entity);
  }
  bool (*AG_intercept_generateBaseType0)(void* objectHandle,
                                         void* entity,
                                         int index);
  bool generateBaseType(ag::TypeEntity& entity, unsigned long index) override
  {
    return AG_intercept_generateBaseType0(AG_foreignObject, &entity, index);
  }
  void (*AG_intercept_generateNamedScope0)(void* objectHandle, void* entity);
  void generateNamedScope(ag::ScopeEntity& entity) override
  {
    AG_intercept_generateNamedScope0(AG_foreignObject, &entity);
  }
  void (*AG_intercept_generateArgumentSeparator0)(void* objectHandle);
  void generateArgumentSeparator() override
  {
    AG_intercept_generateArgumentSeparator0(AG_foreignObject);
  }
  bool (*AG_intercept_generateReturnStatement0)(void* objectHandle,
                                                void* entity,
                                                void* target);
  bool generateReturnStatement(ag::TypeReferenceEntity& entity,
                               ag::FunctionEntity& target) override
  {
    return AG_intercept_generateReturnStatement0(
      AG_foreignObject, &entity, &target);
  }
  void (*AG_intercept_generateBridgeCall0)(void* objectHandle, void* entity);
  void generateBridgeCall(ag::FunctionEntity& entity) override
  {
    AG_intercept_generateBridgeCall0(AG_foreignObject, &entity);
  }
  void (*AG_intercept_generateInterceptionFunction0)(void* objectHandle,
                                                     void* entity,
                                                     void* parentClass);
  void generateInterceptionFunction(ag::FunctionEntity& entity,
                                    ag::ClassEntity& parentClass) override
  {
    AG_intercept_generateInterceptionFunction0(
      AG_foreignObject, &entity, &parentClass);
  }
  void (*AG_intercept_generateInterceptionContext0)(void* objectHandle,
                                                    void* entity);
  void generateInterceptionContext(ag::ClassEntity& entity) override
  {
    AG_intercept_generateInterceptionContext0(AG_foreignObject, &entity);
  }
  void* (*AG_intercept_getObjectHandleName0)(void* objectHandle);
  std::basic_string_view<char> getObjectHandleName() override
  {
    return *static_cast<std::basic_string_view<char>*>(
      AG_intercept_getObjectHandleName0(AG_foreignObject));
  }
  void (*AG_intercept_initializeGenerationContext0)(void* objectHandle,
                                                    void* entity);
  void initializeGenerationContext(ag::Entity& entity) override
  {
    AG_intercept_initializeGenerationContext0(AG_foreignObject, &entity);
  }
  static void AG_virtual_generateClass0(void* objectHandle, void* entity)
  {
    static_cast<AG_ag::AG_BindingGenerator*>(objectHandle)
      ->generateClass(*static_cast<ag::ClassEntity*>(entity));
  }
  static void AG_virtual_generateEnum0(void* objectHandle, void* entity)
  {
    static_cast<AG_ag::AG_BindingGenerator*>(objectHandle)
      ->generateEnum(*static_cast<ag::EnumEntity*>(entity));
  }
  static void AG_virtual_generateEnumEntry0(void* objectHandle, void* entity)
  {
    static_cast<AG_ag::AG_BindingGenerator*>(objectHandle)
      ->generateEnumEntry(*static_cast<ag::EnumEntryEntity*>(entity));
  }
  static void AG_virtual_generateFunction0(void* objectHandle, void* entity)
  {
    static_cast<AG_ag::AG_BindingGenerator*>(objectHandle)
      ->generateFunction(*static_cast<ag::FunctionEntity*>(entity));
  }
  static void AG_virtual_generateTypeReference0(void* objectHandle,
                                                void* entity)
  {
    static_cast<AG_ag::AG_BindingGenerator*>(objectHandle)
      ->generateTypeReference(*static_cast<ag::TypeReferenceEntity*>(entity));
  }
  static void AG_virtual_generateTypeAlias0(void* objectHandle, void* entity)
  {
    static_cast<AG_ag::AG_BindingGenerator*>(objectHandle)
      ->generateTypeAlias(*static_cast<ag::TypeAliasEntity*>(entity));
  }
  static bool AG_virtual_generateBaseType0(void* objectHandle,
                                           void* entity,
                                           int index)
  {
    return static_cast<AG_ag::AG_BindingGenerator*>(objectHandle)
      ->generateBaseType(*static_cast<ag::TypeEntity*>(entity), index);
  }
  static void AG_virtual_generateNamedScope0(void* objectHandle, void* entity)
  {
    static_cast<AG_ag::AG_BindingGenerator*>(objectHandle)
      ->generateNamedScope(*static_cast<ag::ScopeEntity*>(entity));
  }
  static void AG_virtual_generateArgumentSeparator0(void* objectHandle)
  {
    static_cast<AG_ag::AG_BindingGenerator*>(objectHandle)
      ->generateArgumentSeparator();
  }
  static bool AG_virtual_generateReturnStatement0(void* objectHandle,
                                                  void* entity,
                                                  void* target)
  {
    return static_cast<AG_ag::AG_BindingGenerator*>(objectHandle)
      ->generateReturnStatement(*static_cast<ag::TypeReferenceEntity*>(entity),
                                *static_cast<ag::FunctionEntity*>(target));
  }
  static void AG_virtual_generateBridgeCall0(void* objectHandle, void* entity)
  {
    static_cast<AG_ag::AG_BindingGenerator*>(objectHandle)
      ->generateBridgeCall(*static_cast<ag::FunctionEntity*>(entity));
  }
  static void AG_virtual_generateInterceptionFunction0(void* objectHandle,
                                                       void* entity,
                                                       void* parentClass)
  {
    static_cast<AG_ag::AG_BindingGenerator*>(objectHandle)
      ->generateInterceptionFunction(
        *static_cast<ag::FunctionEntity*>(entity),
        *static_cast<ag::ClassEntity*>(parentClass));
  }
  static void AG_virtual_generateInterceptionContext0(void* objectHandle,
                                                      void* entity)
  {
    static_cast<AG_ag::AG_BindingGenerator*>(objectHandle)
      ->generateInterceptionContext(*static_cast<ag::ClassEntity*>(entity));
  }
  static void* AG_virtual_getObjectHandleName0(void* objectHandle)
  {
    return new std::basic_string_view<char>(
      static_cast<AG_ag::AG_BindingGenerator*>(objectHandle)
        ->getObjectHandleName());
  }
  static void AG_virtual_initializeGenerationContext0(void* objectHandle,
                                                      void* entity)
  {
    static_cast<AG_ag::AG_BindingGenerator*>(objectHandle)
      ->initializeGenerationContext(*static_cast<ag::Entity*>(entity));
  }
  static void* BindingGenerator0(void* backend)
  {
    return new AG_ag::AG_BindingGenerator(*static_cast<ag::Backend*>(backend));
  }
  static void generateBindings0(void* objectHandle, bool resetEntityContext)
  {
    static_cast<AG_ag::AG_BindingGenerator*>(objectHandle)
      ->ag::BindingGenerator::generateBindings(resetEntityContext);
  }
  static void generateClass0(void* objectHandle, void* entity)
  {
    static_cast<AG_ag::AG_BindingGenerator*>(objectHandle)
      ->ag::BindingGenerator::generateClass(
        *static_cast<ag::ClassEntity*>(entity));
  }
  static void generateEnum0(void* objectHandle, void* entity)
  {
    static_cast<AG_ag::AG_BindingGenerator*>(objectHandle)
      ->ag::BindingGenerator::generateEnum(
        *static_cast<ag::EnumEntity*>(entity));
  }
  static void generateEnumEntry0(void* objectHandle, void* entity)
  {
    static_cast<AG_ag::AG_BindingGenerator*>(objectHandle)
      ->ag::BindingGenerator::generateEnumEntry(
        *static_cast<ag::EnumEntryEntity*>(entity));
  }
  static void generateFunction0(void* objectHandle, void* entity)
  {
    static_cast<AG_ag::AG_BindingGenerator*>(objectHandle)
      ->ag::BindingGenerator::generateFunction(
        *static_cast<ag::FunctionEntity*>(entity));
  }
  static void generateTypeReference0(void* objectHandle, void* entity)
  {
    static_cast<AG_ag::AG_BindingGenerator*>(objectHandle)
      ->ag::BindingGenerator::generateTypeReference(
        *static_cast<ag::TypeReferenceEntity*>(entity));
  }
  static void generateTypeAlias0(void* objectHandle, void* entity)
  {
    static_cast<AG_ag::AG_BindingGenerator*>(objectHandle)
      ->ag::BindingGenerator::generateTypeAlias(
        *static_cast<ag::TypeAliasEntity*>(entity));
  }
  static bool generateBaseType0(void* objectHandle, void* entity, int index)
  {
    return static_cast<AG_ag::AG_BindingGenerator*>(objectHandle)
      ->ag::BindingGenerator::generateBaseType(
        *static_cast<ag::TypeEntity*>(entity), index);
  }
  static void generateNamedScope0(void* objectHandle, void* entity)
  {
    static_cast<AG_ag::AG_BindingGenerator*>(objectHandle)
      ->ag::BindingGenerator::generateNamedScope(
        *static_cast<ag::ScopeEntity*>(entity));
  }
  static void generateArgumentSeparator0(void* objectHandle)
  {
    static_cast<AG_ag::AG_BindingGenerator*>(objectHandle)
      ->ag::BindingGenerator::generateArgumentSeparator();
  }
  static bool generateReturnStatement0(void* objectHandle,
                                       void* entity,
                                       void* target)
  {
    return static_cast<AG_ag::AG_BindingGenerator*>(objectHandle)
      ->ag::BindingGenerator::generateReturnStatement(
        *static_cast<ag::TypeReferenceEntity*>(entity),
        *static_cast<ag::FunctionEntity*>(target));
  }
  static void generateBridgeCall0(void* objectHandle, void* entity)
  {
    static_cast<AG_ag::AG_BindingGenerator*>(objectHandle)
      ->ag::BindingGenerator::generateBridgeCall(
        *static_cast<ag::FunctionEntity*>(entity));
  }
  static void generateInterceptionFunction0(void* objectHandle,
                                            void* entity,
                                            void* parentClass)
  {
    static_cast<AG_ag::AG_BindingGenerator*>(objectHandle)
      ->ag::BindingGenerator::generateInterceptionFunction(
        *static_cast<ag::FunctionEntity*>(entity),
        *static_cast<ag::ClassEntity*>(parentClass));
  }
  static void generateInterceptionContext0(void* objectHandle, void* entity)
  {
    static_cast<AG_ag::AG_BindingGenerator*>(objectHandle)
      ->ag::BindingGenerator::generateInterceptionContext(
        *static_cast<ag::ClassEntity*>(entity));
  }
  static void changeClassDepth0(void* objectHandle, int amount)
  {
    static_cast<AG_ag::AG_BindingGenerator*>(objectHandle)
      ->ag::BindingGenerator::changeClassDepth(amount);
  }
  static void* getObjectHandleName0(void* objectHandle)
  {
    return new std::basic_string_view<char>(
      static_cast<AG_ag::AG_BindingGenerator*>(objectHandle)
        ->ag::BindingGenerator::getObjectHandleName());
  }
  static void initializeGenerationContext0(void* objectHandle, void* entity)
  {
    static_cast<AG_ag::AG_BindingGenerator*>(objectHandle)
      ->ag::BindingGenerator::initializeGenerationContext(
        *static_cast<ag::Entity*>(entity));
  }
  static int getClassDepth0(void* objectHandle)
  {
    return static_cast<AG_ag::AG_BindingGenerator*>(objectHandle)
      ->ag::BindingGenerator::getClassDepth();
  }
  static void Destructor0(void* objectHandle)
  {
    delete static_cast<AG_ag::AG_BindingGenerator*>(objectHandle);
  }
};

struct AG_FunctionEntity : public ag::FunctionEntity
{
  AG_FunctionEntity(std::shared_ptr<ag::TypeReferenceEntity>&& returnType,
                    bool overridable,
                    bool overrides,
                    bool interface,
                    bool staticFunction)
    : ag::FunctionEntity(std::move(returnType),
                         overridable,
                         overrides,
                         interface,
                         staticFunction)
  {
  }
  AG_FunctionEntity(ag::FunctionEntity&& param1)
    : ag::FunctionEntity(std::move(param1))
  {
  }
  void* AG_foreignObject;
  void* (*AG_intercept_resolve0)(void* objectHandle, void* qualifiedName);
  std::shared_ptr<ag::Entity> resolve(
    std::basic_string_view<char> qualifiedName) override
  {
    return std::move(*static_cast<std::shared_ptr<ag::Entity>*>(
      AG_intercept_resolve0(AG_foreignObject, &qualifiedName)));
  }
  void (*AG_intercept_onList0)(void* objectHandle, void* indent);
  void onList(std::basic_string_view<char> indent) override
  {
    AG_intercept_onList0(AG_foreignObject, &indent);
  }
  bool (*AG_intercept_hasName0)(void* objectHandle, void* str);
  bool hasName(std::basic_string_view<char> str) override
  {
    return AG_intercept_hasName0(AG_foreignObject, &str);
  }
  void (*AG_intercept_onInitialize0)(void* objectHandle);
  void onInitialize() override { AG_intercept_onInitialize0(AG_foreignObject); }
  static void* FunctionEntity0(void* returnType,
                               bool overridable,
                               bool overrides,
                               bool interface,
                               bool staticFunction)
  {
    return new AG_ag::AG_FunctionEntity(
      std::move(
        *static_cast<std::shared_ptr<ag::TypeReferenceEntity>*>(returnType)),
      static_cast<bool>(overridable),
      static_cast<bool>(overrides),
      static_cast<bool>(interface),
      static_cast<bool>(staticFunction));
  }
  static void* FunctionEntity1(void* param1)
  {
    return new AG_ag::AG_FunctionEntity(
      std::move(*static_cast<ag::FunctionEntity*>(param1)));
  }
  static void addParameter0(void* objectHandle, void* param)
  {
    static_cast<AG_ag::AG_FunctionEntity*>(objectHandle)
      ->ag::FunctionEntity::addParameter(std::move(
        *static_cast<std::shared_ptr<ag::TypeReferenceEntity>*>(param)));
  }
  static void* getParent0(void* objectHandle)
  {
    return &static_cast<AG_ag::AG_FunctionEntity*>(objectHandle)
              ->ag::FunctionEntity::getParent();
  }
  static void* getName0(void* objectHandle)
  {
    return (void*)&static_cast<AG_ag::AG_FunctionEntity*>(objectHandle)
      ->ag::FunctionEntity::getName();
  }
  static void* getGroup0(void* objectHandle)
  {
    return &static_cast<AG_ag::AG_FunctionEntity*>(objectHandle)
              ->ag::FunctionEntity::getGroup();
  }
  static void* getHierarchy0(void* objectHandle, void* delimiter)
  {
    return new std::basic_string<char>(
      static_cast<AG_ag::AG_FunctionEntity*>(objectHandle)
        ->ag::FunctionEntity::getHierarchy(
          *static_cast<const std::basic_string<char>*>(delimiter)));
  }
  static void generateReturnType0(void* objectHandle,
                                  void* generator,
                                  bool asPOD)
  {
    static_cast<AG_ag::AG_FunctionEntity*>(objectHandle)
      ->ag::FunctionEntity::generateReturnType(
        *static_cast<ag::BindingGenerator*>(generator), asPOD);
  }
  static bool generateReturnStatement0(void* objectHandle,
                                       void* generator,
                                       bool asPOD)
  {
    return static_cast<AG_ag::AG_FunctionEntity*>(objectHandle)
      ->ag::FunctionEntity::generateReturnStatement(
        *static_cast<ag::BindingGenerator*>(generator), asPOD);
  }
  static void generateBridgeCall0(void* objectHandle, void* generator)
  {
    static_cast<AG_ag::AG_FunctionEntity*>(objectHandle)
      ->ag::FunctionEntity::generateBridgeCall(
        *static_cast<ag::BindingGenerator*>(generator));
  }
  static void generateParameters0(void* objectHandle,
                                  void* generator,
                                  bool asPOD,
                                  bool includeSelf)
  {
    static_cast<AG_ag::AG_FunctionEntity*>(objectHandle)
      ->ag::FunctionEntity::generateParameters(
        *static_cast<ag::BindingGenerator*>(generator), asPOD, includeSelf);
  }
  static int getParameterCount0(void* objectHandle, bool includeSelf)
  {
    return static_cast<AG_ag::AG_FunctionEntity*>(objectHandle)
      ->ag::FunctionEntity::getParameterCount(includeSelf);
  }
  static void* getParameter0(void* objectHandle, int index)
  {
    return &static_cast<AG_ag::AG_FunctionEntity*>(objectHandle)
              ->ag::FunctionEntity::getParameter(index);
  }
  static int getType0(void* objectHandle)
  {
    return static_cast<int>(static_cast<AG_ag::AG_FunctionEntity*>(objectHandle)
                              ->ag::FunctionEntity::getType());
  }
  static bool needsThisHandle0(void* objectHandle)
  {
    return static_cast<AG_ag::AG_FunctionEntity*>(objectHandle)
      ->ag::FunctionEntity::needsThisHandle();
  }
  static bool returnsValue0(void* objectHandle)
  {
    return static_cast<AG_ag::AG_FunctionEntity*>(objectHandle)
      ->ag::FunctionEntity::returnsValue();
  }
  static bool isOverridable0(void* objectHandle)
  {
    return static_cast<AG_ag::AG_FunctionEntity*>(objectHandle)
      ->ag::FunctionEntity::isOverridable();
  }
  static bool isOverride0(void* objectHandle)
  {
    return static_cast<AG_ag::AG_FunctionEntity*>(objectHandle)
      ->ag::FunctionEntity::isOverride();
  }
  static bool isInterface0(void* objectHandle)
  {
    return static_cast<AG_ag::AG_FunctionEntity*>(objectHandle)
      ->ag::FunctionEntity::isInterface();
  }
  static void* getReturnType0(void* objectHandle, bool asPOD)
  {
    return new ag::TypeReferenceEntity(
      static_cast<AG_ag::AG_FunctionEntity*>(objectHandle)
        ->ag::FunctionEntity::getReturnType(asPOD));
  }
  static void* getBridgeName0(void* objectHandle, bool shortened)
  {
    return new std::basic_string<char>(
      static_cast<AG_ag::AG_FunctionEntity*>(objectHandle)
        ->ag::FunctionEntity::getBridgeName(shortened));
  }
  static bool isClassMemberFunction0(void* objectHandle)
  {
    return static_cast<AG_ag::AG_FunctionEntity*>(objectHandle)
      ->ag::FunctionEntity::isClassMemberFunction();
  }
  static void setOverloadedOperator0(void* objectHandle,
                                     int overloaded,
                                     bool compound)
  {
    static_cast<AG_ag::AG_FunctionEntity*>(objectHandle)
      ->ag::FunctionEntity::setOverloadedOperator(
        static_cast<ag::FunctionEntity::OverloadedOperator>(overloaded),
        compound);
  }
  static int getOverloadedOperator0(void* objectHandle)
  {
    return static_cast<int>(static_cast<AG_ag::AG_FunctionEntity*>(objectHandle)
                              ->ag::FunctionEntity::getOverloadedOperator());
  }
  static bool overloadsCompoundOperator0(void* objectHandle)
  {
    return static_cast<AG_ag::AG_FunctionEntity*>(objectHandle)
      ->ag::FunctionEntity::overloadsCompoundOperator();
  }
  static void setOverloadIndex0(void* objectHandle, int index)
  {
    static_cast<AG_ag::AG_FunctionEntity*>(objectHandle)
      ->ag::FunctionEntity::setOverloadIndex(index);
  }
  static void* createOverride0(void* objectHandle,
                               bool makeInterface,
                               bool inConcrete)
  {
    return new std::shared_ptr<ag::FunctionEntity>(
      static_cast<AG_ag::AG_FunctionEntity*>(objectHandle)
        ->ag::FunctionEntity::createOverride(makeInterface, inConcrete));
  }
  static void setProtected0(void* objectHandle)
  {
    static_cast<AG_ag::AG_FunctionEntity*>(objectHandle)
      ->ag::FunctionEntity::setProtected();
  }
  static bool isProtected0(void* objectHandle)
  {
    return static_cast<AG_ag::AG_FunctionEntity*>(objectHandle)
      ->ag::FunctionEntity::isProtected();
  }
  static bool shouldPrepareClass0(void* objectHandle)
  {
    return static_cast<AG_ag::AG_FunctionEntity*>(objectHandle)
      ->ag::FunctionEntity::shouldPrepareClass();
  }
  static void* getOverridden0(void* objectHandle)
  {
    return new std::shared_ptr<ag::FunctionEntity>(
      static_cast<AG_ag::AG_FunctionEntity*>(objectHandle)
        ->ag::FunctionEntity::getOverridden());
  }
  static bool isConcreteOverride0(void* objectHandle)
  {
    return static_cast<AG_ag::AG_FunctionEntity*>(objectHandle)
      ->ag::FunctionEntity::isConcreteOverride();
  }
  static bool isStatic0(void* objectHandle)
  {
    return static_cast<AG_ag::AG_FunctionEntity*>(objectHandle)
      ->ag::FunctionEntity::isStatic();
  }
  static const char* getTypeString0(void* objectHandle)
  {
    return static_cast<AG_ag::AG_FunctionEntity*>(objectHandle)
      ->ag::FunctionEntity::getTypeString();
  }
  static void Destructor0(void* objectHandle)
  {
    delete static_cast<AG_ag::AG_FunctionEntity*>(objectHandle);
  }
};

struct AG_TypeReferenceEntity : public ag::TypeReferenceEntity
{
  AG_TypeReferenceEntity(std::basic_string_view<char> name,
                         std::shared_ptr<ag::TypeEntity> type,
                         bool reference)
    : ag::TypeReferenceEntity(name, type, reference)
  {
  }
  AG_TypeReferenceEntity(ag::TypeReferenceEntity&& param1)
    : ag::TypeReferenceEntity(std::move(param1))
  {
  }
  void* AG_foreignObject;
  void* (*AG_intercept_getParent0)(void* objectHandle);
  ag::Entity& getParent() const override
  {
    return *static_cast<ag::Entity*>(AG_intercept_getParent0(AG_foreignObject));
  }
  void* (*AG_intercept_resolve0)(void* objectHandle, void* qualifiedName);
  std::shared_ptr<ag::Entity> resolve(
    std::basic_string_view<char> qualifiedName) override
  {
    return std::move(*static_cast<std::shared_ptr<ag::Entity>*>(
      AG_intercept_resolve0(AG_foreignObject, &qualifiedName)));
  }
  void* (*AG_intercept_getName0)(void* objectHandle);
  const std::basic_string<char>& getName() const override
  {
    return *static_cast<const std::basic_string<char>*>(
      AG_intercept_getName0(AG_foreignObject));
  }
  void* (*AG_intercept_getHierarchy0)(void* objectHandle, void* delimiter);
  std::basic_string<char> getHierarchy(
    const std::basic_string<char>& delimiter) override
  {
    return std::move(*static_cast<std::basic_string<char>*>(
      AG_intercept_getHierarchy0(AG_foreignObject, (void*)&delimiter)));
  }
  bool (*AG_intercept_hasName0)(void* objectHandle, void* str);
  bool hasName(std::basic_string_view<char> str) override
  {
    return AG_intercept_hasName0(AG_foreignObject, &str);
  }
  void (*AG_intercept_onInitialize0)(void* objectHandle);
  void onInitialize() override { AG_intercept_onInitialize0(AG_foreignObject); }
  static void* TypeReferenceEntity0(void* name, void* type, bool reference)
  {
    return new AG_ag::AG_TypeReferenceEntity(
      *static_cast<std::basic_string_view<char>*>(name),
      *static_cast<std::shared_ptr<ag::TypeEntity>*>(type),
      static_cast<bool>(reference));
  }
  static void* TypeReferenceEntity1(void* param1)
  {
    return new AG_ag::AG_TypeReferenceEntity(
      std::move(*static_cast<ag::TypeReferenceEntity*>(param1)));
  }
  static bool isIdentical0(void* objectHandle, void* other)
  {
    return static_cast<AG_ag::AG_TypeReferenceEntity*>(objectHandle)
      ->ag::TypeReferenceEntity::isIdentical(
        *static_cast<const ag::TypeReferenceEntity*>(other));
  }
  static int getType0(void* objectHandle)
  {
    return static_cast<int>(
      static_cast<AG_ag::AG_TypeReferenceEntity*>(objectHandle)
        ->ag::TypeReferenceEntity::getType());
  }
  static void* getReferred0(void* objectHandle)
  {
    return &static_cast<AG_ag::AG_TypeReferenceEntity*>(objectHandle)
              ->ag::TypeReferenceEntity::getReferred();
  }
  static void* getReferredPtr0(void* objectHandle)
  {
    return new std::shared_ptr<ag::TypeEntity>(
      static_cast<AG_ag::AG_TypeReferenceEntity*>(objectHandle)
        ->ag::TypeReferenceEntity::getReferredPtr());
  }
  static bool isClass0(void* objectHandle)
  {
    return static_cast<AG_ag::AG_TypeReferenceEntity*>(objectHandle)
      ->ag::TypeReferenceEntity::isClass();
  }
  static void* getClassType0(void* objectHandle)
  {
    return &static_cast<AG_ag::AG_TypeReferenceEntity*>(objectHandle)
              ->ag::TypeReferenceEntity::getClassType();
  }
  static bool isEnum0(void* objectHandle)
  {
    return static_cast<AG_ag::AG_TypeReferenceEntity*>(objectHandle)
      ->ag::TypeReferenceEntity::isEnum();
  }
  static void* getEnumType0(void* objectHandle)
  {
    return &static_cast<AG_ag::AG_TypeReferenceEntity*>(objectHandle)
              ->ag::TypeReferenceEntity::getEnumType();
  }
  static bool isAlias0(void* objectHandle)
  {
    return static_cast<AG_ag::AG_TypeReferenceEntity*>(objectHandle)
      ->ag::TypeReferenceEntity::isAlias();
  }
  static void* getAliasType0(void* objectHandle)
  {
    return &static_cast<AG_ag::AG_TypeReferenceEntity*>(objectHandle)
              ->ag::TypeReferenceEntity::getAliasType();
  }
  static bool isPrimitive0(void* objectHandle)
  {
    return static_cast<AG_ag::AG_TypeReferenceEntity*>(objectHandle)
      ->ag::TypeReferenceEntity::isPrimitive();
  }
  static void* getPrimitiveType0(void* objectHandle)
  {
    return &static_cast<AG_ag::AG_TypeReferenceEntity*>(objectHandle)
              ->ag::TypeReferenceEntity::getPrimitiveType();
  }
  static bool isReference0(void* objectHandle)
  {
    return static_cast<AG_ag::AG_TypeReferenceEntity*>(objectHandle)
      ->ag::TypeReferenceEntity::isReference();
  }
  static void* getAsPOD0(void* objectHandle)
  {
    return new ag::TypeReferenceEntity(
      static_cast<AG_ag::AG_TypeReferenceEntity*>(objectHandle)
        ->ag::TypeReferenceEntity::getAsPOD());
  }
  static const char* getTypeString0(void* objectHandle)
  {
    return static_cast<AG_ag::AG_TypeReferenceEntity*>(objectHandle)
      ->ag::TypeReferenceEntity::getTypeString();
  }
  static void Destructor0(void* objectHandle)
  {
    delete static_cast<AG_ag::AG_TypeReferenceEntity*>(objectHandle);
  }
};

struct AG_Backend : public ag::Backend
{
  AG_Backend(std::shared_ptr<ag::Entity>&& root)
    : ag::Backend(std::move(root))
  {
  }
  AG_Backend(ag::Backend&& param1)
    : ag::Backend(std::move(param1))
  {
  }
  void* AG_foreignObject;
  bool (*AG_intercept_generateHierarchy0)(void* objectHandle);
  bool generateHierarchy() override
  {
    return AG_intercept_generateHierarchy0(AG_foreignObject);
  }
  void (*AG_intercept_generateGlue0)(void* objectHandle);
  void generateGlue() override { AG_intercept_generateGlue0(AG_foreignObject); }
  static bool AG_virtual_generateHierarchy0(void* objectHandle)
  {
    return static_cast<AG_ag::AG_Backend*>(objectHandle)->generateHierarchy();
  }
  static void AG_virtual_generateGlue0(void* objectHandle)
  {
    static_cast<AG_ag::AG_Backend*>(objectHandle)->generateGlue();
  }
  static void* getRootPtr0(void* objectHandle)
  {
    return new std::shared_ptr<ag::Entity>(
      static_cast<AG_ag::AG_Backend*>(objectHandle)->ag::Backend::getRootPtr());
  }
  static void* getRoot0(void* objectHandle)
  {
    return &static_cast<AG_ag::AG_Backend*>(objectHandle)
              ->ag::Backend::getRoot();
  }
  static bool generateHierarchy0(void* objectHandle)
  {
    return static_cast<AG_ag::AG_Backend*>(objectHandle)
      ->ag::Backend::generateHierarchy();
  }
  static void ensureGlueGenerated0(void* objectHandle)
  {
    static_cast<AG_ag::AG_Backend*>(objectHandle)
      ->ag::Backend::ensureGlueGenerated();
  }
  static void* Backend0(void* root)
  {
    return new AG_ag::AG_Backend(
      std::move(*static_cast<std::shared_ptr<ag::Entity>*>(root)));
  }
  static void* Backend1(void* param1)
  {
    return new AG_ag::AG_Backend(std::move(*static_cast<ag::Backend*>(param1)));
  }
  static void generateGlue0(void* objectHandle)
  {
    static_cast<AG_ag::AG_Backend*>(objectHandle)->ag::Backend::generateGlue();
  }
  static void Destructor0(void* objectHandle)
  {
    delete static_cast<AG_ag::AG_Backend*>(objectHandle);
  }
};

struct AG_ClassEntity : public ag::ClassEntity
{
  AG_ClassEntity(std::basic_string_view<char> name)
    : ag::ClassEntity(name)
  {
  }
  AG_ClassEntity(ag::ClassEntity&& param1)
    : ag::ClassEntity(std::move(param1))
  {
  }
  void* AG_foreignObject;
  void* (*AG_intercept_getParent0)(void* objectHandle);
  ag::Entity& getParent() const override
  {
    return *static_cast<ag::Entity*>(AG_intercept_getParent0(AG_foreignObject));
  }
  void* (*AG_intercept_resolve0)(void* objectHandle, void* qualifiedName);
  std::shared_ptr<ag::Entity> resolve(
    std::basic_string_view<char> qualifiedName) override
  {
    return std::move(*static_cast<std::shared_ptr<ag::Entity>*>(
      AG_intercept_resolve0(AG_foreignObject, &qualifiedName)));
  }
  void* (*AG_intercept_getName0)(void* objectHandle);
  const std::basic_string<char>& getName() const override
  {
    return *static_cast<const std::basic_string<char>*>(
      AG_intercept_getName0(AG_foreignObject));
  }
  void* (*AG_intercept_getHierarchy0)(void* objectHandle, void* delimiter);
  std::basic_string<char> getHierarchy(
    const std::basic_string<char>& delimiter) override
  {
    return std::move(*static_cast<std::basic_string<char>*>(
      AG_intercept_getHierarchy0(AG_foreignObject, (void*)&delimiter)));
  }
  void (*AG_intercept_onList0)(void* objectHandle, void* indent);
  void onList(std::basic_string_view<char> indent) override
  {
    AG_intercept_onList0(AG_foreignObject, &indent);
  }
  bool (*AG_intercept_hasName0)(void* objectHandle, void* str);
  bool hasName(std::basic_string_view<char> str) override
  {
    return AG_intercept_hasName0(AG_foreignObject, &str);
  }
  static void* ClassEntity0(void* name)
  {
    return new AG_ag::AG_ClassEntity(
      *static_cast<std::basic_string_view<char>*>(name));
  }
  static void* ClassEntity1(void* param1)
  {
    return new AG_ag::AG_ClassEntity(
      std::move(*static_cast<ag::ClassEntity*>(param1)));
  }
  static void addNested0(void* objectHandle, void* nested)
  {
    static_cast<AG_ag::AG_ClassEntity*>(objectHandle)
      ->ag::ClassEntity::addNested(
        std::move(*static_cast<std::shared_ptr<ag::Entity>*>(nested)));
  }
  static void addBaseType0(void* objectHandle, void* base)
  {
    static_cast<AG_ag::AG_ClassEntity*>(objectHandle)
      ->ag::ClassEntity::addBaseType(
        *static_cast<std::shared_ptr<ag::TypeEntity>*>(base));
  }
  static void generateBaseTypes0(void* objectHandle, void* generator)
  {
    static_cast<AG_ag::AG_ClassEntity*>(objectHandle)
      ->ag::ClassEntity::generateBaseTypes(
        *static_cast<ag::BindingGenerator*>(generator));
  }
  static bool hasBaseTypes0(void* objectHandle)
  {
    return static_cast<AG_ag::AG_ClassEntity*>(objectHandle)
      ->ag::ClassEntity::hasBaseTypes();
  }
  static int getBaseTypeCount0(void* objectHandle)
  {
    return static_cast<AG_ag::AG_ClassEntity*>(objectHandle)
      ->ag::ClassEntity::getBaseTypeCount();
  }
  static void* getBaseType0(void* objectHandle, int index)
  {
    return &static_cast<AG_ag::AG_ClassEntity*>(objectHandle)
              ->ag::ClassEntity::getBaseType(index);
  }
  static int getDerivedCount0(void* objectHandle)
  {
    return static_cast<AG_ag::AG_ClassEntity*>(objectHandle)
      ->ag::ClassEntity::getDerivedCount();
  }
  static void* getDerived0(void* objectHandle, int index)
  {
    return &static_cast<AG_ag::AG_ClassEntity*>(objectHandle)
              ->ag::ClassEntity::getDerived(index);
  }
  static void generateNested0(void* objectHandle, void* generator)
  {
    static_cast<AG_ag::AG_ClassEntity*>(objectHandle)
      ->ag::ClassEntity::generateNested(
        *static_cast<ag::BindingGenerator*>(generator));
  }
  static bool isAbstract0(void* objectHandle)
  {
    return static_cast<AG_ag::AG_ClassEntity*>(objectHandle)
      ->ag::ClassEntity::isAbstract();
  }
  static void generateConcreteType0(void* objectHandle, void* generator)
  {
    static_cast<AG_ag::AG_ClassEntity*>(objectHandle)
      ->ag::ClassEntity::generateConcreteType(
        *static_cast<ag::BindingGenerator*>(generator));
  }
  static void* getConcreteType0(void* objectHandle)
  {
    return new std::shared_ptr<ag::ClassEntity>(
      static_cast<AG_ag::AG_ClassEntity*>(objectHandle)
        ->ag::ClassEntity::getConcreteType());
  }
  static bool isConcreteType0(void* objectHandle)
  {
    return static_cast<AG_ag::AG_ClassEntity*>(objectHandle)
      ->ag::ClassEntity::isConcreteType();
  }
  static void generateInterceptionFunctions0(void* objectHandle,
                                             void* generator)
  {
    static_cast<AG_ag::AG_ClassEntity*>(objectHandle)
      ->ag::ClassEntity::generateInterceptionFunctions(
        *static_cast<ag::BindingGenerator*>(generator));
  }
  static void generateInterceptionContext0(void* objectHandle, void* generator)
  {
    static_cast<AG_ag::AG_ClassEntity*>(objectHandle)
      ->ag::ClassEntity::generateInterceptionContext(
        *static_cast<ag::BindingGenerator*>(generator));
  }
  static bool matchType0(void* entity)
  {
    return ag::ClassEntity::matchType(*static_cast<ag::Entity*>(entity));
  }
  static void* findOverridableFromBase0(void* objectHandle, void* entity)
  {
    return new std::shared_ptr<ag::FunctionEntity>(
      static_cast<AG_ag::AG_ClassEntity*>(objectHandle)
        ->ag::ClassEntity::findOverridableFromBase(
          *static_cast<ag::FunctionEntity*>(entity)));
  }
  static const char* getTypeString0(void* objectHandle)
  {
    return static_cast<AG_ag::AG_ClassEntity*>(objectHandle)
      ->ag::ClassEntity::getTypeString();
  }
  static void Destructor0(void* objectHandle)
  {
    delete static_cast<AG_ag::AG_ClassEntity*>(objectHandle);
  }
};

struct AG_TypeEntity : public ag::TypeEntity
{
  AG_TypeEntity(std::basic_string_view<char> name, ag::TypeEntity::Type type)
    : ag::TypeEntity(name, type)
  {
  }
  AG_TypeEntity(ag::TypeEntity&& param1)
    : ag::TypeEntity(std::move(param1))
  {
  }
  void* AG_foreignObject;
  void* (*AG_intercept_getParent0)(void* objectHandle);
  ag::Entity& getParent() const override
  {
    return *static_cast<ag::Entity*>(AG_intercept_getParent0(AG_foreignObject));
  }
  void* (*AG_intercept_resolve0)(void* objectHandle, void* qualifiedName);
  std::shared_ptr<ag::Entity> resolve(
    std::basic_string_view<char> qualifiedName) override
  {
    return std::move(*static_cast<std::shared_ptr<ag::Entity>*>(
      AG_intercept_resolve0(AG_foreignObject, &qualifiedName)));
  }
  void* (*AG_intercept_getName0)(void* objectHandle);
  const std::basic_string<char>& getName() const override
  {
    return *static_cast<const std::basic_string<char>*>(
      AG_intercept_getName0(AG_foreignObject));
  }
  void* (*AG_intercept_getHierarchy0)(void* objectHandle, void* delimiter);
  std::basic_string<char> getHierarchy(
    const std::basic_string<char>& delimiter) override
  {
    return std::move(*static_cast<std::basic_string<char>*>(
      AG_intercept_getHierarchy0(AG_foreignObject, (void*)&delimiter)));
  }
  const char* (*AG_intercept_getTypeString0)(void* objectHandle);
  const char* getTypeString() override
  {
    return AG_intercept_getTypeString0(AG_foreignObject);
  }
  void (*AG_intercept_onList0)(void* objectHandle, void* indent);
  void onList(std::basic_string_view<char> indent) override
  {
    AG_intercept_onList0(AG_foreignObject, &indent);
  }
  bool (*AG_intercept_hasName0)(void* objectHandle, void* str);
  bool hasName(std::basic_string_view<char> str) override
  {
    return AG_intercept_hasName0(AG_foreignObject, &str);
  }
  void (*AG_intercept_onInitialize0)(void* objectHandle);
  void onInitialize() override { AG_intercept_onInitialize0(AG_foreignObject); }
  void (*AG_intercept_onGenerate0)(void* objectHandle, void* generator);
  void onGenerate(ag::BindingGenerator& generator) override
  {
    AG_intercept_onGenerate0(AG_foreignObject, &generator);
  }
  void (*AG_intercept_onFirstUse0)(void* objectHandle);
  void onFirstUse() override { AG_intercept_onFirstUse0(AG_foreignObject); }
  static const char* AG_virtual_getTypeString0(void* objectHandle)
  {
    return static_cast<AG_ag::AG_TypeEntity*>(objectHandle)->getTypeString();
  }
  static void AG_virtual_onGenerate0(void* objectHandle, void* generator)
  {
    static_cast<AG_ag::AG_TypeEntity*>(objectHandle)
      ->onGenerate(*static_cast<ag::BindingGenerator*>(generator));
  }
  static void* TypeEntity0(void* name, int type)
  {
    return new AG_ag::AG_TypeEntity(
      *static_cast<std::basic_string_view<char>*>(name),
      static_cast<ag::TypeEntity::Type>(type));
  }
  static void* TypeEntity1(void* param1)
  {
    return new AG_ag::AG_TypeEntity(
      std::move(*static_cast<ag::TypeEntity*>(param1)));
  }
  static int getType0(void* objectHandle)
  {
    return static_cast<int>(static_cast<AG_ag::AG_TypeEntity*>(objectHandle)
                              ->ag::TypeEntity::getType());
  }
  static void Destructor0(void* objectHandle)
  {
    delete static_cast<AG_ag::AG_TypeEntity*>(objectHandle);
  }
  static const char* getTypeString0(void* objectHandle)
  {
    return static_cast<AG_ag::AG_TypeEntity*>(objectHandle)
      ->ag::TypeEntity::getTypeString();
  }
  static void onGenerate0(void* objectHandle, void* generator)
  {
    static_cast<AG_ag::AG_TypeEntity*>(objectHandle)
      ->ag::TypeEntity::onGenerate(
        *static_cast<ag::BindingGenerator*>(generator));
  }
};

struct AG_EnumEntity : public ag::EnumEntity
{
  AG_EnumEntity(std::basic_string_view<char> name,
                ag::EnumEntity::Format format)
    : ag::EnumEntity(name, format)
  {
  }
  void* AG_foreignObject;
  void* (*AG_intercept_getParent0)(void* objectHandle);
  ag::Entity& getParent() const override
  {
    return *static_cast<ag::Entity*>(AG_intercept_getParent0(AG_foreignObject));
  }
  void* (*AG_intercept_resolve0)(void* objectHandle, void* qualifiedName);
  std::shared_ptr<ag::Entity> resolve(
    std::basic_string_view<char> qualifiedName) override
  {
    return std::move(*static_cast<std::shared_ptr<ag::Entity>*>(
      AG_intercept_resolve0(AG_foreignObject, &qualifiedName)));
  }
  void* (*AG_intercept_getName0)(void* objectHandle);
  const std::basic_string<char>& getName() const override
  {
    return *static_cast<const std::basic_string<char>*>(
      AG_intercept_getName0(AG_foreignObject));
  }
  void* (*AG_intercept_getHierarchy0)(void* objectHandle, void* delimiter);
  std::basic_string<char> getHierarchy(
    const std::basic_string<char>& delimiter) override
  {
    return std::move(*static_cast<std::basic_string<char>*>(
      AG_intercept_getHierarchy0(AG_foreignObject, (void*)&delimiter)));
  }
  void (*AG_intercept_onList0)(void* objectHandle, void* indent);
  void onList(std::basic_string_view<char> indent) override
  {
    AG_intercept_onList0(AG_foreignObject, &indent);
  }
  bool (*AG_intercept_hasName0)(void* objectHandle, void* str);
  bool hasName(std::basic_string_view<char> str) override
  {
    return AG_intercept_hasName0(AG_foreignObject, &str);
  }
  void (*AG_intercept_onInitialize0)(void* objectHandle);
  void onInitialize() override { AG_intercept_onInitialize0(AG_foreignObject); }
  static void* EnumEntity0(void* name, int format)
  {
    return new AG_ag::AG_EnumEntity(
      *static_cast<std::basic_string_view<char>*>(name),
      static_cast<ag::EnumEntity::Format>(format));
  }
  static void addEntry0(void* objectHandle, void* entry)
  {
    static_cast<AG_ag::AG_EnumEntity*>(objectHandle)
      ->ag::EnumEntity::addEntry(
        std::move(*static_cast<std::shared_ptr<ag::EnumEntryEntity>*>(entry)));
  }
  static void generateValues0(void* objectHandle, void* generator)
  {
    static_cast<AG_ag::AG_EnumEntity*>(objectHandle)
      ->ag::EnumEntity::generateValues(
        *static_cast<ag::BindingGenerator*>(generator));
  }
  static int getFormat0(void* objectHandle)
  {
    return static_cast<int>(static_cast<AG_ag::AG_EnumEntity*>(objectHandle)
                              ->ag::EnumEntity::getFormat());
  }
  static const char* getTypeString0(void* objectHandle)
  {
    return static_cast<AG_ag::AG_EnumEntity*>(objectHandle)
      ->ag::EnumEntity::getTypeString();
  }
  static void Destructor0(void* objectHandle)
  {
    delete static_cast<AG_ag::AG_EnumEntity*>(objectHandle);
  }
};

struct AG_EnumEntryEntity : public ag::EnumEntryEntity
{
  AG_EnumEntryEntity(std::basic_string_view<char> name,
                     std::basic_string<char>&& value)
    : ag::EnumEntryEntity(name, std::move(value))
  {
  }
  AG_EnumEntryEntity(ag::EnumEntryEntity&& param1)
    : ag::EnumEntryEntity(std::move(param1))
  {
  }
  void* AG_foreignObject;
  void* (*AG_intercept_getParent0)(void* objectHandle);
  ag::Entity& getParent() const override
  {
    return *static_cast<ag::Entity*>(AG_intercept_getParent0(AG_foreignObject));
  }
  void* (*AG_intercept_resolve0)(void* objectHandle, void* qualifiedName);
  std::shared_ptr<ag::Entity> resolve(
    std::basic_string_view<char> qualifiedName) override
  {
    return std::move(*static_cast<std::shared_ptr<ag::Entity>*>(
      AG_intercept_resolve0(AG_foreignObject, &qualifiedName)));
  }
  void* (*AG_intercept_getName0)(void* objectHandle);
  const std::basic_string<char>& getName() const override
  {
    return *static_cast<const std::basic_string<char>*>(
      AG_intercept_getName0(AG_foreignObject));
  }
  void* (*AG_intercept_getHierarchy0)(void* objectHandle, void* delimiter);
  std::basic_string<char> getHierarchy(
    const std::basic_string<char>& delimiter) override
  {
    return std::move(*static_cast<std::basic_string<char>*>(
      AG_intercept_getHierarchy0(AG_foreignObject, (void*)&delimiter)));
  }
  void (*AG_intercept_onList0)(void* objectHandle, void* indent);
  void onList(std::basic_string_view<char> indent) override
  {
    AG_intercept_onList0(AG_foreignObject, &indent);
  }
  bool (*AG_intercept_hasName0)(void* objectHandle, void* str);
  bool hasName(std::basic_string_view<char> str) override
  {
    return AG_intercept_hasName0(AG_foreignObject, &str);
  }
  void (*AG_intercept_onInitialize0)(void* objectHandle);
  void onInitialize() override { AG_intercept_onInitialize0(AG_foreignObject); }
  void (*AG_intercept_onFirstUse0)(void* objectHandle);
  void onFirstUse() override { AG_intercept_onFirstUse0(AG_foreignObject); }
  static void* EnumEntryEntity0(void* name, void* value)
  {
    return new AG_ag::AG_EnumEntryEntity(
      *static_cast<std::basic_string_view<char>*>(name),
      std::move(*static_cast<std::basic_string<char>*>(value)));
  }
  static void* EnumEntryEntity1(void* param1)
  {
    return new AG_ag::AG_EnumEntryEntity(
      std::move(*static_cast<ag::EnumEntryEntity*>(param1)));
  }
  static void* getValue0(void* objectHandle)
  {
    return new std::basic_string_view<char>(
      static_cast<AG_ag::AG_EnumEntryEntity*>(objectHandle)
        ->ag::EnumEntryEntity::getValue());
  }
  static bool isLast0(void* objectHandle)
  {
    return static_cast<AG_ag::AG_EnumEntryEntity*>(objectHandle)
      ->ag::EnumEntryEntity::isLast();
  }
  static const char* getTypeString0(void* objectHandle)
  {
    return static_cast<AG_ag::AG_EnumEntryEntity*>(objectHandle)
      ->ag::EnumEntryEntity::getTypeString();
  }
  static void Destructor0(void* objectHandle)
  {
    delete static_cast<AG_ag::AG_EnumEntryEntity*>(objectHandle);
  }
};

struct AG_TypeAliasEntity : public ag::TypeAliasEntity
{
  AG_TypeAliasEntity(std::basic_string_view<char> name,
                     std::shared_ptr<ag::TypeEntity> underlying)
    : ag::TypeAliasEntity(name, underlying)
  {
  }
  AG_TypeAliasEntity(ag::TypeAliasEntity&& param1)
    : ag::TypeAliasEntity(std::move(param1))
  {
  }
  void* AG_foreignObject;
  void* (*AG_intercept_getParent0)(void* objectHandle);
  ag::Entity& getParent() const override
  {
    return *static_cast<ag::Entity*>(AG_intercept_getParent0(AG_foreignObject));
  }
  void* (*AG_intercept_getName0)(void* objectHandle);
  const std::basic_string<char>& getName() const override
  {
    return *static_cast<const std::basic_string<char>*>(
      AG_intercept_getName0(AG_foreignObject));
  }
  void* (*AG_intercept_getHierarchy0)(void* objectHandle, void* delimiter);
  std::basic_string<char> getHierarchy(
    const std::basic_string<char>& delimiter) override
  {
    return std::move(*static_cast<std::basic_string<char>*>(
      AG_intercept_getHierarchy0(AG_foreignObject, (void*)&delimiter)));
  }
  void (*AG_intercept_onList0)(void* objectHandle, void* indent);
  void onList(std::basic_string_view<char> indent) override
  {
    AG_intercept_onList0(AG_foreignObject, &indent);
  }
  bool (*AG_intercept_hasName0)(void* objectHandle, void* str);
  bool hasName(std::basic_string_view<char> str) override
  {
    return AG_intercept_hasName0(AG_foreignObject, &str);
  }
  void (*AG_intercept_onInitialize0)(void* objectHandle);
  void onInitialize() override { AG_intercept_onInitialize0(AG_foreignObject); }
  static void* TypeAliasEntity0(void* name, void* underlying)
  {
    return new AG_ag::AG_TypeAliasEntity(
      *static_cast<std::basic_string_view<char>*>(name),
      *static_cast<std::shared_ptr<ag::TypeEntity>*>(underlying));
  }
  static void* TypeAliasEntity1(void* param1)
  {
    return new AG_ag::AG_TypeAliasEntity(
      std::move(*static_cast<ag::TypeAliasEntity*>(param1)));
  }
  static void* getUnderlying0(void* objectHandle, bool recursive)
  {
    return new std::shared_ptr<ag::TypeEntity>(
      static_cast<AG_ag::AG_TypeAliasEntity*>(objectHandle)
        ->ag::TypeAliasEntity::getUnderlying(recursive));
  }
  static void* resolve0(void* objectHandle, void* qualifiedName)
  {
    return new std::shared_ptr<ag::Entity>(
      static_cast<AG_ag::AG_TypeAliasEntity*>(objectHandle)
        ->ag::TypeAliasEntity::resolve(
          *static_cast<std::basic_string_view<char>*>(qualifiedName)));
  }
  static const char* getTypeString0(void* objectHandle)
  {
    return static_cast<AG_ag::AG_TypeAliasEntity*>(objectHandle)
      ->ag::TypeAliasEntity::getTypeString();
  }
  static void Destructor0(void* objectHandle)
  {
    delete static_cast<AG_ag::AG_TypeAliasEntity*>(objectHandle);
  }
};

struct AG_PrimitiveEntity : public ag::PrimitiveEntity
{
  void* AG_foreignObject;
  void* (*AG_intercept_getParent0)(void* objectHandle);
  ag::Entity& getParent() const override
  {
    return *static_cast<ag::Entity*>(AG_intercept_getParent0(AG_foreignObject));
  }
  void* (*AG_intercept_resolve0)(void* objectHandle, void* qualifiedName);
  std::shared_ptr<ag::Entity> resolve(
    std::basic_string_view<char> qualifiedName) override
  {
    return std::move(*static_cast<std::shared_ptr<ag::Entity>*>(
      AG_intercept_resolve0(AG_foreignObject, &qualifiedName)));
  }
  void* (*AG_intercept_getName0)(void* objectHandle);
  const std::basic_string<char>& getName() const override
  {
    return *static_cast<const std::basic_string<char>*>(
      AG_intercept_getName0(AG_foreignObject));
  }
  void* (*AG_intercept_getHierarchy0)(void* objectHandle, void* delimiter);
  std::basic_string<char> getHierarchy(
    const std::basic_string<char>& delimiter) override
  {
    return std::move(*static_cast<std::basic_string<char>*>(
      AG_intercept_getHierarchy0(AG_foreignObject, (void*)&delimiter)));
  }
  void (*AG_intercept_onList0)(void* objectHandle, void* indent);
  void onList(std::basic_string_view<char> indent) override
  {
    AG_intercept_onList0(AG_foreignObject, &indent);
  }
  bool (*AG_intercept_hasName0)(void* objectHandle, void* str);
  bool hasName(std::basic_string_view<char> str) override
  {
    return AG_intercept_hasName0(AG_foreignObject, &str);
  }
  void (*AG_intercept_onInitialize0)(void* objectHandle);
  void onInitialize() override { AG_intercept_onInitialize0(AG_foreignObject); }
  void (*AG_intercept_onFirstUse0)(void* objectHandle);
  void onFirstUse() override { AG_intercept_onFirstUse0(AG_foreignObject); }
  static void* getObjectHandle0()
  {
    return new std::shared_ptr<ag::PrimitiveEntity>(
      ag::PrimitiveEntity::getObjectHandle());
  }
  static void* getInteger0()
  {
    return new std::shared_ptr<ag::PrimitiveEntity>(
      ag::PrimitiveEntity::getInteger());
  }
  static void* getFloat0()
  {
    return new std::shared_ptr<ag::PrimitiveEntity>(
      ag::PrimitiveEntity::getFloat());
  }
  static void* getDouble0()
  {
    return new std::shared_ptr<ag::PrimitiveEntity>(
      ag::PrimitiveEntity::getDouble());
  }
  static void* getBoolean0()
  {
    return new std::shared_ptr<ag::PrimitiveEntity>(
      ag::PrimitiveEntity::getBoolean());
  }
  static void* getCharacter0()
  {
    return new std::shared_ptr<ag::PrimitiveEntity>(
      ag::PrimitiveEntity::getCharacter());
  }
  static void* getString0()
  {
    return new std::shared_ptr<ag::PrimitiveEntity>(
      ag::PrimitiveEntity::getString());
  }
  static void* getVoid0()
  {
    return new std::shared_ptr<ag::PrimitiveEntity>(
      ag::PrimitiveEntity::getVoid());
  }
  static int getType0(void* objectHandle)
  {
    return static_cast<int>(
      static_cast<AG_ag::AG_PrimitiveEntity*>(objectHandle)
        ->ag::PrimitiveEntity::getType());
  }
  static const char* getTypeString0(void* objectHandle)
  {
    return static_cast<AG_ag::AG_PrimitiveEntity*>(objectHandle)
      ->ag::PrimitiveEntity::getTypeString();
  }
  static void Destructor0(void* objectHandle)
  {
    delete static_cast<AG_ag::AG_PrimitiveEntity*>(objectHandle);
  }
};

struct AG_ScopeEntity : public ag::ScopeEntity
{
  AG_ScopeEntity(std::basic_string_view<char> name)
    : ag::ScopeEntity(name)
  {
  }
  AG_ScopeEntity()
    : ag::ScopeEntity()
  {
  }
  AG_ScopeEntity(ag::ScopeEntity&& param1)
    : ag::ScopeEntity(std::move(param1))
  {
  }
  void* AG_foreignObject;
  void* (*AG_intercept_getParent0)(void* objectHandle);
  ag::Entity& getParent() const override
  {
    return *static_cast<ag::Entity*>(AG_intercept_getParent0(AG_foreignObject));
  }
  void* (*AG_intercept_resolve0)(void* objectHandle, void* qualifiedName);
  std::shared_ptr<ag::Entity> resolve(
    std::basic_string_view<char> qualifiedName) override
  {
    return std::move(*static_cast<std::shared_ptr<ag::Entity>*>(
      AG_intercept_resolve0(AG_foreignObject, &qualifiedName)));
  }
  void* (*AG_intercept_getName0)(void* objectHandle);
  const std::basic_string<char>& getName() const override
  {
    return *static_cast<const std::basic_string<char>*>(
      AG_intercept_getName0(AG_foreignObject));
  }
  void* (*AG_intercept_getHierarchy0)(void* objectHandle, void* delimiter);
  std::basic_string<char> getHierarchy(
    const std::basic_string<char>& delimiter) override
  {
    return std::move(*static_cast<std::basic_string<char>*>(
      AG_intercept_getHierarchy0(AG_foreignObject, (void*)&delimiter)));
  }
  void (*AG_intercept_onList0)(void* objectHandle, void* indent);
  void onList(std::basic_string_view<char> indent) override
  {
    AG_intercept_onList0(AG_foreignObject, &indent);
  }
  bool (*AG_intercept_hasName0)(void* objectHandle, void* str);
  bool hasName(std::basic_string_view<char> str) override
  {
    return AG_intercept_hasName0(AG_foreignObject, &str);
  }
  void (*AG_intercept_onInitialize0)(void* objectHandle);
  void onInitialize() override { AG_intercept_onInitialize0(AG_foreignObject); }
  void (*AG_intercept_onFirstUse0)(void* objectHandle);
  void onFirstUse() override { AG_intercept_onFirstUse0(AG_foreignObject); }
  static void* ScopeEntity0(void* name)
  {
    return new AG_ag::AG_ScopeEntity(
      *static_cast<std::basic_string_view<char>*>(name));
  }
  static void* ScopeEntity1() { return new AG_ag::AG_ScopeEntity(); }
  static void* ScopeEntity2(void* param1)
  {
    return new AG_ag::AG_ScopeEntity(
      std::move(*static_cast<ag::ScopeEntity*>(param1)));
  }
  static void generateNested0(void* objectHandle, void* generator)
  {
    static_cast<AG_ag::AG_ScopeEntity*>(objectHandle)
      ->ag::ScopeEntity::generateNested(
        *static_cast<ag::BindingGenerator*>(generator));
  }
  static const char* getTypeString0(void* objectHandle)
  {
    return static_cast<AG_ag::AG_ScopeEntity*>(objectHandle)
      ->ag::ScopeEntity::getTypeString();
  }
  static void Destructor0(void* objectHandle)
  {
    delete static_cast<AG_ag::AG_ScopeEntity*>(objectHandle);
  }
};

namespace AG_csharp {
struct AG_EntityContext : public ag::csharp::EntityContext
{
  AG_EntityContext(ag::csharp::EntityContext::Type type)
    : ag::csharp::EntityContext(type)
  {
  }
  AG_EntityContext(ag::csharp::EntityContext&& param1)
    : ag::csharp::EntityContext(std::move(param1))
  {
  }
  static void* getClass0(void* objectHandle)
  {
    return &static_cast<AG_ag::AG_csharp::AG_EntityContext*>(objectHandle)
              ->ag::csharp::EntityContext::getClass();
  }
  static void* EntityContext0(int type)
  {
    return new AG_ag::AG_csharp::AG_EntityContext(
      static_cast<ag::csharp::EntityContext::Type>(type));
  }
  static void* EntityContext1(void* param1)
  {
    return new AG_ag::AG_csharp::AG_EntityContext(
      std::move(*static_cast<ag::csharp::EntityContext*>(param1)));
  }
  static void Destructor0(void* objectHandle)
  {
    delete static_cast<AG_ag::AG_csharp::AG_EntityContext*>(objectHandle);
  }
};

struct AG_ClassContext : public ag::csharp::ClassContext
{
  AG_ClassContext()
    : ag::csharp::ClassContext()
  {
  }
  AG_ClassContext(ag::csharp::ClassContext&& param1)
    : ag::csharp::ClassContext(std::move(param1))
  {
  }
  static void* ClassContext0()
  {
    return new AG_ag::AG_csharp::AG_ClassContext();
  }
  static void* ClassContext1(void* param1)
  {
    return new AG_ag::AG_csharp::AG_ClassContext(
      std::move(*static_cast<ag::csharp::ClassContext*>(param1)));
  }
  static bool isCompositionBaseOf0(void* objectHandle, void* derived)
  {
    return static_cast<AG_ag::AG_csharp::AG_ClassContext*>(objectHandle)
      ->ag::csharp::ClassContext::isCompositionBaseOf(
        *static_cast<ag::ClassEntity*>(derived));
  }
  static void setCompositionBaseOf0(void* objectHandle, void* derived)
  {
    static_cast<AG_ag::AG_csharp::AG_ClassContext*>(objectHandle)
      ->ag::csharp::ClassContext::setCompositionBaseOf(
        *static_cast<ag::ClassEntity*>(derived));
  }
  static void ensureBaseGetters0(void* objectHandle, void* entity, void* base)
  {
    static_cast<AG_ag::AG_csharp::AG_ClassContext*>(objectHandle)
      ->ag::csharp::ClassContext::ensureBaseGetters(
        *static_cast<ag::TypeEntity*>(entity),
        *static_cast<ag::ClassEntity*>(base));
  }
  static int getBaseGetterCount0(void* objectHandle)
  {
    return static_cast<AG_ag::AG_csharp::AG_ClassContext*>(objectHandle)
      ->ag::csharp::ClassContext::getBaseGetterCount();
  }
  static void* getBaseGetter0(void* objectHandle, int index)
  {
    return new std::shared_ptr<ag::ClassEntity>(
      static_cast<AG_ag::AG_csharp::AG_ClassContext*>(objectHandle)
        ->ag::csharp::ClassContext::getBaseGetter(index));
  }
  static void Destructor0(void* objectHandle)
  {
    delete static_cast<AG_ag::AG_csharp::AG_ClassContext*>(objectHandle);
  }
};

struct AG_BindingGenerator : public ag::csharp::BindingGenerator
{
  AG_BindingGenerator(ag::Backend& backend,
                      std::basic_string_view<char> libName)
    : ag::csharp::BindingGenerator(backend, libName)
  {
  }
  AG_BindingGenerator(ag::csharp::BindingGenerator&& param1)
    : ag::csharp::BindingGenerator(std::move(param1))
  {
  }
  void* AG_foreignObject;
  static void* BindingGenerator0(void* backend, void* libName)
  {
    return new AG_ag::AG_csharp::AG_BindingGenerator(
      *static_cast<ag::Backend*>(backend),
      *static_cast<std::basic_string_view<char>*>(libName));
  }
  static void* BindingGenerator1(void* param1)
  {
    return new AG_ag::AG_csharp::AG_BindingGenerator(
      std::move(*static_cast<ag::csharp::BindingGenerator*>(param1)));
  }
  static void Destructor0(void* objectHandle)
  {
    delete static_cast<AG_ag::AG_csharp::AG_BindingGenerator*>(objectHandle);
  }
};

}
struct AG_CallableTypeEntity : public ag::CallableTypeEntity
{
  AG_CallableTypeEntity(std::shared_ptr<ag::TypeReferenceEntity>&& returnType)
    : ag::CallableTypeEntity(std::move(returnType))
  {
  }
  AG_CallableTypeEntity(ag::CallableTypeEntity&& param1)
    : ag::CallableTypeEntity(std::move(param1))
  {
  }
  void* AG_foreignObject;
  void* (*AG_intercept_getParent0)(void* objectHandle);
  ag::Entity& getParent() const override
  {
    return *static_cast<ag::Entity*>(AG_intercept_getParent0(AG_foreignObject));
  }
  void* (*AG_intercept_resolve0)(void* objectHandle, void* qualifiedName);
  std::shared_ptr<ag::Entity> resolve(
    std::basic_string_view<char> qualifiedName) override
  {
    return std::move(*static_cast<std::shared_ptr<ag::Entity>*>(
      AG_intercept_resolve0(AG_foreignObject, &qualifiedName)));
  }
  void* (*AG_intercept_getHierarchy0)(void* objectHandle, void* delimiter);
  std::basic_string<char> getHierarchy(
    const std::basic_string<char>& delimiter) override
  {
    return std::move(*static_cast<std::basic_string<char>*>(
      AG_intercept_getHierarchy0(AG_foreignObject, (void*)&delimiter)));
  }
  void (*AG_intercept_onList0)(void* objectHandle, void* indent);
  void onList(std::basic_string_view<char> indent) override
  {
    AG_intercept_onList0(AG_foreignObject, &indent);
  }
  bool (*AG_intercept_hasName0)(void* objectHandle, void* str);
  bool hasName(std::basic_string_view<char> str) override
  {
    return AG_intercept_hasName0(AG_foreignObject, &str);
  }
  void (*AG_intercept_onInitialize0)(void* objectHandle);
  void onInitialize() override { AG_intercept_onInitialize0(AG_foreignObject); }
  void (*AG_intercept_onFirstUse0)(void* objectHandle);
  void onFirstUse() override { AG_intercept_onFirstUse0(AG_foreignObject); }
  static void* CallableTypeEntity0(void* returnType)
  {
    return new AG_ag::AG_CallableTypeEntity(std::move(
      *static_cast<std::shared_ptr<ag::TypeReferenceEntity>*>(returnType)));
  }
  static void* CallableTypeEntity1(void* param1)
  {
    return new AG_ag::AG_CallableTypeEntity(
      std::move(*static_cast<ag::CallableTypeEntity*>(param1)));
  }
  static void addParameter0(void* objectHandle, void* param)
  {
    static_cast<AG_ag::AG_CallableTypeEntity*>(objectHandle)
      ->ag::CallableTypeEntity::addParameter(std::move(
        *static_cast<std::shared_ptr<ag::TypeReferenceEntity>*>(param)));
  }
  static void* getName0(void* objectHandle)
  {
    return (void*)&static_cast<AG_ag::AG_CallableTypeEntity*>(objectHandle)
      ->ag::CallableTypeEntity::getName();
  }
  static const char* getTypeString0(void* objectHandle)
  {
    return static_cast<AG_ag::AG_CallableTypeEntity*>(objectHandle)
      ->ag::CallableTypeEntity::getTypeString();
  }
  static void Destructor0(void* objectHandle)
  {
    delete static_cast<AG_ag::AG_CallableTypeEntity*>(objectHandle);
  }
};

namespace AG_java {
struct AG_BindingGenerator : public ag::java::BindingGenerator
{
  AG_BindingGenerator(ag::Backend& backend,
                      std::basic_string_view<char> packagePrefix)
    : ag::java::BindingGenerator(backend, packagePrefix)
  {
  }
  AG_BindingGenerator(ag::java::BindingGenerator&& param1)
    : ag::java::BindingGenerator(std::move(param1))
  {
  }
  void* AG_foreignObject;
  void (*AG_intercept_generateBridgeCall0)(void* objectHandle, void* entity);
  void generateBridgeCall(ag::FunctionEntity& entity) override
  {
    AG_intercept_generateBridgeCall0(AG_foreignObject, &entity);
  }
  void (*AG_intercept_generateInterceptionFunction0)(void* objectHandle,
                                                     void* entity,
                                                     void* parentClass);
  void generateInterceptionFunction(ag::FunctionEntity& entity,
                                    ag::ClassEntity& parentClass) override
  {
    AG_intercept_generateInterceptionFunction0(
      AG_foreignObject, &entity, &parentClass);
  }
  void (*AG_intercept_generateInterceptionContext0)(void* objectHandle,
                                                    void* entity);
  void generateInterceptionContext(ag::ClassEntity& entity) override
  {
    AG_intercept_generateInterceptionContext0(AG_foreignObject, &entity);
  }
  void* (*AG_intercept_getObjectHandleName0)(void* objectHandle);
  std::basic_string_view<char> getObjectHandleName() override
  {
    return *static_cast<std::basic_string_view<char>*>(
      AG_intercept_getObjectHandleName0(AG_foreignObject));
  }
  void (*AG_intercept_initializeGenerationContext0)(void* objectHandle,
                                                    void* entity);
  void initializeGenerationContext(ag::Entity& entity) override
  {
    AG_intercept_initializeGenerationContext0(AG_foreignObject, &entity);
  }
  static void* BindingGenerator0(void* backend, void* packagePrefix)
  {
    return new AG_ag::AG_java::AG_BindingGenerator(
      *static_cast<ag::Backend*>(backend),
      *static_cast<std::basic_string_view<char>*>(packagePrefix));
  }
  static void* BindingGenerator1(void* param1)
  {
    return new AG_ag::AG_java::AG_BindingGenerator(
      std::move(*static_cast<ag::java::BindingGenerator*>(param1)));
  }
  static void Destructor0(void* objectHandle)
  {
    delete static_cast<AG_ag::AG_java::AG_BindingGenerator*>(objectHandle);
  }
};

}
}
namespace AG_clang {
struct AG_QualType : public clang::QualType
{
  AG_QualType()
    : clang::QualType()
  {
  }
  AG_QualType(const clang::Type* Ptr, unsigned int Quals)
    : clang::QualType(Ptr, Quals)
  {
  }
  AG_QualType(const clang::ExtQuals* Ptr, unsigned int Quals)
    : clang::QualType(Ptr, Quals)
  {
  }
  AG_QualType(clang::QualType&& param1)
    : clang::QualType(std::move(param1))
  {
  }
  static void* QualType0() { return new AG_clang::AG_QualType(); }
  static void* QualType1(void* Ptr, int Quals)
  {
    return new AG_clang::AG_QualType(static_cast<const clang::Type*>(Ptr),
                                     static_cast<unsigned int>(Quals));
  }
  static void* QualType2(void* Ptr, int Quals)
  {
    return new AG_clang::AG_QualType(static_cast<const clang::ExtQuals*>(Ptr),
                                     static_cast<unsigned int>(Quals));
  }
  static void* QualType3(void* param1)
  {
    return new AG_clang::AG_QualType(
      std::move(*static_cast<clang::QualType*>(param1)));
  }
  static void Destructor0(void* objectHandle)
  {
    delete static_cast<AG_clang::AG_QualType*>(objectHandle);
  }
};

struct AG_Type : public clang::Type
{
  AG_Type(clang::Type::TypeClass tc,
          clang::QualType canon,
          clang::TypeDependenceScope::TypeDependence Dependence)
    : clang::Type(tc, canon, Dependence)
  {
  }
  static void* Type0(int tc, void* canon, int Dependence)
  {
    return new AG_clang::AG_Type(
      static_cast<clang::Type::TypeClass>(tc),
      *static_cast<clang::QualType*>(canon),
      static_cast<clang::TypeDependenceScope::TypeDependence>(Dependence));
  }
  static void Destructor0(void* objectHandle)
  {
    delete static_cast<AG_clang::AG_Type*>(objectHandle);
  }
};

struct AG_ExtQualsTypeCommonBase : public clang::ExtQualsTypeCommonBase
{
  AG_ExtQualsTypeCommonBase(clang::ExtQualsTypeCommonBase&& param1)
    : clang::ExtQualsTypeCommonBase(std::move(param1))
  {
  }
  static void* ExtQualsTypeCommonBase0(void* param1)
  {
    return new AG_clang::AG_ExtQualsTypeCommonBase(
      std::move(*static_cast<clang::ExtQualsTypeCommonBase*>(param1)));
  }
  static void Destructor0(void* objectHandle)
  {
    delete static_cast<AG_clang::AG_ExtQualsTypeCommonBase*>(objectHandle);
  }
};

struct AG_TypeDependenceScope : public clang::TypeDependenceScope
{};

struct AG_ASTContext : public clang::ASTContext
{
  AG_ASTContext(clang::LangOptions& LOpts,
                clang::SourceManager& SM,
                clang::IdentifierTable& idents,
                clang::SelectorTable& sels,
                clang::Builtin::Context& builtins,
                clang::TranslationUnitKind TUKind)
    : clang::ASTContext(LOpts, SM, idents, sels, builtins, TUKind)
  {
  }
  static void* ASTContext0(void* LOpts,
                           void* SM,
                           void* idents,
                           void* sels,
                           void* builtins,
                           int TUKind)
  {
    return new AG_clang::AG_ASTContext(
      *static_cast<clang::LangOptions*>(LOpts),
      *static_cast<clang::SourceManager*>(SM),
      *static_cast<clang::IdentifierTable*>(idents),
      *static_cast<clang::SelectorTable*>(sels),
      *static_cast<clang::Builtin::Context*>(builtins),
      static_cast<clang::TranslationUnitKind>(TUKind));
  }
  static void Destructor0(void* objectHandle)
  {
    delete static_cast<AG_clang::AG_ASTContext*>(objectHandle);
  }
};

struct AG_Qualifiers : public clang::Qualifiers
{
  AG_Qualifiers()
    : clang::Qualifiers()
  {
  }
  AG_Qualifiers(clang::Qualifiers&& param1)
    : clang::Qualifiers(std::move(param1))
  {
  }
  static void* Qualifiers0() { return new AG_clang::AG_Qualifiers(); }
  static void* Qualifiers1(void* param1)
  {
    return new AG_clang::AG_Qualifiers(
      std::move(*static_cast<clang::Qualifiers*>(param1)));
  }
  static void Destructor0(void* objectHandle)
  {
    delete static_cast<AG_clang::AG_Qualifiers*>(objectHandle);
  }
};

struct AG_NamedDecl : public clang::NamedDecl
{
  void* AG_foreignObject;
};

struct AG_Decl : public clang::Decl
{
  void* AG_foreignObject;
};

struct AG_DeclContext : public clang::DeclContext
{
  AG_DeclContext(clang::Decl::Kind K)
    : clang::DeclContext(K)
  {
  }
  static void* DeclContext0(int K)
  {
    return new AG_clang::AG_DeclContext(static_cast<clang::Decl::Kind>(K));
  }
  static void Destructor0(void* objectHandle)
  {
    delete static_cast<AG_clang::AG_DeclContext*>(objectHandle);
  }
};

struct AG_DeclaratorDecl : public clang::DeclaratorDecl
{
  void* AG_foreignObject;
};

struct AG_ValueDecl : public clang::ValueDecl
{
  void* AG_foreignObject;
};

struct AG_SourceManager : public clang::SourceManager
{
  AG_SourceManager(clang::DiagnosticsEngine& Diag,
                   clang::FileManager& FileMgr,
                   bool UserFilesAreVolatile)
    : clang::SourceManager(Diag, FileMgr, UserFilesAreVolatile)
  {
  }
  static void* SourceManager0(void* Diag,
                              void* FileMgr,
                              bool UserFilesAreVolatile)
  {
    return new AG_clang::AG_SourceManager(
      *static_cast<clang::DiagnosticsEngine*>(Diag),
      *static_cast<clang::FileManager*>(FileMgr),
      static_cast<bool>(UserFilesAreVolatile));
  }
  static void Destructor0(void* objectHandle)
  {
    delete static_cast<AG_clang::AG_SourceManager*>(objectHandle);
  }
};

struct AG_IdentifierInfo : public clang::IdentifierInfo
{};

struct AG_LangOptions : public clang::LangOptions
{
  AG_LangOptions()
    : clang::LangOptions()
  {
  }
  AG_LangOptions(clang::LangOptions&& param1)
    : clang::LangOptions(std::move(param1))
  {
  }
  static void* LangOptions0() { return new AG_clang::AG_LangOptions(); }
  static void* LangOptions1(void* param1)
  {
    return new AG_clang::AG_LangOptions(
      std::move(*static_cast<clang::LangOptions*>(param1)));
  }
  static void Destructor0(void* objectHandle)
  {
    delete static_cast<AG_clang::AG_LangOptions*>(objectHandle);
  }
};

struct AG_DiagnosticsEngine : public clang::DiagnosticsEngine
{
  AG_DiagnosticsEngine(
    llvm::IntrusiveRefCntPtr<clang::DiagnosticIDs> Diags,
    llvm::IntrusiveRefCntPtr<clang::DiagnosticOptions> DiagOpts,
    clang::DiagnosticConsumer* client,
    bool ShouldOwnClient)
    : clang::DiagnosticsEngine(Diags, DiagOpts, client, ShouldOwnClient)
  {
  }
  static void* DiagnosticsEngine0(void* Diags,
                                  void* DiagOpts,
                                  void* client,
                                  bool ShouldOwnClient)
  {
    return new AG_clang::AG_DiagnosticsEngine(
      *static_cast<llvm::IntrusiveRefCntPtr<clang::DiagnosticIDs>*>(Diags),
      *static_cast<llvm::IntrusiveRefCntPtr<clang::DiagnosticOptions>*>(
        DiagOpts),
      static_cast<clang::DiagnosticConsumer*>(client),
      static_cast<bool>(ShouldOwnClient));
  }
  static void Destructor0(void* objectHandle)
  {
    delete static_cast<AG_clang::AG_DiagnosticsEngine*>(objectHandle);
  }
};

struct AG_DiagnosticIDs : public clang::DiagnosticIDs
{
  AG_DiagnosticIDs()
    : clang::DiagnosticIDs()
  {
  }
  static void* DiagnosticIDs0() { return new AG_clang::AG_DiagnosticIDs(); }
  static void Destructor0(void* objectHandle)
  {
    delete static_cast<AG_clang::AG_DiagnosticIDs*>(objectHandle);
  }
};

struct AG_DiagnosticOptions : public clang::DiagnosticOptions
{
  AG_DiagnosticOptions()
    : clang::DiagnosticOptions()
  {
  }
  AG_DiagnosticOptions(clang::DiagnosticOptions&& param1)
    : clang::DiagnosticOptions(std::move(param1))
  {
  }
  static void* DiagnosticOptions0()
  {
    return new AG_clang::AG_DiagnosticOptions();
  }
  static void* DiagnosticOptions1(void* param1)
  {
    return new AG_clang::AG_DiagnosticOptions(
      std::move(*static_cast<clang::DiagnosticOptions*>(param1)));
  }
  static void Destructor0(void* objectHandle)
  {
    delete static_cast<AG_clang::AG_DiagnosticOptions*>(objectHandle);
  }
};

struct AG_DiagnosticConsumer : public clang::DiagnosticConsumer
{
  AG_DiagnosticConsumer()
    : clang::DiagnosticConsumer()
  {
  }
  void* AG_foreignObject;
  static void* DiagnosticConsumer0()
  {
    return new AG_clang::AG_DiagnosticConsumer();
  }
  static void Destructor0(void* objectHandle)
  {
    delete static_cast<AG_clang::AG_DiagnosticConsumer*>(objectHandle);
  }
};

struct AG_FunctionDecl : public clang::FunctionDecl
{
  void* AG_foreignObject;
};

struct AG_RedeclarableFunctionDecl
  : public clang::Redeclarable<clang::FunctionDecl>
{
  AG_RedeclarableFunctionDecl(const clang::ASTContext& Ctx)
    : clang::Redeclarable<clang::FunctionDecl>(Ctx)
  {
  }
  static void* Redeclarable0(void* Ctx)
  {
    return new AG_clang::AG_RedeclarableFunctionDecl(
      *static_cast<const clang::ASTContext*>(Ctx));
  }
  static void Destructor0(void* objectHandle)
  {
    delete static_cast<AG_clang::AG_RedeclarableFunctionDecl*>(objectHandle);
  }
};

struct AG_ExtQuals : public clang::ExtQuals
{
  AG_ExtQuals(const clang::Type* baseType,
              clang::QualType canon,
              clang::Qualifiers quals)
    : clang::ExtQuals(baseType, canon, quals)
  {
  }
  static void* ExtQuals0(void* baseType, void* canon, void* quals)
  {
    return new AG_clang::AG_ExtQuals(static_cast<const clang::Type*>(baseType),
                                     *static_cast<clang::QualType*>(canon),
                                     *static_cast<clang::Qualifiers*>(quals));
  }
};

struct AG_IdentifierInfoLookup : public clang::IdentifierInfoLookup
{
  void* AG_foreignObject;
  void* (*AG_intercept_get0)(void* objectHandle, void* Name);
  clang::IdentifierInfo* get(llvm::StringRef Name) override
  {
    return static_cast<clang::IdentifierInfo*>(
      AG_intercept_get0(AG_foreignObject, &Name));
  }
  static void* AG_virtual_get0(void* objectHandle, void* Name)
  {
    return static_cast<AG_clang::AG_IdentifierInfoLookup*>(objectHandle)
      ->get(*static_cast<llvm::StringRef*>(Name));
  }
  static void Destructor0(void* objectHandle)
  {
    delete static_cast<AG_clang::AG_IdentifierInfoLookup*>(objectHandle);
  }
  static void* get0(void* objectHandle, void* Name)
  {
    return static_cast<AG_clang::AG_IdentifierInfoLookup*>(objectHandle)
      ->clang::IdentifierInfoLookup::get(*static_cast<llvm::StringRef*>(Name));
  }
};

struct AG_IdentifierTable : public clang::IdentifierTable
{
  AG_IdentifierTable(clang::IdentifierInfoLookup* ExternalLookup)
    : clang::IdentifierTable(ExternalLookup)
  {
  }
  AG_IdentifierTable(const clang::LangOptions& LangOpts,
                     clang::IdentifierInfoLookup* ExternalLookup)
    : clang::IdentifierTable(LangOpts, ExternalLookup)
  {
  }
  AG_IdentifierTable(clang::IdentifierTable&& param1)
    : clang::IdentifierTable(std::move(param1))
  {
  }
  static void* IdentifierTable0(void* ExternalLookup)
  {
    return new AG_clang::AG_IdentifierTable(
      static_cast<clang::IdentifierInfoLookup*>(ExternalLookup));
  }
  static void* IdentifierTable1(void* LangOpts, void* ExternalLookup)
  {
    return new AG_clang::AG_IdentifierTable(
      *static_cast<const clang::LangOptions*>(LangOpts),
      static_cast<clang::IdentifierInfoLookup*>(ExternalLookup));
  }
  static void* IdentifierTable2(void* param1)
  {
    return new AG_clang::AG_IdentifierTable(
      std::move(*static_cast<clang::IdentifierTable*>(param1)));
  }
  static void Destructor0(void* objectHandle)
  {
    delete static_cast<AG_clang::AG_IdentifierTable*>(objectHandle);
  }
};

struct AG_SelectorTable : public clang::SelectorTable
{
  AG_SelectorTable()
    : clang::SelectorTable()
  {
  }
  static void* SelectorTable0() { return new AG_clang::AG_SelectorTable(); }
  static void Destructor0(void* objectHandle)
  {
    delete static_cast<AG_clang::AG_SelectorTable*>(objectHandle);
  }
};

struct AG_LangOptionsBase : public clang::LangOptionsBase
{
  AG_LangOptionsBase(clang::LangOptionsBase&& param1)
    : clang::LangOptionsBase(std::move(param1))
  {
  }
  static void* LangOptionsBase0(void* param1)
  {
    return new AG_clang::AG_LangOptionsBase(
      std::move(*static_cast<clang::LangOptionsBase*>(param1)));
  }
  static void Destructor0(void* objectHandle)
  {
    delete static_cast<AG_clang::AG_LangOptionsBase*>(objectHandle);
  }
};

struct AG_FileManager : public clang::FileManager
{
  AG_FileManager(const clang::FileSystemOptions& FileSystemOpts,
                 llvm::IntrusiveRefCntPtr<llvm::vfs::FileSystem> FS)
    : clang::FileManager(FileSystemOpts, FS)
  {
  }
  static void* FileManager0(void* FileSystemOpts, void* FS)
  {
    return new AG_clang::AG_FileManager(
      *static_cast<const clang::FileSystemOptions*>(FileSystemOpts),
      *static_cast<llvm::IntrusiveRefCntPtr<llvm::vfs::FileSystem>*>(FS));
  }
  static void Destructor0(void* objectHandle)
  {
    delete static_cast<AG_clang::AG_FileManager*>(objectHandle);
  }
};

struct AG_FileSystemOptions : public clang::FileSystemOptions
{
  AG_FileSystemOptions(clang::FileSystemOptions&& param1)
    : clang::FileSystemOptions(std::move(param1))
  {
  }
  static void* FileSystemOptions0(void* param1)
  {
    return new AG_clang::AG_FileSystemOptions(
      std::move(*static_cast<clang::FileSystemOptions*>(param1)));
  }
  static void Destructor0(void* objectHandle)
  {
    delete static_cast<AG_clang::AG_FileSystemOptions*>(objectHandle);
  }
};

namespace AG_Builtin {
struct AG_Context
{};

}
}
namespace AG_llvm {
struct AG_StringRef : public llvm::StringRef
{
  AG_StringRef()
    : llvm::StringRef()
  {
  }
  AG_StringRef(const char* Str)
    : llvm::StringRef(Str)
  {
  }
  AG_StringRef(const char* data, unsigned long length)
    : llvm::StringRef(data, length)
  {
  }
  AG_StringRef(const std::basic_string<char>& Str)
    : llvm::StringRef(Str)
  {
  }
  AG_StringRef(std::basic_string_view<char> Str)
    : llvm::StringRef(Str)
  {
  }
  AG_StringRef(llvm::StringRef&& param1)
    : llvm::StringRef(std::move(param1))
  {
  }
  static void* StringRef0() { return new AG_llvm::AG_StringRef(); }
  static void* StringRef1(const char* Str)
  {
    return new AG_llvm::AG_StringRef(static_cast<const char*>(Str));
  }
  static void* StringRef2(const char* data, int length)
  {
    return new AG_llvm::AG_StringRef(static_cast<const char*>(data),
                                     static_cast<unsigned long>(length));
  }
  static void* StringRef3(void* Str)
  {
    return new AG_llvm::AG_StringRef(
      *static_cast<const std::basic_string<char>*>(Str));
  }
  static void* StringRef4(void* Str)
  {
    return new AG_llvm::AG_StringRef(
      *static_cast<std::basic_string_view<char>*>(Str));
  }
  static void* StringRef5(void* param1)
  {
    return new AG_llvm::AG_StringRef(
      std::move(*static_cast<llvm::StringRef*>(param1)));
  }
  static void Destructor0(void* objectHandle)
  {
    delete static_cast<AG_llvm::AG_StringRef*>(objectHandle);
  }
};

struct AG_SmallVectorImplCharacter : public llvm::SmallVectorImpl<char>
{
  AG_SmallVectorImplCharacter(unsigned int N)
    : llvm::SmallVectorImpl<char>(N)
  {
  }
  static void* SmallVectorImpl0(int N)
  {
    return new AG_llvm::AG_SmallVectorImplCharacter(
      static_cast<unsigned int>(N));
  }
  static void Destructor0(void* objectHandle)
  {
    delete static_cast<AG_llvm::AG_SmallVectorImplCharacter*>(objectHandle);
  }
};

struct AG_SmallVectorTemplateBaseCharacter_1
  : public llvm::SmallVectorTemplateBase<char>
{
  AG_SmallVectorTemplateBaseCharacter_1(unsigned long Size)
    : llvm::SmallVectorTemplateBase<char>(Size)
  {
  }
  AG_SmallVectorTemplateBaseCharacter_1(
    llvm::SmallVectorTemplateBase<char>&& param1)
    : llvm::SmallVectorTemplateBase<char>(std::move(param1))
  {
  }
  static void* SmallVectorTemplateBase0(int Size)
  {
    return new AG_llvm::AG_SmallVectorTemplateBaseCharacter_1(
      static_cast<unsigned long>(Size));
  }
  static void* SmallVectorTemplateBase1(void* param1)
  {
    return new AG_llvm::AG_SmallVectorTemplateBaseCharacter_1(
      std::move(*static_cast<llvm::SmallVectorTemplateBase<char>*>(param1)));
  }
  static void Destructor0(void* objectHandle)
  {
    delete static_cast<AG_llvm::AG_SmallVectorTemplateBaseCharacter_1*>(
      objectHandle);
  }
};

struct AG_SmallVectorTemplateCommonCharacter_Void
  : public llvm::SmallVectorTemplateCommon<char>
{
  AG_SmallVectorTemplateCommonCharacter_Void(unsigned long Size)
    : llvm::SmallVectorTemplateCommon<char>(Size)
  {
  }
  AG_SmallVectorTemplateCommonCharacter_Void(
    llvm::SmallVectorTemplateCommon<char>&& param1)
    : llvm::SmallVectorTemplateCommon<char>(std::move(param1))
  {
  }
  static void* SmallVectorTemplateCommon0(int Size)
  {
    return new AG_llvm::AG_SmallVectorTemplateCommonCharacter_Void(
      static_cast<unsigned long>(Size));
  }
  static void* SmallVectorTemplateCommon1(void* param1)
  {
    return new AG_llvm::AG_SmallVectorTemplateCommonCharacter_Void(
      std::move(*static_cast<llvm::SmallVectorTemplateCommon<char>*>(param1)));
  }
  static void Destructor0(void* objectHandle)
  {
    delete static_cast<AG_llvm::AG_SmallVectorTemplateCommonCharacter_Void*>(
      objectHandle);
  }
};

struct AG_SmallVectorBaseInteger : public llvm::SmallVectorBase<uint64_t>
{
  AG_SmallVectorBaseInteger(llvm::SmallVectorBase<uint64_t>&& param1)
    : llvm::SmallVectorBase<uint64_t>(std::move(param1))
  {
  }
  static void* SmallVectorBase0(void* param1)
  {
    return new AG_llvm::AG_SmallVectorBaseInteger(
      std::move(*static_cast<llvm::SmallVectorBase<uint64_t>*>(param1)));
  }
  static void Destructor0(void* objectHandle)
  {
    delete static_cast<AG_llvm::AG_SmallVectorBaseInteger*>(objectHandle);
  }
};

struct AG_formatv_object_base
{};

struct AG_FoldingSetBase : public llvm::FoldingSetBase
{
  AG_FoldingSetBase(unsigned int Log2InitSize)
    : llvm::FoldingSetBase(Log2InitSize)
  {
  }
  AG_FoldingSetBase(llvm::FoldingSetBase&& Arg)
    : llvm::FoldingSetBase(std::move(Arg))
  {
  }
  static void* FoldingSetBase0(int Log2InitSize)
  {
    return new AG_llvm::AG_FoldingSetBase(
      static_cast<unsigned int>(Log2InitSize));
  }
  static void* FoldingSetBase1(void* Arg)
  {
    return new AG_llvm::AG_FoldingSetBase(
      std::move(*static_cast<llvm::FoldingSetBase*>(Arg)));
  }
  static void Destructor0(void* objectHandle)
  {
    delete static_cast<AG_llvm::AG_FoldingSetBase*>(objectHandle);
  }
  struct AG_Node : public llvm::FoldingSetBase::Node
  {
    AG_Node()
      : llvm::FoldingSetBase::Node()
    {
    }
    AG_Node(llvm::FoldingSetBase::Node&& param1)
      : llvm::FoldingSetBase::Node(std::move(param1))
    {
    }
    static void* Node0() { return new AG_llvm::AG_FoldingSetBase::AG_Node(); }
    static void* Node1(void* param1)
    {
      return new AG_llvm::AG_FoldingSetBase::AG_Node(
        std::move(*static_cast<llvm::FoldingSetBase::Node*>(param1)));
    }
    static void Destructor0(void* objectHandle)
    {
      delete static_cast<AG_llvm::AG_FoldingSetBase::AG_Node*>(objectHandle);
    }
  };
};

struct AG_RefCountedBaseDiagnosticsEngine
  : public llvm::RefCountedBase<clang::DiagnosticsEngine>
{
  AG_RefCountedBaseDiagnosticsEngine()
    : llvm::RefCountedBase<clang::DiagnosticsEngine>()
  {
  }
  static void* RefCountedBase0()
  {
    return new AG_llvm::AG_RefCountedBaseDiagnosticsEngine();
  }
  static void Destructor0(void* objectHandle)
  {
    delete static_cast<AG_llvm::AG_RefCountedBaseDiagnosticsEngine*>(
      objectHandle);
  }
};

struct AG_RefCountedBaseDiagnosticIDs
  : public llvm::RefCountedBase<clang::DiagnosticIDs>
{
  AG_RefCountedBaseDiagnosticIDs()
    : llvm::RefCountedBase<clang::DiagnosticIDs>()
  {
  }
  static void* RefCountedBase0()
  {
    return new AG_llvm::AG_RefCountedBaseDiagnosticIDs();
  }
  static void Destructor0(void* objectHandle)
  {
    delete static_cast<AG_llvm::AG_RefCountedBaseDiagnosticIDs*>(objectHandle);
  }
};

struct AG_IntrusiveRefCntPtrDiagnosticIDs
  : public llvm::IntrusiveRefCntPtr<clang::DiagnosticIDs>
{
  AG_IntrusiveRefCntPtrDiagnosticIDs()
    : llvm::IntrusiveRefCntPtr<clang::DiagnosticIDs>()
  {
  }
  AG_IntrusiveRefCntPtrDiagnosticIDs(clang::DiagnosticIDs* obj)
    : llvm::IntrusiveRefCntPtr<clang::DiagnosticIDs>(obj)
  {
  }
  AG_IntrusiveRefCntPtrDiagnosticIDs(
    llvm::IntrusiveRefCntPtr<clang::DiagnosticIDs>&& S)
    : llvm::IntrusiveRefCntPtr<clang::DiagnosticIDs>(std::move(S))
  {
  }
  static void* IntrusiveRefCntPtr0()
  {
    return new AG_llvm::AG_IntrusiveRefCntPtrDiagnosticIDs();
  }
  static void* IntrusiveRefCntPtr1(void* obj)
  {
    return new AG_llvm::AG_IntrusiveRefCntPtrDiagnosticIDs(
      static_cast<clang::DiagnosticIDs*>(obj));
  }
  static void* IntrusiveRefCntPtr2(void* S)
  {
    return new AG_llvm::AG_IntrusiveRefCntPtrDiagnosticIDs(std::move(
      *static_cast<llvm::IntrusiveRefCntPtr<clang::DiagnosticIDs>*>(S)));
  }
  static void Destructor0(void* objectHandle)
  {
    delete static_cast<AG_llvm::AG_IntrusiveRefCntPtrDiagnosticIDs*>(
      objectHandle);
  }
};

struct AG_RefCountedBaseDiagnosticOptions
  : public llvm::RefCountedBase<clang::DiagnosticOptions>
{
  AG_RefCountedBaseDiagnosticOptions()
    : llvm::RefCountedBase<clang::DiagnosticOptions>()
  {
  }
  static void* RefCountedBase0()
  {
    return new AG_llvm::AG_RefCountedBaseDiagnosticOptions();
  }
  static void Destructor0(void* objectHandle)
  {
    delete static_cast<AG_llvm::AG_RefCountedBaseDiagnosticOptions*>(
      objectHandle);
  }
};

struct AG_IntrusiveRefCntPtrDiagnosticOptions
  : public llvm::IntrusiveRefCntPtr<clang::DiagnosticOptions>
{
  AG_IntrusiveRefCntPtrDiagnosticOptions()
    : llvm::IntrusiveRefCntPtr<clang::DiagnosticOptions>()
  {
  }
  AG_IntrusiveRefCntPtrDiagnosticOptions(clang::DiagnosticOptions* obj)
    : llvm::IntrusiveRefCntPtr<clang::DiagnosticOptions>(obj)
  {
  }
  AG_IntrusiveRefCntPtrDiagnosticOptions(
    llvm::IntrusiveRefCntPtr<clang::DiagnosticOptions>&& S)
    : llvm::IntrusiveRefCntPtr<clang::DiagnosticOptions>(std::move(S))
  {
  }
  static void* IntrusiveRefCntPtr0()
  {
    return new AG_llvm::AG_IntrusiveRefCntPtrDiagnosticOptions();
  }
  static void* IntrusiveRefCntPtr1(void* obj)
  {
    return new AG_llvm::AG_IntrusiveRefCntPtrDiagnosticOptions(
      static_cast<clang::DiagnosticOptions*>(obj));
  }
  static void* IntrusiveRefCntPtr2(void* S)
  {
    return new AG_llvm::AG_IntrusiveRefCntPtrDiagnosticOptions(std::move(
      *static_cast<llvm::IntrusiveRefCntPtr<clang::DiagnosticOptions>*>(S)));
  }
  static void Destructor0(void* objectHandle)
  {
    delete static_cast<AG_llvm::AG_IntrusiveRefCntPtrDiagnosticOptions*>(
      objectHandle);
  }
};

struct AG_Twine : public llvm::Twine
{
  AG_Twine()
    : llvm::Twine()
  {
  }
  AG_Twine(const char* Str)
    : llvm::Twine(Str)
  {
  }
  AG_Twine(const std::basic_string<char>& Str)
    : llvm::Twine(Str)
  {
  }
  AG_Twine(const std::basic_string_view<char>& Str)
    : llvm::Twine(Str)
  {
  }
  AG_Twine(const llvm::StringRef& Str)
    : llvm::Twine(Str)
  {
  }
  AG_Twine(const llvm::SmallVectorImpl<char>& Str)
    : llvm::Twine(Str)
  {
  }
  AG_Twine(const llvm::formatv_object_base& Fmt)
    : llvm::Twine(Fmt)
  {
  }
  AG_Twine(char Val)
    : llvm::Twine(Val)
  {
  }
  AG_Twine(unsigned int Val)
    : llvm::Twine(Val)
  {
  }
  AG_Twine(const char* LHS, const llvm::StringRef& RHS)
    : llvm::Twine(LHS, RHS)
  {
  }
  AG_Twine(const llvm::StringRef& LHS, const char* RHS)
    : llvm::Twine(LHS, RHS)
  {
  }
  static void* Twine0() { return new AG_llvm::AG_Twine(); }
  static void* Twine1(const char* Str)
  {
    return new AG_llvm::AG_Twine(static_cast<const char*>(Str));
  }
  static void* Twine2(void* Str)
  {
    return new AG_llvm::AG_Twine(
      *static_cast<const std::basic_string<char>*>(Str));
  }
  static void* Twine3(void* Str)
  {
    return new AG_llvm::AG_Twine(
      *static_cast<const std::basic_string_view<char>*>(Str));
  }
  static void* Twine4(void* Str)
  {
    return new AG_llvm::AG_Twine(*static_cast<const llvm::StringRef*>(Str));
  }
  static void* Twine5(void* Str)
  {
    return new AG_llvm::AG_Twine(
      *static_cast<const llvm::SmallVectorImpl<char>*>(Str));
  }
  static void* Twine6(void* Fmt)
  {
    return new AG_llvm::AG_Twine(
      *static_cast<const llvm::formatv_object_base*>(Fmt));
  }
  static void* Twine7(char Val)
  {
    return new AG_llvm::AG_Twine(static_cast<char>(Val));
  }
  static void* Twine8(int Val)
  {
    return new AG_llvm::AG_Twine(static_cast<unsigned int>(Val));
  }
  static void* Twine9(const char* LHS, void* RHS)
  {
    return new AG_llvm::AG_Twine(static_cast<const char*>(LHS),
                                 *static_cast<const llvm::StringRef*>(RHS));
  }
  static void* Twine10(void* LHS, const char* RHS)
  {
    return new AG_llvm::AG_Twine(*static_cast<const llvm::StringRef*>(LHS),
                                 static_cast<const char*>(RHS));
  }
  static void Destructor0(void* objectHandle)
  {
    delete static_cast<AG_llvm::AG_Twine*>(objectHandle);
  }
};

namespace AG_vfs {
struct AG_directory_iterator : public llvm::vfs::directory_iterator
{
  AG_directory_iterator(std::shared_ptr<llvm::vfs::detail::DirIterImpl> I)
    : llvm::vfs::directory_iterator(I)
  {
  }
  AG_directory_iterator()
    : llvm::vfs::directory_iterator()
  {
  }
  AG_directory_iterator(llvm::vfs::directory_iterator&& param1)
    : llvm::vfs::directory_iterator(std::move(param1))
  {
  }
  static void* directory_iterator0(void* I)
  {
    return new AG_llvm::AG_vfs::AG_directory_iterator(
      *static_cast<std::shared_ptr<llvm::vfs::detail::DirIterImpl>*>(I));
  }
  static void* directory_iterator1()
  {
    return new AG_llvm::AG_vfs::AG_directory_iterator();
  }
  static void* directory_iterator2(void* param1)
  {
    return new AG_llvm::AG_vfs::AG_directory_iterator(
      std::move(*static_cast<llvm::vfs::directory_iterator*>(param1)));
  }
  static void Destructor0(void* objectHandle)
  {
    delete static_cast<AG_llvm::AG_vfs::AG_directory_iterator*>(objectHandle);
  }
};

struct AG_FileSystem : public llvm::vfs::FileSystem
{
  AG_FileSystem()
    : llvm::vfs::FileSystem()
  {
  }
  void* AG_foreignObject;
  void* (*AG_intercept_status0)(void* objectHandle, void* Path);
  llvm::ErrorOr<llvm::vfs::Status> status(const llvm::Twine& Path) override
  {
    return std::move(*static_cast<llvm::ErrorOr<llvm::vfs::Status>*>(
      AG_intercept_status0(AG_foreignObject, (void*)&Path)));
  }
  void* (*AG_intercept_openFileForRead0)(void* objectHandle, void* Path);
  llvm::ErrorOr<std::unique_ptr<llvm::vfs::File>> openFileForRead(
    const llvm::Twine& Path) override
  {
    return std::move(
      *static_cast<llvm::ErrorOr<std::unique_ptr<llvm::vfs::File>>*>(
        AG_intercept_openFileForRead0(AG_foreignObject, (void*)&Path)));
  }
  void* (*AG_intercept_dir_begin0)(void* objectHandle, void* Dir, void* EC);
  llvm::vfs::directory_iterator dir_begin(const llvm::Twine& Dir,
                                          std::error_code& EC) override
  {
    return std::move(*static_cast<llvm::vfs::directory_iterator*>(
      AG_intercept_dir_begin0(AG_foreignObject, (void*)&Dir, &EC)));
  }
  void* (*AG_intercept_setCurrentWorkingDirectory0)(void* objectHandle,
                                                    void* Path);
  std::error_code setCurrentWorkingDirectory(const llvm::Twine& Path) override
  {
    return *static_cast<std::error_code*>(
      AG_intercept_setCurrentWorkingDirectory0(AG_foreignObject, (void*)&Path));
  }
  void* (*AG_intercept_getCurrentWorkingDirectory0)(void* objectHandle);
  llvm::ErrorOr<std::basic_string<char>> getCurrentWorkingDirectory()
    const override
  {
    return std::move(*static_cast<llvm::ErrorOr<std::basic_string<char>>*>(
      AG_intercept_getCurrentWorkingDirectory0(AG_foreignObject)));
  }
  static void* AG_virtual_status0(void* objectHandle, void* Path)
  {
    return new llvm::ErrorOr<llvm::vfs::Status>(
      static_cast<AG_llvm::AG_vfs::AG_FileSystem*>(objectHandle)
        ->status(*static_cast<const llvm::Twine*>(Path)));
  }
  static void* AG_virtual_openFileForRead0(void* objectHandle, void* Path)
  {
    return new llvm::ErrorOr<std::unique_ptr<llvm::vfs::File>>(
      static_cast<AG_llvm::AG_vfs::AG_FileSystem*>(objectHandle)
        ->openFileForRead(*static_cast<const llvm::Twine*>(Path)));
  }
  static void* AG_virtual_dir_begin0(void* objectHandle, void* Dir, void* EC)
  {
    return new llvm::vfs::directory_iterator(
      static_cast<AG_llvm::AG_vfs::AG_FileSystem*>(objectHandle)
        ->dir_begin(*static_cast<const llvm::Twine*>(Dir),
                    *static_cast<std::error_code*>(EC)));
  }
  static void* AG_virtual_setCurrentWorkingDirectory0(void* objectHandle,
                                                      void* Path)
  {
    return new std::error_code(
      static_cast<AG_llvm::AG_vfs::AG_FileSystem*>(objectHandle)
        ->setCurrentWorkingDirectory(*static_cast<const llvm::Twine*>(Path)));
  }
  static void* AG_virtual_getCurrentWorkingDirectory0(void* objectHandle)
  {
    return new llvm::ErrorOr<std::basic_string<char>>(
      static_cast<AG_llvm::AG_vfs::AG_FileSystem*>(objectHandle)
        ->getCurrentWorkingDirectory());
  }
  static void Destructor0(void* objectHandle)
  {
    delete static_cast<AG_llvm::AG_vfs::AG_FileSystem*>(objectHandle);
  }
  static void* status0(void* objectHandle, void* Path)
  {
    return new llvm::ErrorOr<llvm::vfs::Status>(
      static_cast<AG_llvm::AG_vfs::AG_FileSystem*>(objectHandle)
        ->llvm::vfs::FileSystem::status(
          *static_cast<const llvm::Twine*>(Path)));
  }
  static void* openFileForRead0(void* objectHandle, void* Path)
  {
    return new llvm::ErrorOr<std::unique_ptr<llvm::vfs::File>>(
      static_cast<AG_llvm::AG_vfs::AG_FileSystem*>(objectHandle)
        ->llvm::vfs::FileSystem::openFileForRead(
          *static_cast<const llvm::Twine*>(Path)));
  }
  static void* dir_begin0(void* objectHandle, void* Dir, void* EC)
  {
    return new llvm::vfs::directory_iterator(
      static_cast<AG_llvm::AG_vfs::AG_FileSystem*>(objectHandle)
        ->llvm::vfs::FileSystem::dir_begin(
          *static_cast<const llvm::Twine*>(Dir),
          *static_cast<std::error_code*>(EC)));
  }
  static void* setCurrentWorkingDirectory0(void* objectHandle, void* Path)
  {
    return new std::error_code(
      static_cast<AG_llvm::AG_vfs::AG_FileSystem*>(objectHandle)
        ->llvm::vfs::FileSystem::setCurrentWorkingDirectory(
          *static_cast<const llvm::Twine*>(Path)));
  }
  static void* getCurrentWorkingDirectory0(void* objectHandle)
  {
    return new llvm::ErrorOr<std::basic_string<char>>(
      static_cast<AG_llvm::AG_vfs::AG_FileSystem*>(objectHandle)
        ->llvm::vfs::FileSystem::getCurrentWorkingDirectory());
  }
  static void* FileSystem0() { return new AG_llvm::AG_vfs::AG_FileSystem(); }
};

}
struct AG_ErrorOrStatus : public llvm::ErrorOr<llvm::vfs::Status>
{
  AG_ErrorOrStatus(std::error_code EC)
    : llvm::ErrorOr<llvm::vfs::Status>(EC)
  {
  }
  AG_ErrorOrStatus(llvm::ErrorOr<llvm::vfs::Status>&& Other)
    : llvm::ErrorOr<llvm::vfs::Status>(std::move(Other))
  {
  }
  static void* ErrorOr0(void* EC)
  {
    return new AG_llvm::AG_ErrorOrStatus(*static_cast<std::error_code*>(EC));
  }
  static void* ErrorOr1(void* Other)
  {
    return new AG_llvm::AG_ErrorOrStatus(
      std::move(*static_cast<llvm::ErrorOr<llvm::vfs::Status>*>(Other)));
  }
  static void Destructor0(void* objectHandle)
  {
    delete static_cast<AG_llvm::AG_ErrorOrStatus*>(objectHandle);
  }
};

struct AG_ErrorOrbasic_stringCharacter_char_traitsCharacter_allocatorCharacter
  : public llvm::ErrorOr<std::basic_string<char>>
{
  AG_ErrorOrbasic_stringCharacter_char_traitsCharacter_allocatorCharacter(
    std::error_code EC)
    : llvm::ErrorOr<std::basic_string<char>>(EC)
  {
  }
  AG_ErrorOrbasic_stringCharacter_char_traitsCharacter_allocatorCharacter(
    llvm::ErrorOr<std::basic_string<char>>&& Other)
    : llvm::ErrorOr<std::basic_string<char>>(std::move(Other))
  {
  }
  static void* ErrorOr0(void* EC)
  {
    return new AG_llvm::
      AG_ErrorOrbasic_stringCharacter_char_traitsCharacter_allocatorCharacter(
        *static_cast<std::error_code*>(EC));
  }
  static void* ErrorOr1(void* Other)
  {
    return new AG_llvm::
      AG_ErrorOrbasic_stringCharacter_char_traitsCharacter_allocatorCharacter(
        std::move(
          *static_cast<llvm::ErrorOr<std::basic_string<char>>*>(Other)));
  }
  static void Destructor0(void* objectHandle)
  {
    delete static_cast<
      AG_llvm::
        AG_ErrorOrbasic_stringCharacter_char_traitsCharacter_allocatorCharacter*>(
      objectHandle);
  }
};

struct AG_ErrorOrunique_ptrFile_default_deleteFile
  : public llvm::ErrorOr<std::unique_ptr<llvm::vfs::File>>
{
  AG_ErrorOrunique_ptrFile_default_deleteFile(std::error_code EC)
    : llvm::ErrorOr<std::unique_ptr<llvm::vfs::File>>(EC)
  {
  }
  AG_ErrorOrunique_ptrFile_default_deleteFile(
    llvm::ErrorOr<std::unique_ptr<llvm::vfs::File>>&& Other)
    : llvm::ErrorOr<std::unique_ptr<llvm::vfs::File>>(std::move(Other))
  {
  }
  static void* ErrorOr0(void* EC)
  {
    return new AG_llvm::AG_ErrorOrunique_ptrFile_default_deleteFile(
      *static_cast<std::error_code*>(EC));
  }
  static void* ErrorOr1(void* Other)
  {
    return new AG_llvm::AG_ErrorOrunique_ptrFile_default_deleteFile(std::move(
      *static_cast<llvm::ErrorOr<std::unique_ptr<llvm::vfs::File>>*>(Other)));
  }
  static void Destructor0(void* objectHandle)
  {
    delete static_cast<AG_llvm::AG_ErrorOrunique_ptrFile_default_deleteFile*>(
      objectHandle);
  }
};

struct AG_ThreadSafeRefCountedBaseFileSystem
  : public llvm::ThreadSafeRefCountedBase<llvm::vfs::FileSystem>
{
  AG_ThreadSafeRefCountedBaseFileSystem()
    : llvm::ThreadSafeRefCountedBase<llvm::vfs::FileSystem>()
  {
  }
  static void* ThreadSafeRefCountedBase0()
  {
    return new AG_llvm::AG_ThreadSafeRefCountedBaseFileSystem();
  }
  static void Destructor0(void* objectHandle)
  {
    delete static_cast<AG_llvm::AG_ThreadSafeRefCountedBaseFileSystem*>(
      objectHandle);
  }
};

struct AG_IntrusiveRefCntPtrFileSystem
  : public llvm::IntrusiveRefCntPtr<llvm::vfs::FileSystem>
{
  AG_IntrusiveRefCntPtrFileSystem()
    : llvm::IntrusiveRefCntPtr<llvm::vfs::FileSystem>()
  {
  }
  AG_IntrusiveRefCntPtrFileSystem(llvm::vfs::FileSystem* obj)
    : llvm::IntrusiveRefCntPtr<llvm::vfs::FileSystem>(obj)
  {
  }
  AG_IntrusiveRefCntPtrFileSystem(
    llvm::IntrusiveRefCntPtr<llvm::vfs::FileSystem>&& S)
    : llvm::IntrusiveRefCntPtr<llvm::vfs::FileSystem>(std::move(S))
  {
  }
  static void* IntrusiveRefCntPtr0()
  {
    return new AG_llvm::AG_IntrusiveRefCntPtrFileSystem();
  }
  static void* IntrusiveRefCntPtr1(void* obj)
  {
    return new AG_llvm::AG_IntrusiveRefCntPtrFileSystem(
      static_cast<llvm::vfs::FileSystem*>(obj));
  }
  static void* IntrusiveRefCntPtr2(void* S)
  {
    return new AG_llvm::AG_IntrusiveRefCntPtrFileSystem(std::move(
      *static_cast<llvm::IntrusiveRefCntPtr<llvm::vfs::FileSystem>*>(S)));
  }
  static void Destructor0(void* objectHandle)
  {
    delete static_cast<AG_llvm::AG_IntrusiveRefCntPtrFileSystem*>(objectHandle);
  }
};

struct AG_RefCountedBaseSourceManager
  : public llvm::RefCountedBase<clang::SourceManager>
{
  AG_RefCountedBaseSourceManager()
    : llvm::RefCountedBase<clang::SourceManager>()
  {
  }
  static void* RefCountedBase0()
  {
    return new AG_llvm::AG_RefCountedBaseSourceManager();
  }
  static void Destructor0(void* objectHandle)
  {
    delete static_cast<AG_llvm::AG_RefCountedBaseSourceManager*>(objectHandle);
  }
};

struct AG_RefCountedBaseFileManager
  : public llvm::RefCountedBase<clang::FileManager>
{
  AG_RefCountedBaseFileManager()
    : llvm::RefCountedBase<clang::FileManager>()
  {
  }
  static void* RefCountedBase0()
  {
    return new AG_llvm::AG_RefCountedBaseFileManager();
  }
  static void Destructor0(void* objectHandle)
  {
    delete static_cast<AG_llvm::AG_RefCountedBaseFileManager*>(objectHandle);
  }
};

struct AG_RefCountedBaseASTContext
  : public llvm::RefCountedBase<clang::ASTContext>
{
  AG_RefCountedBaseASTContext()
    : llvm::RefCountedBase<clang::ASTContext>()
  {
  }
  static void* RefCountedBase0()
  {
    return new AG_llvm::AG_RefCountedBaseASTContext();
  }
  static void Destructor0(void* objectHandle)
  {
    delete static_cast<AG_llvm::AG_RefCountedBaseASTContext*>(objectHandle);
  }
};

}
// ---------- Class std::basic_string_viewCharacter_char_traitsCharacter :
// ----------

extern "C" void*
std_basic_string_viewCharacter_char_traitsCharacter_basic_string_view0()
{
  return AG_std::AG_basic_string_viewCharacter_char_traitsCharacter::
    basic_string_view0();
}

extern "C" void*
std_basic_string_viewCharacter_char_traitsCharacter_basic_string_view1(
  const char* __str)
{
  return AG_std::AG_basic_string_viewCharacter_char_traitsCharacter::
    basic_string_view1(__str);
}

extern "C" void*
std_basic_string_viewCharacter_char_traitsCharacter_basic_string_view2(
  const char* __str,
  int __len)
{
  return AG_std::AG_basic_string_viewCharacter_char_traitsCharacter::
    basic_string_view2(__str, __len);
}

extern "C" void
std_basic_string_viewCharacter_char_traitsCharacter_Destructor0(
  void* objectHandle)
{
  AG_std::AG_basic_string_viewCharacter_char_traitsCharacter::Destructor0(
    objectHandle);
}

// ---------- Class std::allocatorCharacter :  ----------

extern "C" void*
std_allocatorCharacter_allocator0()
{
  return AG_std::AG_allocatorCharacter::allocator0();
}

extern "C" void
std_allocatorCharacter_Destructor0(void* objectHandle)
{
  AG_std::AG_allocatorCharacter::Destructor0(objectHandle);
}

// ---------- Class
// std::basic_stringCharacter_char_traitsCharacter_allocatorCharacter :
// ----------

extern "C" void*
std_basic_stringCharacter_char_traitsCharacter_allocatorCharacter_basic_string0()
{
  return AG_std::
    AG_basic_stringCharacter_char_traitsCharacter_allocatorCharacter::
      basic_string0();
}

extern "C" void*
std_basic_stringCharacter_char_traitsCharacter_allocatorCharacter_basic_string1(
  void* __a)
{
  return AG_std::
    AG_basic_stringCharacter_char_traitsCharacter_allocatorCharacter::
      basic_string1(__a);
}

extern "C" void*
std_basic_stringCharacter_char_traitsCharacter_allocatorCharacter_basic_string2(
  void* __str,
  int __pos,
  void* __a)
{
  return AG_std::
    AG_basic_stringCharacter_char_traitsCharacter_allocatorCharacter::
      basic_string2(__str, __pos, __a);
}

extern "C" void*
std_basic_stringCharacter_char_traitsCharacter_allocatorCharacter_basic_string3(
  void* __str,
  int __pos,
  int __n)
{
  return AG_std::
    AG_basic_stringCharacter_char_traitsCharacter_allocatorCharacter::
      basic_string3(__str, __pos, __n);
}

extern "C" void*
std_basic_stringCharacter_char_traitsCharacter_allocatorCharacter_basic_string4(
  void* __str,
  int __pos,
  int __n,
  void* __a)
{
  return AG_std::
    AG_basic_stringCharacter_char_traitsCharacter_allocatorCharacter::
      basic_string4(__str, __pos, __n, __a);
}

extern "C" void*
std_basic_stringCharacter_char_traitsCharacter_allocatorCharacter_basic_string5(
  const char* __s,
  int __n,
  void* __a)
{
  return AG_std::
    AG_basic_stringCharacter_char_traitsCharacter_allocatorCharacter::
      basic_string5(__s, __n, __a);
}

extern "C" void*
std_basic_stringCharacter_char_traitsCharacter_allocatorCharacter_basic_string6(
  void* __str)
{
  return AG_std::
    AG_basic_stringCharacter_char_traitsCharacter_allocatorCharacter::
      basic_string6(__str);
}

extern "C" void*
std_basic_stringCharacter_char_traitsCharacter_allocatorCharacter_basic_string7(
  void* __l,
  void* __a)
{
  return AG_std::
    AG_basic_stringCharacter_char_traitsCharacter_allocatorCharacter::
      basic_string7(__l, __a);
}

extern "C" void*
std_basic_stringCharacter_char_traitsCharacter_allocatorCharacter_basic_string8(
  void* __str,
  void* __a)
{
  return AG_std::
    AG_basic_stringCharacter_char_traitsCharacter_allocatorCharacter::
      basic_string8(__str, __a);
}

extern "C" void
std_basic_stringCharacter_char_traitsCharacter_allocatorCharacter_Destructor0(
  void* objectHandle)
{
  AG_std::AG_basic_stringCharacter_char_traitsCharacter_allocatorCharacter::
    Destructor0(objectHandle);
}

// ---------- Class std::initializer_listCharacter :  ----------

extern "C" void*
std_initializer_listCharacter_initializer_list0()
{
  return AG_std::AG_initializer_listCharacter::initializer_list0();
}

extern "C" void*
std_initializer_listCharacter_initializer_list1(void* param1)
{
  return AG_std::AG_initializer_listCharacter::initializer_list1(param1);
}

// ---------- Class std::error_category :  ----------

extern "C" void
std_error_category_AG_initializeInterceptionContext(
  void* objectHandle,
  void* AG_foreignObject,
  const char* (*AG_intercept_name0)(void* objectHandle),
  void* (*AG_intercept_message0)(void* objectHandle, int param1))
{
  auto* obj = static_cast<AG_std::AG_error_category*>(objectHandle);
  obj->AG_foreignObject = AG_foreignObject;
  obj->AG_intercept_name0 = AG_intercept_name0;
  obj->AG_intercept_message0 = AG_intercept_message0;
}
extern "C" void*
std_error_category_error_category0()
{
  return AG_std::AG_error_category::error_category0();
}

extern "C" void
std_error_category_Destructor0(void* objectHandle)
{
  AG_std::AG_error_category::Destructor0(objectHandle);
}

// ---------- Class std::error_category::ConcreteType :  ----------

extern "C" const char*
std_error_category_ConcreteType_name0(void* objectHandle)
{
  return AG_std::AG_error_category::AG_virtual_name0(objectHandle);
}

extern "C" void*
std_error_category_ConcreteType_message0(void* objectHandle, int param1)
{
  return AG_std::AG_error_category::AG_virtual_message0(objectHandle, param1);
}

// ---------- Class std::error_code :  ----------

extern "C" void*
std_error_code_error_code0()
{
  return AG_std::AG_error_code::error_code0();
}

extern "C" void*
std_error_code_error_code1(int __v, void* __cat)
{
  return AG_std::AG_error_code::error_code1(__v, __cat);
}

extern "C" void
std_error_code_Destructor0(void* objectHandle)
{
  AG_std::AG_error_code::Destructor0(objectHandle);
}

// ---------- Class std::filesystem::path :  ----------

extern "C" void*
std_filesystem_path_path0()
{
  return AG_std::AG_filesystem::AG_path::path0();
}

extern "C" void*
std_filesystem_path_path1(void* __p)
{
  return AG_std::AG_filesystem::AG_path::path1(__p);
}

extern "C" void*
std_filesystem_path_path2(void* __source, int param2)
{
  return AG_std::AG_filesystem::AG_path::path2(__source, param2);
}

extern "C" void
std_filesystem_path_Destructor0(void* objectHandle)
{
  AG_std::AG_filesystem::AG_path::Destructor0(objectHandle);
}

// ---------- Class std::nothrow_t :  ----------

extern "C" void*
std_nothrow_t_nothrow_t0()
{
  return AG_std::AG_nothrow_t::nothrow_t0();
}

extern "C" void*
std_nothrow_t_nothrow_t1(void* param1)
{
  return AG_std::AG_nothrow_t::nothrow_t1(param1);
}

// ---------- Class std::allocatorpath :  ----------

extern "C" void*
std_allocatorpath_allocator0()
{
  return AG_std::AG_allocatorpath::allocator0();
}

extern "C" void
std_allocatorpath_Destructor0(void* objectHandle)
{
  AG_std::AG_allocatorpath::Destructor0(objectHandle);
}

// ---------- Class std::vectorpath_allocatorpath :  ----------

extern "C" void*
std_vectorpath_allocatorpath_vector0()
{
  return AG_std::AG_vectorpath_allocatorpath::vector0();
}

extern "C" void*
std_vectorpath_allocatorpath_vector1(void* __a)
{
  return AG_std::AG_vectorpath_allocatorpath::vector1(__a);
}

extern "C" void*
std_vectorpath_allocatorpath_vector2(int __n, void* __a)
{
  return AG_std::AG_vectorpath_allocatorpath::vector2(__n, __a);
}

extern "C" void*
std_vectorpath_allocatorpath_vector3(int __n, void* __value, void* __a)
{
  return AG_std::AG_vectorpath_allocatorpath::vector3(__n, __value, __a);
}

extern "C" void*
std_vectorpath_allocatorpath_vector4(void* param1)
{
  return AG_std::AG_vectorpath_allocatorpath::vector4(param1);
}

extern "C" void*
std_vectorpath_allocatorpath_vector5(void* __x, void* __a)
{
  return AG_std::AG_vectorpath_allocatorpath::vector5(__x, __a);
}

extern "C" void*
std_vectorpath_allocatorpath_vector6(void* __l, void* __a)
{
  return AG_std::AG_vectorpath_allocatorpath::vector6(__l, __a);
}

extern "C" void
std_vectorpath_allocatorpath_Destructor0(void* objectHandle)
{
  AG_std::AG_vectorpath_allocatorpath::Destructor0(objectHandle);
}

// ---------- Class std::_Vector_basepath_allocatorpath :  ----------

extern "C" void*
std__Vector_basepath_allocatorpath__Vector_base0()
{
  return AG_std::AG__Vector_basepath_allocatorpath::_Vector_base0();
}

extern "C" void*
std__Vector_basepath_allocatorpath__Vector_base1(void* __a)
{
  return AG_std::AG__Vector_basepath_allocatorpath::_Vector_base1(__a);
}

extern "C" void*
std__Vector_basepath_allocatorpath__Vector_base2(int __n)
{
  return AG_std::AG__Vector_basepath_allocatorpath::_Vector_base2(__n);
}

extern "C" void*
std__Vector_basepath_allocatorpath__Vector_base3(int __n, void* __a)
{
  return AG_std::AG__Vector_basepath_allocatorpath::_Vector_base3(__n, __a);
}

extern "C" void*
std__Vector_basepath_allocatorpath__Vector_base4(void* param1)
{
  return AG_std::AG__Vector_basepath_allocatorpath::_Vector_base4(param1);
}

extern "C" void*
std__Vector_basepath_allocatorpath__Vector_base5(void* __x, void* __a)
{
  return AG_std::AG__Vector_basepath_allocatorpath::_Vector_base5(__x, __a);
}

extern "C" void*
std__Vector_basepath_allocatorpath__Vector_base6(void* __a, void* __x)
{
  return AG_std::AG__Vector_basepath_allocatorpath::_Vector_base6(__a, __x);
}

extern "C" void
std__Vector_basepath_allocatorpath_Destructor0(void* objectHandle)
{
  AG_std::AG__Vector_basepath_allocatorpath::Destructor0(objectHandle);
}

// ---------- Class std::__type_identityallocatorpath :  ----------

extern "C" void
std___type_identityallocatorpath_Destructor0(void* objectHandle)
{
  AG_std::AG___type_identityallocatorpath::Destructor0(objectHandle);
}

// ---------- Class std::initializer_listpath :  ----------

// ---------- Class std::enable_shared_from_thisEntityContext :  ----------

extern "C" void*
std_enable_shared_from_thisEntityContext_enable_shared_from_this0()
{
  return AG_std::AG_enable_shared_from_thisEntityContext::
    enable_shared_from_this0();
}

extern "C" void
std_enable_shared_from_thisEntityContext_Destructor0(void* objectHandle)
{
  AG_std::AG_enable_shared_from_thisEntityContext::Destructor0(objectHandle);
}

// ---------- Class std::shared_ptrEntityContext :  ----------

extern "C" void*
std_shared_ptrEntityContext_shared_ptr0()
{
  return AG_std::AG_shared_ptrEntityContext::shared_ptr0();
}

extern "C" void*
std_shared_ptrEntityContext_shared_ptr1(void* __r)
{
  return AG_std::AG_shared_ptrEntityContext::shared_ptr1(__r);
}

extern "C" void
std_shared_ptrEntityContext_Destructor0(void* objectHandle)
{
  AG_std::AG_shared_ptrEntityContext::Destructor0(objectHandle);
}

// ---------- Class std::__shared_ptrEntityContext_2 :  ----------

extern "C" void*
std___shared_ptrEntityContext_2___shared_ptr0()
{
  return AG_std::AG___shared_ptrEntityContext_2::__shared_ptr0();
}

extern "C" void*
std___shared_ptrEntityContext_2___shared_ptr1(void* __r)
{
  return AG_std::AG___shared_ptrEntityContext_2::__shared_ptr1(__r);
}

extern "C" void*
std___shared_ptrEntityContext_2___shared_ptr2(void* __r, void* param2)
{
  return AG_std::AG___shared_ptrEntityContext_2::__shared_ptr2(__r, param2);
}

extern "C" void
std___shared_ptrEntityContext_2_Destructor0(void* objectHandle)
{
  AG_std::AG___shared_ptrEntityContext_2::Destructor0(objectHandle);
}

// ---------- Class std::__shared_ptr_accessEntityContext_2_0_0 :  ----------

extern "C" void
std___shared_ptr_accessEntityContext_2_0_0_Destructor0(void* objectHandle)
{
  AG_std::AG___shared_ptr_accessEntityContext_2_0_0::Destructor0(objectHandle);
}

extern "C" void*
std___shared_ptr_accessEntityContext_2_0_0___shared_ptr_access0(void* param1)
{
  return AG_std::AG___shared_ptr_accessEntityContext_2_0_0::
    __shared_ptr_access0(param1);
}

extern "C" void*
std___shared_ptr_accessEntityContext_2_0_0___shared_ptr_access1()
{
  return AG_std::AG___shared_ptr_accessEntityContext_2_0_0::
    __shared_ptr_access1();
}

// ---------- Class std::__weak_ptrEntityContext_2 :  ----------

extern "C" void*
std___weak_ptrEntityContext_2___weak_ptr0()
{
  return AG_std::AG___weak_ptrEntityContext_2::__weak_ptr0();
}

extern "C" void*
std___weak_ptrEntityContext_2___weak_ptr1(void* __r)
{
  return AG_std::AG___weak_ptrEntityContext_2::__weak_ptr1(__r);
}

extern "C" void
std___weak_ptrEntityContext_2_Destructor0(void* objectHandle)
{
  AG_std::AG___weak_ptrEntityContext_2::Destructor0(objectHandle);
}

// ---------- Class std::shared_ptrTypeContext :  ----------

extern "C" void*
std_shared_ptrTypeContext_shared_ptr0()
{
  return AG_std::AG_shared_ptrTypeContext::shared_ptr0();
}

extern "C" void*
std_shared_ptrTypeContext_shared_ptr1(void* __r)
{
  return AG_std::AG_shared_ptrTypeContext::shared_ptr1(__r);
}

extern "C" void
std_shared_ptrTypeContext_Destructor0(void* objectHandle)
{
  AG_std::AG_shared_ptrTypeContext::Destructor0(objectHandle);
}

// ---------- Class std::__shared_ptrTypeContext_2 :  ----------

extern "C" void*
std___shared_ptrTypeContext_2___shared_ptr0()
{
  return AG_std::AG___shared_ptrTypeContext_2::__shared_ptr0();
}

extern "C" void*
std___shared_ptrTypeContext_2___shared_ptr1(void* __r)
{
  return AG_std::AG___shared_ptrTypeContext_2::__shared_ptr1(__r);
}

extern "C" void*
std___shared_ptrTypeContext_2___shared_ptr2(void* __r, void* param2)
{
  return AG_std::AG___shared_ptrTypeContext_2::__shared_ptr2(__r, param2);
}

extern "C" void
std___shared_ptrTypeContext_2_Destructor0(void* objectHandle)
{
  AG_std::AG___shared_ptrTypeContext_2::Destructor0(objectHandle);
}

// ---------- Class std::__shared_ptr_accessTypeContext_2_0_0 :  ----------

extern "C" void
std___shared_ptr_accessTypeContext_2_0_0_Destructor0(void* objectHandle)
{
  AG_std::AG___shared_ptr_accessTypeContext_2_0_0::Destructor0(objectHandle);
}

extern "C" void*
std___shared_ptr_accessTypeContext_2_0_0___shared_ptr_access0(void* param1)
{
  return AG_std::AG___shared_ptr_accessTypeContext_2_0_0::__shared_ptr_access0(
    param1);
}

extern "C" void*
std___shared_ptr_accessTypeContext_2_0_0___shared_ptr_access1()
{
  return AG_std::AG___shared_ptr_accessTypeContext_2_0_0::
    __shared_ptr_access1();
}

// ---------- Class std::__weak_ptrTypeContext_2 :  ----------

extern "C" void*
std___weak_ptrTypeContext_2___weak_ptr0()
{
  return AG_std::AG___weak_ptrTypeContext_2::__weak_ptr0();
}

extern "C" void*
std___weak_ptrTypeContext_2___weak_ptr1(void* __r)
{
  return AG_std::AG___weak_ptrTypeContext_2::__weak_ptr1(__r);
}

extern "C" void
std___weak_ptrTypeContext_2_Destructor0(void* objectHandle)
{
  AG_std::AG___weak_ptrTypeContext_2::Destructor0(objectHandle);
}

// ---------- Class std::shared_ptrTyperefContext :  ----------

extern "C" void*
std_shared_ptrTyperefContext_shared_ptr0()
{
  return AG_std::AG_shared_ptrTyperefContext::shared_ptr0();
}

extern "C" void*
std_shared_ptrTyperefContext_shared_ptr1(void* __r)
{
  return AG_std::AG_shared_ptrTyperefContext::shared_ptr1(__r);
}

extern "C" void
std_shared_ptrTyperefContext_Destructor0(void* objectHandle)
{
  AG_std::AG_shared_ptrTyperefContext::Destructor0(objectHandle);
}

// ---------- Class std::__shared_ptrTyperefContext_2 :  ----------

extern "C" void*
std___shared_ptrTyperefContext_2___shared_ptr0()
{
  return AG_std::AG___shared_ptrTyperefContext_2::__shared_ptr0();
}

extern "C" void*
std___shared_ptrTyperefContext_2___shared_ptr1(void* __r)
{
  return AG_std::AG___shared_ptrTyperefContext_2::__shared_ptr1(__r);
}

extern "C" void*
std___shared_ptrTyperefContext_2___shared_ptr2(void* __r, void* param2)
{
  return AG_std::AG___shared_ptrTyperefContext_2::__shared_ptr2(__r, param2);
}

extern "C" void
std___shared_ptrTyperefContext_2_Destructor0(void* objectHandle)
{
  AG_std::AG___shared_ptrTyperefContext_2::Destructor0(objectHandle);
}

// ---------- Class std::__shared_ptr_accessTyperefContext_2_0_0 :  ----------

extern "C" void
std___shared_ptr_accessTyperefContext_2_0_0_Destructor0(void* objectHandle)
{
  AG_std::AG___shared_ptr_accessTyperefContext_2_0_0::Destructor0(objectHandle);
}

extern "C" void*
std___shared_ptr_accessTyperefContext_2_0_0___shared_ptr_access0(void* param1)
{
  return AG_std::AG___shared_ptr_accessTyperefContext_2_0_0::
    __shared_ptr_access0(param1);
}

extern "C" void*
std___shared_ptr_accessTyperefContext_2_0_0___shared_ptr_access1()
{
  return AG_std::AG___shared_ptr_accessTyperefContext_2_0_0::
    __shared_ptr_access1();
}

// ---------- Class std::__weak_ptrTyperefContext_2 :  ----------

extern "C" void*
std___weak_ptrTyperefContext_2___weak_ptr0()
{
  return AG_std::AG___weak_ptrTyperefContext_2::__weak_ptr0();
}

extern "C" void*
std___weak_ptrTyperefContext_2___weak_ptr1(void* __r)
{
  return AG_std::AG___weak_ptrTyperefContext_2::__weak_ptr1(__r);
}

extern "C" void
std___weak_ptrTyperefContext_2_Destructor0(void* objectHandle)
{
  AG_std::AG___weak_ptrTyperefContext_2::Destructor0(objectHandle);
}

// ---------- Class std::shared_ptrFunctionContext :  ----------

extern "C" void*
std_shared_ptrFunctionContext_shared_ptr0()
{
  return AG_std::AG_shared_ptrFunctionContext::shared_ptr0();
}

extern "C" void*
std_shared_ptrFunctionContext_shared_ptr1(void* __r)
{
  return AG_std::AG_shared_ptrFunctionContext::shared_ptr1(__r);
}

extern "C" void
std_shared_ptrFunctionContext_Destructor0(void* objectHandle)
{
  AG_std::AG_shared_ptrFunctionContext::Destructor0(objectHandle);
}

// ---------- Class std::__shared_ptrFunctionContext_2 :  ----------

extern "C" void*
std___shared_ptrFunctionContext_2___shared_ptr0()
{
  return AG_std::AG___shared_ptrFunctionContext_2::__shared_ptr0();
}

extern "C" void*
std___shared_ptrFunctionContext_2___shared_ptr1(void* __r)
{
  return AG_std::AG___shared_ptrFunctionContext_2::__shared_ptr1(__r);
}

extern "C" void*
std___shared_ptrFunctionContext_2___shared_ptr2(void* __r, void* param2)
{
  return AG_std::AG___shared_ptrFunctionContext_2::__shared_ptr2(__r, param2);
}

extern "C" void
std___shared_ptrFunctionContext_2_Destructor0(void* objectHandle)
{
  AG_std::AG___shared_ptrFunctionContext_2::Destructor0(objectHandle);
}

// ---------- Class std::__shared_ptr_accessFunctionContext_2_0_0 :  ----------

extern "C" void
std___shared_ptr_accessFunctionContext_2_0_0_Destructor0(void* objectHandle)
{
  AG_std::AG___shared_ptr_accessFunctionContext_2_0_0::Destructor0(
    objectHandle);
}

extern "C" void*
std___shared_ptr_accessFunctionContext_2_0_0___shared_ptr_access0(void* param1)
{
  return AG_std::AG___shared_ptr_accessFunctionContext_2_0_0::
    __shared_ptr_access0(param1);
}

extern "C" void*
std___shared_ptr_accessFunctionContext_2_0_0___shared_ptr_access1()
{
  return AG_std::AG___shared_ptr_accessFunctionContext_2_0_0::
    __shared_ptr_access1();
}

// ---------- Class std::__weak_ptrFunctionContext_2 :  ----------

extern "C" void*
std___weak_ptrFunctionContext_2___weak_ptr0()
{
  return AG_std::AG___weak_ptrFunctionContext_2::__weak_ptr0();
}

extern "C" void*
std___weak_ptrFunctionContext_2___weak_ptr1(void* __r)
{
  return AG_std::AG___weak_ptrFunctionContext_2::__weak_ptr1(__r);
}

extern "C" void
std___weak_ptrFunctionContext_2_Destructor0(void* objectHandle)
{
  AG_std::AG___weak_ptrFunctionContext_2::Destructor0(objectHandle);
}

// ---------- Class std::shared_ptrEntity :  ----------

extern "C" void*
std_shared_ptrEntity_shared_ptr0()
{
  return AG_std::AG_shared_ptrEntity::shared_ptr0();
}

extern "C" void*
std_shared_ptrEntity_shared_ptr1(void* __r)
{
  return AG_std::AG_shared_ptrEntity::shared_ptr1(__r);
}

extern "C" void
std_shared_ptrEntity_Destructor0(void* objectHandle)
{
  AG_std::AG_shared_ptrEntity::Destructor0(objectHandle);
}

// ---------- Class std::enable_shared_from_thisFunctionEntity :  ----------

extern "C" void*
std_enable_shared_from_thisFunctionEntity_enable_shared_from_this0()
{
  return AG_std::AG_enable_shared_from_thisFunctionEntity::
    enable_shared_from_this0();
}

extern "C" void
std_enable_shared_from_thisFunctionEntity_Destructor0(void* objectHandle)
{
  AG_std::AG_enable_shared_from_thisFunctionEntity::Destructor0(objectHandle);
}

// ---------- Class std::shared_ptrFunctionEntity :  ----------

extern "C" void*
std_shared_ptrFunctionEntity_shared_ptr0()
{
  return AG_std::AG_shared_ptrFunctionEntity::shared_ptr0();
}

extern "C" void*
std_shared_ptrFunctionEntity_shared_ptr1(void* __r)
{
  return AG_std::AG_shared_ptrFunctionEntity::shared_ptr1(__r);
}

extern "C" void
std_shared_ptrFunctionEntity_Destructor0(void* objectHandle)
{
  AG_std::AG_shared_ptrFunctionEntity::Destructor0(objectHandle);
}

// ---------- Class std::__weak_ptrFunctionEntity_2 :  ----------

extern "C" void*
std___weak_ptrFunctionEntity_2___weak_ptr0()
{
  return AG_std::AG___weak_ptrFunctionEntity_2::__weak_ptr0();
}

extern "C" void*
std___weak_ptrFunctionEntity_2___weak_ptr1(void* __r)
{
  return AG_std::AG___weak_ptrFunctionEntity_2::__weak_ptr1(__r);
}

extern "C" void
std___weak_ptrFunctionEntity_2_Destructor0(void* objectHandle)
{
  AG_std::AG___weak_ptrFunctionEntity_2::Destructor0(objectHandle);
}

// ---------- Class std::__shared_ptrFunctionEntity_2 :  ----------

extern "C" void*
std___shared_ptrFunctionEntity_2___shared_ptr0()
{
  return AG_std::AG___shared_ptrFunctionEntity_2::__shared_ptr0();
}

extern "C" void*
std___shared_ptrFunctionEntity_2___shared_ptr1(void* __r)
{
  return AG_std::AG___shared_ptrFunctionEntity_2::__shared_ptr1(__r);
}

extern "C" void*
std___shared_ptrFunctionEntity_2___shared_ptr2(void* __r, void* param2)
{
  return AG_std::AG___shared_ptrFunctionEntity_2::__shared_ptr2(__r, param2);
}

extern "C" void
std___shared_ptrFunctionEntity_2_Destructor0(void* objectHandle)
{
  AG_std::AG___shared_ptrFunctionEntity_2::Destructor0(objectHandle);
}

// ---------- Class std::shared_ptrTypeReferenceEntity :  ----------

extern "C" void*
std_shared_ptrTypeReferenceEntity_shared_ptr0()
{
  return AG_std::AG_shared_ptrTypeReferenceEntity::shared_ptr0();
}

extern "C" void*
std_shared_ptrTypeReferenceEntity_shared_ptr1(void* __r)
{
  return AG_std::AG_shared_ptrTypeReferenceEntity::shared_ptr1(__r);
}

extern "C" void
std_shared_ptrTypeReferenceEntity_Destructor0(void* objectHandle)
{
  AG_std::AG_shared_ptrTypeReferenceEntity::Destructor0(objectHandle);
}

// ---------- Class std::__shared_ptrTypeReferenceEntity_2 :  ----------

extern "C" void*
std___shared_ptrTypeReferenceEntity_2___shared_ptr0()
{
  return AG_std::AG___shared_ptrTypeReferenceEntity_2::__shared_ptr0();
}

extern "C" void*
std___shared_ptrTypeReferenceEntity_2___shared_ptr1(void* __r)
{
  return AG_std::AG___shared_ptrTypeReferenceEntity_2::__shared_ptr1(__r);
}

extern "C" void*
std___shared_ptrTypeReferenceEntity_2___shared_ptr2(void* __r, void* param2)
{
  return AG_std::AG___shared_ptrTypeReferenceEntity_2::__shared_ptr2(__r,
                                                                     param2);
}

extern "C" void
std___shared_ptrTypeReferenceEntity_2_Destructor0(void* objectHandle)
{
  AG_std::AG___shared_ptrTypeReferenceEntity_2::Destructor0(objectHandle);
}

// ---------- Class std::__shared_ptr_accessTypeReferenceEntity_2_0_0 :
// ----------

extern "C" void
std___shared_ptr_accessTypeReferenceEntity_2_0_0_Destructor0(void* objectHandle)
{
  AG_std::AG___shared_ptr_accessTypeReferenceEntity_2_0_0::Destructor0(
    objectHandle);
}

extern "C" void*
std___shared_ptr_accessTypeReferenceEntity_2_0_0___shared_ptr_access0(
  void* param1)
{
  return AG_std::AG___shared_ptr_accessTypeReferenceEntity_2_0_0::
    __shared_ptr_access0(param1);
}

// ---------- Class std::__weak_ptrTypeReferenceEntity_2 :  ----------

// ---------- Class std::weak_ptrFunctionGroupEntity :  ----------

extern "C" void*
std_weak_ptrFunctionGroupEntity_weak_ptr0()
{
  return AG_std::AG_weak_ptrFunctionGroupEntity::weak_ptr0();
}

extern "C" void*
std_weak_ptrFunctionGroupEntity_weak_ptr1(void* param1)
{
  return AG_std::AG_weak_ptrFunctionGroupEntity::weak_ptr1(param1);
}

extern "C" void
std_weak_ptrFunctionGroupEntity_Destructor0(void* objectHandle)
{
  AG_std::AG_weak_ptrFunctionGroupEntity::Destructor0(objectHandle);
}

// ---------- Class std::__weak_ptrFunctionGroupEntity_2 :  ----------

extern "C" void*
std___weak_ptrFunctionGroupEntity_2___weak_ptr0()
{
  return AG_std::AG___weak_ptrFunctionGroupEntity_2::__weak_ptr0();
}

extern "C" void*
std___weak_ptrFunctionGroupEntity_2___weak_ptr1(void* __r)
{
  return AG_std::AG___weak_ptrFunctionGroupEntity_2::__weak_ptr1(__r);
}

extern "C" void
std___weak_ptrFunctionGroupEntity_2_Destructor0(void* objectHandle)
{
  AG_std::AG___weak_ptrFunctionGroupEntity_2::Destructor0(objectHandle);
}

// ---------- Class std::__shared_ptrFunctionGroupEntity_2 :  ----------

extern "C" void*
std___shared_ptrFunctionGroupEntity_2___shared_ptr0()
{
  return AG_std::AG___shared_ptrFunctionGroupEntity_2::__shared_ptr0();
}

extern "C" void*
std___shared_ptrFunctionGroupEntity_2___shared_ptr1(void* __r)
{
  return AG_std::AG___shared_ptrFunctionGroupEntity_2::__shared_ptr1(__r);
}

extern "C" void*
std___shared_ptrFunctionGroupEntity_2___shared_ptr2(void* __r, void* param2)
{
  return AG_std::AG___shared_ptrFunctionGroupEntity_2::__shared_ptr2(__r,
                                                                     param2);
}

extern "C" void
std___shared_ptrFunctionGroupEntity_2_Destructor0(void* objectHandle)
{
  AG_std::AG___shared_ptrFunctionGroupEntity_2::Destructor0(objectHandle);
}

// ---------- Class std::shared_ptrFunctionGroupEntity :  ----------

extern "C" void*
std_shared_ptrFunctionGroupEntity_shared_ptr0()
{
  return AG_std::AG_shared_ptrFunctionGroupEntity::shared_ptr0();
}

extern "C" void*
std_shared_ptrFunctionGroupEntity_shared_ptr1(void* __r)
{
  return AG_std::AG_shared_ptrFunctionGroupEntity::shared_ptr1(__r);
}

extern "C" void
std_shared_ptrFunctionGroupEntity_Destructor0(void* objectHandle)
{
  AG_std::AG_shared_ptrFunctionGroupEntity::Destructor0(objectHandle);
}

// ---------- Class std::shared_ptrOverloadContext :  ----------

extern "C" void*
std_shared_ptrOverloadContext_shared_ptr0()
{
  return AG_std::AG_shared_ptrOverloadContext::shared_ptr0();
}

extern "C" void*
std_shared_ptrOverloadContext_shared_ptr1(void* __r)
{
  return AG_std::AG_shared_ptrOverloadContext::shared_ptr1(__r);
}

extern "C" void
std_shared_ptrOverloadContext_Destructor0(void* objectHandle)
{
  AG_std::AG_shared_ptrOverloadContext::Destructor0(objectHandle);
}

// ---------- Class std::__shared_ptrOverloadContext_2 :  ----------

extern "C" void*
std___shared_ptrOverloadContext_2___shared_ptr0()
{
  return AG_std::AG___shared_ptrOverloadContext_2::__shared_ptr0();
}

extern "C" void*
std___shared_ptrOverloadContext_2___shared_ptr1(void* __r)
{
  return AG_std::AG___shared_ptrOverloadContext_2::__shared_ptr1(__r);
}

extern "C" void*
std___shared_ptrOverloadContext_2___shared_ptr2(void* __r, void* param2)
{
  return AG_std::AG___shared_ptrOverloadContext_2::__shared_ptr2(__r, param2);
}

extern "C" void
std___shared_ptrOverloadContext_2_Destructor0(void* objectHandle)
{
  AG_std::AG___shared_ptrOverloadContext_2::Destructor0(objectHandle);
}

// ---------- Class std::__shared_ptr_accessOverloadContext_2_0_0 :  ----------

extern "C" void
std___shared_ptr_accessOverloadContext_2_0_0_Destructor0(void* objectHandle)
{
  AG_std::AG___shared_ptr_accessOverloadContext_2_0_0::Destructor0(
    objectHandle);
}

extern "C" void*
std___shared_ptr_accessOverloadContext_2_0_0___shared_ptr_access0(void* param1)
{
  return AG_std::AG___shared_ptr_accessOverloadContext_2_0_0::
    __shared_ptr_access0(param1);
}

extern "C" void*
std___shared_ptr_accessOverloadContext_2_0_0___shared_ptr_access1()
{
  return AG_std::AG___shared_ptr_accessOverloadContext_2_0_0::
    __shared_ptr_access1();
}

// ---------- Class std::__weak_ptrOverloadContext_2 :  ----------

extern "C" void*
std___weak_ptrOverloadContext_2___weak_ptr0()
{
  return AG_std::AG___weak_ptrOverloadContext_2::__weak_ptr0();
}

extern "C" void*
std___weak_ptrOverloadContext_2___weak_ptr1(void* __r)
{
  return AG_std::AG___weak_ptrOverloadContext_2::__weak_ptr1(__r);
}

extern "C" void
std___weak_ptrOverloadContext_2_Destructor0(void* objectHandle)
{
  AG_std::AG___weak_ptrOverloadContext_2::Destructor0(objectHandle);
}

// ---------- Class std::__shared_ptrEntity_2 :  ----------

extern "C" void*
std___shared_ptrEntity_2___shared_ptr0()
{
  return AG_std::AG___shared_ptrEntity_2::__shared_ptr0();
}

extern "C" void*
std___shared_ptrEntity_2___shared_ptr1(void* __r)
{
  return AG_std::AG___shared_ptrEntity_2::__shared_ptr1(__r);
}

extern "C" void*
std___shared_ptrEntity_2___shared_ptr2(void* __r, void* param2)
{
  return AG_std::AG___shared_ptrEntity_2::__shared_ptr2(__r, param2);
}

extern "C" void
std___shared_ptrEntity_2_Destructor0(void* objectHandle)
{
  AG_std::AG___shared_ptrEntity_2::Destructor0(objectHandle);
}

// ---------- Class std::__shared_ptr_accessEntity_2_0_0 :  ----------

extern "C" void
std___shared_ptr_accessEntity_2_0_0_Destructor0(void* objectHandle)
{
  AG_std::AG___shared_ptr_accessEntity_2_0_0::Destructor0(objectHandle);
}

extern "C" void*
std___shared_ptr_accessEntity_2_0_0___shared_ptr_access0(void* param1)
{
  return AG_std::AG___shared_ptr_accessEntity_2_0_0::__shared_ptr_access0(
    param1);
}

extern "C" void*
std___shared_ptr_accessEntity_2_0_0___shared_ptr_access1()
{
  return AG_std::AG___shared_ptr_accessEntity_2_0_0::__shared_ptr_access1();
}

// ---------- Class std::__weak_ptrEntity_2 :  ----------

// ---------- Class std::enable_shared_from_thisClassEntity :  ----------

extern "C" void*
std_enable_shared_from_thisClassEntity_enable_shared_from_this0()
{
  return AG_std::AG_enable_shared_from_thisClassEntity::
    enable_shared_from_this0();
}

extern "C" void
std_enable_shared_from_thisClassEntity_Destructor0(void* objectHandle)
{
  AG_std::AG_enable_shared_from_thisClassEntity::Destructor0(objectHandle);
}

// ---------- Class std::shared_ptrClassEntity :  ----------

extern "C" void*
std_shared_ptrClassEntity_shared_ptr0()
{
  return AG_std::AG_shared_ptrClassEntity::shared_ptr0();
}

extern "C" void*
std_shared_ptrClassEntity_shared_ptr1(void* __r)
{
  return AG_std::AG_shared_ptrClassEntity::shared_ptr1(__r);
}

extern "C" void
std_shared_ptrClassEntity_Destructor0(void* objectHandle)
{
  AG_std::AG_shared_ptrClassEntity::Destructor0(objectHandle);
}

// ---------- Class std::__shared_ptrClassEntity_2 :  ----------

extern "C" void*
std___shared_ptrClassEntity_2___shared_ptr0()
{
  return AG_std::AG___shared_ptrClassEntity_2::__shared_ptr0();
}

extern "C" void*
std___shared_ptrClassEntity_2___shared_ptr1(void* __r)
{
  return AG_std::AG___shared_ptrClassEntity_2::__shared_ptr1(__r);
}

extern "C" void*
std___shared_ptrClassEntity_2___shared_ptr2(void* __r, void* param2)
{
  return AG_std::AG___shared_ptrClassEntity_2::__shared_ptr2(__r, param2);
}

extern "C" void
std___shared_ptrClassEntity_2_Destructor0(void* objectHandle)
{
  AG_std::AG___shared_ptrClassEntity_2::Destructor0(objectHandle);
}

// ---------- Class std::__shared_ptr_accessClassEntity_2_0_0 :  ----------

extern "C" void
std___shared_ptr_accessClassEntity_2_0_0_Destructor0(void* objectHandle)
{
  AG_std::AG___shared_ptr_accessClassEntity_2_0_0::Destructor0(objectHandle);
}

extern "C" void*
std___shared_ptr_accessClassEntity_2_0_0___shared_ptr_access0(void* param1)
{
  return AG_std::AG___shared_ptr_accessClassEntity_2_0_0::__shared_ptr_access0(
    param1);
}

// ---------- Class std::__weak_ptrClassEntity_2 :  ----------

extern "C" void*
std___weak_ptrClassEntity_2___weak_ptr0()
{
  return AG_std::AG___weak_ptrClassEntity_2::__weak_ptr0();
}

extern "C" void*
std___weak_ptrClassEntity_2___weak_ptr1(void* __r)
{
  return AG_std::AG___weak_ptrClassEntity_2::__weak_ptr1(__r);
}

extern "C" void
std___weak_ptrClassEntity_2_Destructor0(void* objectHandle)
{
  AG_std::AG___weak_ptrClassEntity_2::Destructor0(objectHandle);
}

// ---------- Class std::weak_ptrClassEntity :  ----------

extern "C" void*
std_weak_ptrClassEntity_weak_ptr0()
{
  return AG_std::AG_weak_ptrClassEntity::weak_ptr0();
}

extern "C" void*
std_weak_ptrClassEntity_weak_ptr1(void* param1)
{
  return AG_std::AG_weak_ptrClassEntity::weak_ptr1(param1);
}

extern "C" void
std_weak_ptrClassEntity_Destructor0(void* objectHandle)
{
  AG_std::AG_weak_ptrClassEntity::Destructor0(objectHandle);
}

// ---------- Class std::shared_ptrTypeEntity :  ----------

extern "C" void*
std_shared_ptrTypeEntity_shared_ptr0()
{
  return AG_std::AG_shared_ptrTypeEntity::shared_ptr0();
}

extern "C" void*
std_shared_ptrTypeEntity_shared_ptr1(void* __r)
{
  return AG_std::AG_shared_ptrTypeEntity::shared_ptr1(__r);
}

extern "C" void
std_shared_ptrTypeEntity_Destructor0(void* objectHandle)
{
  AG_std::AG_shared_ptrTypeEntity::Destructor0(objectHandle);
}

// ---------- Class std::__shared_ptrTypeEntity_2 :  ----------

extern "C" void*
std___shared_ptrTypeEntity_2___shared_ptr0()
{
  return AG_std::AG___shared_ptrTypeEntity_2::__shared_ptr0();
}

extern "C" void*
std___shared_ptrTypeEntity_2___shared_ptr1(void* __r)
{
  return AG_std::AG___shared_ptrTypeEntity_2::__shared_ptr1(__r);
}

extern "C" void*
std___shared_ptrTypeEntity_2___shared_ptr2(void* __r, void* param2)
{
  return AG_std::AG___shared_ptrTypeEntity_2::__shared_ptr2(__r, param2);
}

extern "C" void
std___shared_ptrTypeEntity_2_Destructor0(void* objectHandle)
{
  AG_std::AG___shared_ptrTypeEntity_2::Destructor0(objectHandle);
}

// ---------- Class std::__shared_ptr_accessTypeEntity_2_0_0 :  ----------

extern "C" void
std___shared_ptr_accessTypeEntity_2_0_0_Destructor0(void* objectHandle)
{
  AG_std::AG___shared_ptr_accessTypeEntity_2_0_0::Destructor0(objectHandle);
}

extern "C" void*
std___shared_ptr_accessTypeEntity_2_0_0___shared_ptr_access0(void* param1)
{
  return AG_std::AG___shared_ptr_accessTypeEntity_2_0_0::__shared_ptr_access0(
    param1);
}

extern "C" void*
std___shared_ptr_accessTypeEntity_2_0_0___shared_ptr_access1()
{
  return AG_std::AG___shared_ptr_accessTypeEntity_2_0_0::__shared_ptr_access1();
}

// ---------- Class std::__weak_ptrTypeEntity_2 :  ----------

extern "C" void*
std___weak_ptrTypeEntity_2___weak_ptr0()
{
  return AG_std::AG___weak_ptrTypeEntity_2::__weak_ptr0();
}

extern "C" void*
std___weak_ptrTypeEntity_2___weak_ptr1(void* __r)
{
  return AG_std::AG___weak_ptrTypeEntity_2::__weak_ptr1(__r);
}

extern "C" void
std___weak_ptrTypeEntity_2_Destructor0(void* objectHandle)
{
  AG_std::AG___weak_ptrTypeEntity_2::Destructor0(objectHandle);
}

// ---------- Class std::shared_ptrEnumEntryEntity :  ----------

extern "C" void*
std_shared_ptrEnumEntryEntity_shared_ptr0()
{
  return AG_std::AG_shared_ptrEnumEntryEntity::shared_ptr0();
}

extern "C" void*
std_shared_ptrEnumEntryEntity_shared_ptr1(void* __r)
{
  return AG_std::AG_shared_ptrEnumEntryEntity::shared_ptr1(__r);
}

extern "C" void
std_shared_ptrEnumEntryEntity_Destructor0(void* objectHandle)
{
  AG_std::AG_shared_ptrEnumEntryEntity::Destructor0(objectHandle);
}

// ---------- Class std::shared_ptrPrimitiveEntity :  ----------

extern "C" void*
std_shared_ptrPrimitiveEntity_shared_ptr0()
{
  return AG_std::AG_shared_ptrPrimitiveEntity::shared_ptr0();
}

extern "C" void*
std_shared_ptrPrimitiveEntity_shared_ptr1(void* __r)
{
  return AG_std::AG_shared_ptrPrimitiveEntity::shared_ptr1(__r);
}

extern "C" void
std_shared_ptrPrimitiveEntity_Destructor0(void* objectHandle)
{
  AG_std::AG_shared_ptrPrimitiveEntity::Destructor0(objectHandle);
}

// ---------- Class std::__shared_ptrPrimitiveEntity_2 :  ----------

extern "C" void*
std___shared_ptrPrimitiveEntity_2___shared_ptr0()
{
  return AG_std::AG___shared_ptrPrimitiveEntity_2::__shared_ptr0();
}

extern "C" void*
std___shared_ptrPrimitiveEntity_2___shared_ptr1(void* __r)
{
  return AG_std::AG___shared_ptrPrimitiveEntity_2::__shared_ptr1(__r);
}

extern "C" void*
std___shared_ptrPrimitiveEntity_2___shared_ptr2(void* __r, void* param2)
{
  return AG_std::AG___shared_ptrPrimitiveEntity_2::__shared_ptr2(__r, param2);
}

extern "C" void
std___shared_ptrPrimitiveEntity_2_Destructor0(void* objectHandle)
{
  AG_std::AG___shared_ptrPrimitiveEntity_2::Destructor0(objectHandle);
}

// ---------- Class std::__shared_ptr_accessPrimitiveEntity_2_0_0 :  ----------

extern "C" void
std___shared_ptr_accessPrimitiveEntity_2_0_0_Destructor0(void* objectHandle)
{
  AG_std::AG___shared_ptr_accessPrimitiveEntity_2_0_0::Destructor0(
    objectHandle);
}

extern "C" void*
std___shared_ptr_accessPrimitiveEntity_2_0_0___shared_ptr_access0(void* param1)
{
  return AG_std::AG___shared_ptr_accessPrimitiveEntity_2_0_0::
    __shared_ptr_access0(param1);
}

// ---------- Class std::__weak_ptrPrimitiveEntity_2 :  ----------

// ---------- Class std::__shared_ptrEnumEntryEntity_2 :  ----------

extern "C" void*
std___shared_ptrEnumEntryEntity_2___shared_ptr0()
{
  return AG_std::AG___shared_ptrEnumEntryEntity_2::__shared_ptr0();
}

extern "C" void*
std___shared_ptrEnumEntryEntity_2___shared_ptr1(void* __r)
{
  return AG_std::AG___shared_ptrEnumEntryEntity_2::__shared_ptr1(__r);
}

extern "C" void*
std___shared_ptrEnumEntryEntity_2___shared_ptr2(void* __r, void* param2)
{
  return AG_std::AG___shared_ptrEnumEntryEntity_2::__shared_ptr2(__r, param2);
}

extern "C" void
std___shared_ptrEnumEntryEntity_2_Destructor0(void* objectHandle)
{
  AG_std::AG___shared_ptrEnumEntryEntity_2::Destructor0(objectHandle);
}

// ---------- Class std::__shared_ptr_accessEnumEntryEntity_2_0_0 :  ----------

extern "C" void
std___shared_ptr_accessEnumEntryEntity_2_0_0_Destructor0(void* objectHandle)
{
  AG_std::AG___shared_ptr_accessEnumEntryEntity_2_0_0::Destructor0(
    objectHandle);
}

extern "C" void*
std___shared_ptr_accessEnumEntryEntity_2_0_0___shared_ptr_access0(void* param1)
{
  return AG_std::AG___shared_ptr_accessEnumEntryEntity_2_0_0::
    __shared_ptr_access0(param1);
}

extern "C" void*
std___shared_ptr_accessEnumEntryEntity_2_0_0___shared_ptr_access1()
{
  return AG_std::AG___shared_ptr_accessEnumEntryEntity_2_0_0::
    __shared_ptr_access1();
}

// ---------- Class std::__weak_ptrEnumEntryEntity_2 :  ----------

extern "C" void*
std___weak_ptrEnumEntryEntity_2___weak_ptr0()
{
  return AG_std::AG___weak_ptrEnumEntryEntity_2::__weak_ptr0();
}

extern "C" void*
std___weak_ptrEnumEntryEntity_2___weak_ptr1(void* __r)
{
  return AG_std::AG___weak_ptrEnumEntryEntity_2::__weak_ptr1(__r);
}

extern "C" void
std___weak_ptrEnumEntryEntity_2_Destructor0(void* objectHandle)
{
  AG_std::AG___weak_ptrEnumEntryEntity_2::Destructor0(objectHandle);
}

// ---------- Class std::__shared_ptr_accessFunctionEntity_2_0_0 :  ----------

extern "C" void
std___shared_ptr_accessFunctionEntity_2_0_0_Destructor0(void* objectHandle)
{
  AG_std::AG___shared_ptr_accessFunctionEntity_2_0_0::Destructor0(objectHandle);
}

extern "C" void*
std___shared_ptr_accessFunctionEntity_2_0_0___shared_ptr_access0(void* param1)
{
  return AG_std::AG___shared_ptr_accessFunctionEntity_2_0_0::
    __shared_ptr_access0(param1);
}

extern "C" void*
std___shared_ptr_accessFunctionEntity_2_0_0___shared_ptr_access1()
{
  return AG_std::AG___shared_ptr_accessFunctionEntity_2_0_0::
    __shared_ptr_access1();
}

// ---------- Class std::shared_ptrDirIterImpl :  ----------

extern "C" void*
std_shared_ptrDirIterImpl_shared_ptr0()
{
  return AG_std::AG_shared_ptrDirIterImpl::shared_ptr0();
}

extern "C" void*
std_shared_ptrDirIterImpl_shared_ptr1(void* __r)
{
  return AG_std::AG_shared_ptrDirIterImpl::shared_ptr1(__r);
}

extern "C" void
std_shared_ptrDirIterImpl_Destructor0(void* objectHandle)
{
  AG_std::AG_shared_ptrDirIterImpl::Destructor0(objectHandle);
}

// ---------- Class std::__shared_ptrDirIterImpl_2 :  ----------

extern "C" void*
std___shared_ptrDirIterImpl_2___shared_ptr0()
{
  return AG_std::AG___shared_ptrDirIterImpl_2::__shared_ptr0();
}

extern "C" void*
std___shared_ptrDirIterImpl_2___shared_ptr1(void* __r)
{
  return AG_std::AG___shared_ptrDirIterImpl_2::__shared_ptr1(__r);
}

extern "C" void*
std___shared_ptrDirIterImpl_2___shared_ptr2(void* __r, void* param2)
{
  return AG_std::AG___shared_ptrDirIterImpl_2::__shared_ptr2(__r, param2);
}

extern "C" void
std___shared_ptrDirIterImpl_2_Destructor0(void* objectHandle)
{
  AG_std::AG___shared_ptrDirIterImpl_2::Destructor0(objectHandle);
}

// ---------- Class std::__shared_ptr_accessDirIterImpl_2_0_0 :  ----------

extern "C" void
std___shared_ptr_accessDirIterImpl_2_0_0_Destructor0(void* objectHandle)
{
  AG_std::AG___shared_ptr_accessDirIterImpl_2_0_0::Destructor0(objectHandle);
}

extern "C" void*
std___shared_ptr_accessDirIterImpl_2_0_0___shared_ptr_access0(void* param1)
{
  return AG_std::AG___shared_ptr_accessDirIterImpl_2_0_0::__shared_ptr_access0(
    param1);
}

extern "C" void*
std___shared_ptr_accessDirIterImpl_2_0_0___shared_ptr_access1()
{
  return AG_std::AG___shared_ptr_accessDirIterImpl_2_0_0::
    __shared_ptr_access1();
}

// ---------- Class std::__weak_ptrDirIterImpl_2 :  ----------

// ---------- Class std::__shared_ptr_accessFunctionGroupEntity_2_0_0 :
// ----------

extern "C" void
std___shared_ptr_accessFunctionGroupEntity_2_0_0_Destructor0(void* objectHandle)
{
  AG_std::AG___shared_ptr_accessFunctionGroupEntity_2_0_0::Destructor0(
    objectHandle);
}

extern "C" void*
std___shared_ptr_accessFunctionGroupEntity_2_0_0___shared_ptr_access0(
  void* param1)
{
  return AG_std::AG___shared_ptr_accessFunctionGroupEntity_2_0_0::
    __shared_ptr_access0(param1);
}

// ---------- Class __gnu_cxx::__normal_iteratorpath_vectorpath_allocatorpath :
// ----------

extern "C" void*
__gnu_cxx___normal_iteratorpath_vectorpath_allocatorpath___normal_iterator0()
{
  return AG___gnu_cxx::AG___normal_iteratorpath_vectorpath_allocatorpath::
    __normal_iterator0();
}

extern "C" void*
__gnu_cxx___normal_iteratorpath_vectorpath_allocatorpath___normal_iterator1(
  void* __i)
{
  return AG___gnu_cxx::AG___normal_iteratorpath_vectorpath_allocatorpath::
    __normal_iterator1(__i);
}

extern "C" void*
__gnu_cxx___normal_iteratorpath_vectorpath_allocatorpath___normal_iterator2(
  void* param1)
{
  return AG___gnu_cxx::AG___normal_iteratorpath_vectorpath_allocatorpath::
    __normal_iterator2(param1);
}

extern "C" void
__gnu_cxx___normal_iteratorpath_vectorpath_allocatorpath_Destructor0(
  void* objectHandle)
{
  AG___gnu_cxx::AG___normal_iteratorpath_vectorpath_allocatorpath::Destructor0(
    objectHandle);
}

// ---------- Class ag::FileList :  ----------

extern "C" void*
ag_FileList_FileList0(void* rootDirectory, void* extension)
{
  return AG_ag::AG_FileList::FileList0(rootDirectory, extension);
}

extern "C" void*
ag_FileList_FileList1(void* param1)
{
  return AG_ag::AG_FileList::FileList1(param1);
}

extern "C" void*
ag_FileList_begin0(void* objectHandle)
{
  return AG_ag::AG_FileList::begin0(objectHandle);
}

extern "C" void*
ag_FileList_end0(void* objectHandle)
{
  return AG_ag::AG_FileList::end0(objectHandle);
}

extern "C" void
ag_FileList_Destructor0(void* objectHandle)
{
  AG_ag::AG_FileList::Destructor0(objectHandle);
}

// ---------- Class ag::clang::EntityContext :  ----------

extern "C" void*
ag_clang_EntityContext_EntityContext0(int type)
{
  return AG_ag::AG_clang::AG_EntityContext::EntityContext0(type);
}

extern "C" void*
ag_clang_EntityContext_EntityContext1(void* param1)
{
  return AG_ag::AG_clang::AG_EntityContext::EntityContext1(param1);
}

extern "C" void*
ag_clang_EntityContext_getTypeContext0(void* objectHandle)
{
  return AG_ag::AG_clang::AG_EntityContext::getTypeContext0(objectHandle);
}

extern "C" void*
ag_clang_EntityContext_getTyperefContext0(void* objectHandle)
{
  return AG_ag::AG_clang::AG_EntityContext::getTyperefContext0(objectHandle);
}

extern "C" void*
ag_clang_EntityContext_getFunctionContext0(void* objectHandle)
{
  return AG_ag::AG_clang::AG_EntityContext::getFunctionContext0(objectHandle);
}

extern "C" void*
ag_clang_EntityContext_getOverloadContext0(void* objectHandle)
{
  return AG_ag::AG_clang::AG_EntityContext::getOverloadContext0(objectHandle);
}

extern "C" void
ag_clang_EntityContext_Destructor0(void* objectHandle)
{
  AG_ag::AG_clang::AG_EntityContext::Destructor0(objectHandle);
}

// ---------- Class ag::clang::TypeContext :  ----------

extern "C" void*
ag_clang_TypeContext_TypeContext0(void* includePath, void* realName)
{
  return AG_ag::AG_clang::AG_TypeContext::TypeContext0(includePath, realName);
}

extern "C" void*
ag_clang_TypeContext_TypeContext1(void* param1)
{
  return AG_ag::AG_clang::AG_TypeContext::TypeContext1(param1);
}

extern "C" void*
ag_clang_TypeContext_getInclude0(void* objectHandle)
{
  return AG_ag::AG_clang::AG_TypeContext::getInclude0(objectHandle);
}

extern "C" void*
ag_clang_TypeContext_getRealName0(void* objectHandle)
{
  return AG_ag::AG_clang::AG_TypeContext::getRealName0(objectHandle);
}

extern "C" void
ag_clang_TypeContext_Destructor0(void* objectHandle)
{
  AG_ag::AG_clang::AG_TypeContext::Destructor0(objectHandle);
}

// ---------- Class ag::clang::TyperefContext :  ----------

extern "C" void*
ag_clang_TyperefContext_TyperefContext0(void* type, void* ctx)
{
  return AG_ag::AG_clang::AG_TyperefContext::TyperefContext0(type, ctx);
}

extern "C" void*
ag_clang_TyperefContext_TyperefContext1(void* param1)
{
  return AG_ag::AG_clang::AG_TyperefContext::TyperefContext1(param1);
}

extern "C" bool
ag_clang_TyperefContext_isRValueReference0(void* objectHandle)
{
  return AG_ag::AG_clang::AG_TyperefContext::isRValueReference0(objectHandle);
}

extern "C" bool
ag_clang_TyperefContext_isPointer0(void* objectHandle)
{
  return AG_ag::AG_clang::AG_TyperefContext::isPointer0(objectHandle);
}

extern "C" bool
ag_clang_TyperefContext_isConst0(void* objectHandle)
{
  return AG_ag::AG_clang::AG_TyperefContext::isConst0(objectHandle);
}

extern "C" bool
ag_clang_TyperefContext_isTypeTriviallyCopyable0(void* objectHandle)
{
  return AG_ag::AG_clang::AG_TyperefContext::isTypeTriviallyCopyable0(
    objectHandle);
}

extern "C" void*
ag_clang_TyperefContext_getWrittenType0(void* objectHandle)
{
  return AG_ag::AG_clang::AG_TyperefContext::getWrittenType0(objectHandle);
}

extern "C" void*
ag_clang_TyperefContext_getOriginalType0(void* objectHandle)
{
  return AG_ag::AG_clang::AG_TyperefContext::getOriginalType0(objectHandle);
}

extern "C" void
ag_clang_TyperefContext_Destructor0(void* objectHandle)
{
  AG_ag::AG_clang::AG_TyperefContext::Destructor0(objectHandle);
}

// ---------- Class ag::clang::FunctionContext :  ----------

extern "C" void*
ag_clang_FunctionContext_FunctionContext0(void* decl)
{
  return AG_ag::AG_clang::AG_FunctionContext::FunctionContext0(decl);
}

extern "C" void*
ag_clang_FunctionContext_FunctionContext1(void* param1)
{
  return AG_ag::AG_clang::AG_FunctionContext::FunctionContext1(param1);
}

extern "C" void*
ag_clang_FunctionContext_getSelfType0(void* objectHandle)
{
  return AG_ag::AG_clang::AG_FunctionContext::getSelfType0(objectHandle);
}

extern "C" void*
ag_clang_FunctionContext_getOriginalName0(void* objectHandle)
{
  return AG_ag::AG_clang::AG_FunctionContext::getOriginalName0(objectHandle);
}

extern "C" void
ag_clang_FunctionContext_Destructor0(void* objectHandle)
{
  AG_ag::AG_clang::AG_FunctionContext::Destructor0(objectHandle);
}

// ---------- Class ag::clang::OverloadContext :  ----------

extern "C" void*
ag_clang_OverloadContext_OverloadContext0(void* decl, void* privateOverrides)
{
  return AG_ag::AG_clang::AG_OverloadContext::OverloadContext0(
    decl, privateOverrides);
}

extern "C" void*
ag_clang_OverloadContext_OverloadContext1(void* param1)
{
  return AG_ag::AG_clang::AG_OverloadContext::OverloadContext1(param1);
}

extern "C" void*
ag_clang_OverloadContext_getEastQualifiers0(void* objectHandle)
{
  return AG_ag::AG_clang::AG_OverloadContext::getEastQualifiers0(objectHandle);
}

extern "C" bool
ag_clang_OverloadContext_isPrivateOverride0(void* objectHandle)
{
  return AG_ag::AG_clang::AG_OverloadContext::isPrivateOverride0(objectHandle);
}

extern "C" void*
ag_clang_OverloadContext_getOverriddenInterface0(void* objectHandle)
{
  return AG_ag::AG_clang::AG_OverloadContext::getOverriddenInterface0(
    objectHandle);
}

extern "C" void
ag_clang_OverloadContext_Destructor0(void* objectHandle)
{
  AG_ag::AG_clang::AG_OverloadContext::Destructor0(objectHandle);
}

// ---------- Class ag::clang::GlueGenerator :  ----------

extern "C" void
ag_clang_GlueGenerator_AG_initializeInterceptionContext(
  void* objectHandle,
  void* AG_foreignObject,
  void (*AG_intercept_generateEnum0)(void* objectHandle, void* entity),
  void (*AG_intercept_generateEnumEntry0)(void* objectHandle, void* entity),
  void (*AG_intercept_generateTypeAlias0)(void* objectHandle, void* entity),
  bool (*AG_intercept_generateBaseType0)(void* objectHandle,
                                         void* entity,
                                         int index),
  void (*AG_intercept_initializeGenerationContext0)(void* objectHandle,
                                                    void* entity))
{
  auto* obj = static_cast<AG_ag::AG_clang::AG_GlueGenerator*>(objectHandle);
  obj->AG_foreignObject = AG_foreignObject;
  obj->AG_intercept_generateEnum0 = AG_intercept_generateEnum0;
  obj->AG_intercept_generateEnumEntry0 = AG_intercept_generateEnumEntry0;
  obj->AG_intercept_generateTypeAlias0 = AG_intercept_generateTypeAlias0;
  obj->AG_intercept_generateBaseType0 = AG_intercept_generateBaseType0;
  obj->AG_intercept_initializeGenerationContext0 =
    AG_intercept_initializeGenerationContext0;
}
extern "C" void*
ag_clang_GlueGenerator_GlueGenerator0(void* backend)
{
  return AG_ag::AG_clang::AG_GlueGenerator::GlueGenerator0(backend);
}

extern "C" void*
ag_clang_GlueGenerator_GlueGenerator1(void* param1)
{
  return AG_ag::AG_clang::AG_GlueGenerator::GlueGenerator1(param1);
}

extern "C" void
ag_clang_GlueGenerator_generateTypeReference0(void* objectHandle, void* entity)
{
  AG_ag::AG_BindingGenerator::AG_virtual_generateTypeReference0(objectHandle,
                                                                entity);
}

extern "C" void
ag_clang_GlueGenerator_generateFunction0(void* objectHandle, void* entity)
{
  AG_ag::AG_BindingGenerator::AG_virtual_generateFunction0(objectHandle,
                                                           entity);
}

extern "C" void
ag_clang_GlueGenerator_generateNamedScope0(void* objectHandle, void* entity)
{
  AG_ag::AG_BindingGenerator::AG_virtual_generateNamedScope0(objectHandle,
                                                             entity);
}

extern "C" void
ag_clang_GlueGenerator_generateClass0(void* objectHandle, void* entity)
{
  AG_ag::AG_BindingGenerator::AG_virtual_generateClass0(objectHandle, entity);
}

extern "C" void
ag_clang_GlueGenerator_generateArgumentSeparator0(void* objectHandle)
{
  AG_ag::AG_BindingGenerator::AG_virtual_generateArgumentSeparator0(
    objectHandle);
}

extern "C" void*
ag_clang_GlueGenerator_getObjectHandleName0(void* objectHandle)
{
  return AG_ag::AG_BindingGenerator::AG_virtual_getObjectHandleName0(
    objectHandle);
}

extern "C" bool
ag_clang_GlueGenerator_generateReturnStatement0(void* objectHandle,
                                                void* entity,
                                                void* target)
{
  return AG_ag::AG_BindingGenerator::AG_virtual_generateReturnStatement0(
    objectHandle, entity, target);
}

extern "C" void
ag_clang_GlueGenerator_generateBridgeCall0(void* objectHandle, void* target)
{
  AG_ag::AG_BindingGenerator::AG_virtual_generateBridgeCall0(objectHandle,
                                                             target);
}

extern "C" void
ag_clang_GlueGenerator_generateInterceptionFunction0(void* objectHandle,
                                                     void* target,
                                                     void* parentClass)
{
  AG_ag::AG_BindingGenerator::AG_virtual_generateInterceptionFunction0(
    objectHandle, target, parentClass);
}

extern "C" void
ag_clang_GlueGenerator_generateInterceptionContext0(void* objectHandle,
                                                    void* entity)
{
  AG_ag::AG_BindingGenerator::AG_virtual_generateInterceptionContext0(
    objectHandle, entity);
}

extern "C" void
ag_clang_GlueGenerator_Destructor0(void* objectHandle)
{
  AG_ag::AG_clang::AG_GlueGenerator::Destructor0(objectHandle);
}

// ---------- Class ag::clang::GlueGenerator::ConcreteType :  ----------

extern "C" void
ag_clang_GlueGenerator_ConcreteType_generateEnum0(void* objectHandle,
                                                  void* entity)
{
  AG_ag::AG_BindingGenerator::AG_virtual_generateEnum0(objectHandle, entity);
}

extern "C" void
ag_clang_GlueGenerator_ConcreteType_generateEnumEntry0(void* objectHandle,
                                                       void* entity)
{
  AG_ag::AG_BindingGenerator::AG_virtual_generateEnumEntry0(objectHandle,
                                                            entity);
}

extern "C" void
ag_clang_GlueGenerator_ConcreteType_generateTypeAlias0(void* objectHandle,
                                                       void* entity)
{
  AG_ag::AG_BindingGenerator::AG_virtual_generateTypeAlias0(objectHandle,
                                                            entity);
}

extern "C" bool
ag_clang_GlueGenerator_ConcreteType_generateBaseType0(void* objectHandle,
                                                      void* entity,
                                                      int index)
{
  return AG_ag::AG_BindingGenerator::AG_virtual_generateBaseType0(
    objectHandle, entity, index);
}

extern "C" void
ag_clang_GlueGenerator_ConcreteType_initializeGenerationContext0(
  void* objectHandle,
  void* entity)
{
  AG_ag::AG_BindingGenerator::AG_virtual_initializeGenerationContext0(
    objectHandle, entity);
}

// ---------- Class ag::clang::Backend :  ----------

extern "C" void
ag_clang_Backend_AG_initializeInterceptionContext(void* objectHandle,
                                                  void* AG_foreignObject)
{
  auto* obj = static_cast<AG_ag::AG_clang::AG_Backend*>(objectHandle);
  obj->AG_foreignObject = AG_foreignObject;
}
extern "C" void*
ag_clang_Backend_Backend0(void* compilationDatabasePath)
{
  return AG_ag::AG_clang::AG_Backend::Backend0(compilationDatabasePath);
}

extern "C" void*
ag_clang_Backend_Backend1(void* param1)
{
  return AG_ag::AG_clang::AG_Backend::Backend1(param1);
}

extern "C" bool
ag_clang_Backend_generateHierarchy0(void* objectHandle)
{
  return AG_ag::AG_clang::AG_Backend::generateHierarchy0(objectHandle);
}

extern "C" void*
ag_clang_Backend_getInclusion0(void* objectHandle, void* path)
{
  return AG_ag::AG_clang::AG_Backend::getInclusion0(objectHandle, path);
}

extern "C" void
ag_clang_Backend_generateGlue0(void* objectHandle)
{
  AG_ag::AG_clang::AG_Backend::generateGlue0(objectHandle);
}

extern "C" void
ag_clang_Backend_Destructor0(void* objectHandle)
{
  AG_ag::AG_clang::AG_Backend::Destructor0(objectHandle);
}

// ---------- Class ag::EntityContext :  ----------

extern "C" void*
ag_EntityContext_EntityContext0(void* param1)
{
  return AG_ag::AG_EntityContext::EntityContext0(param1);
}

extern "C" void*
ag_EntityContext_EntityContext1()
{
  return AG_ag::AG_EntityContext::EntityContext1();
}

extern "C" void
ag_EntityContext_Destructor0(void* objectHandle)
{
  AG_ag::AG_EntityContext::Destructor0(objectHandle);
}

// ---------- Class ag::FunctionGroupEntity :  ----------

extern "C" void
ag_FunctionGroupEntity_AG_initializeInterceptionContext(
  void* objectHandle,
  void* AG_foreignObject,
  void* (*AG_intercept_getParent0)(void* objectHandle),
  void* (*AG_intercept_resolve0)(void* objectHandle, void* qualifiedName),
  void* (*AG_intercept_getName0)(void* objectHandle),
  void* (*AG_intercept_getHierarchy0)(void* objectHandle, void* delimiter),
  void (*AG_intercept_onList0)(void* objectHandle, void* indent),
  void (*AG_intercept_onInitialize0)(void* objectHandle))
{
  auto* obj = static_cast<AG_ag::AG_FunctionGroupEntity*>(objectHandle);
  obj->AG_foreignObject = AG_foreignObject;
  obj->AG_intercept_getParent0 = AG_intercept_getParent0;
  obj->AG_intercept_resolve0 = AG_intercept_resolve0;
  obj->AG_intercept_getName0 = AG_intercept_getName0;
  obj->AG_intercept_getHierarchy0 = AG_intercept_getHierarchy0;
  obj->AG_intercept_onList0 = AG_intercept_onList0;
  obj->AG_intercept_onInitialize0 = AG_intercept_onInitialize0;
}
extern "C" void*
ag_FunctionGroupEntity_FunctionGroupEntity0(void* name, int type)
{
  return AG_ag::AG_FunctionGroupEntity::FunctionGroupEntity0(name, type);
}

extern "C" bool
ag_FunctionGroupEntity_addOverload0(void* objectHandle, void* overload)
{
  return AG_ag::AG_FunctionGroupEntity::addOverload0(objectHandle, overload);
}

extern "C" const char*
ag_FunctionGroupEntity_getTypeString0(void* objectHandle)
{
  return AG_ag::AG_FunctionGroupEntity::getTypeString0(objectHandle);
}

extern "C" void*
ag_FunctionGroupEntity_findMatchingParameters0(void* objectHandle, void* entity)
{
  return AG_ag::AG_FunctionGroupEntity::findMatchingParameters0(objectHandle,
                                                                entity);
}

extern "C" int
ag_FunctionGroupEntity_getOverloadCount0(void* objectHandle)
{
  return AG_ag::AG_FunctionGroupEntity::getOverloadCount0(objectHandle);
}

extern "C" void*
ag_FunctionGroupEntity_getOverload0(void* objectHandle, int index)
{
  return AG_ag::AG_FunctionGroupEntity::getOverload0(objectHandle, index);
}

extern "C" int
ag_FunctionGroupEntity_getType0(void* objectHandle)
{
  return AG_ag::AG_FunctionGroupEntity::getType0(objectHandle);
}

extern "C" bool
ag_FunctionGroupEntity_hasOverridable0(void* objectHandle)
{
  return AG_ag::AG_FunctionGroupEntity::hasOverridable0(objectHandle);
}

extern "C" bool
ag_FunctionGroupEntity_hasName0(void* objectHandle, void* str)
{
  return AG_ag::AG_Entity::AG_virtual_hasName0(objectHandle, str);
}

extern "C" void
ag_FunctionGroupEntity_onGenerate0(void* objectHandle, void* generator)
{
  AG_ag::AG_Entity::AG_virtual_onGenerate0(objectHandle, generator);
}

extern "C" void
ag_FunctionGroupEntity_onFirstUse0(void* objectHandle)
{
  AG_ag::AG_Entity::AG_virtual_onFirstUse0(objectHandle);
}

extern "C" void
ag_FunctionGroupEntity_Destructor0(void* objectHandle)
{
  AG_ag::AG_FunctionGroupEntity::Destructor0(objectHandle);
}

// ---------- Class ag::FunctionGroupEntity::ConcreteType :  ----------

extern "C" void*
ag_FunctionGroupEntity_ConcreteType_getParent0(void* objectHandle)
{
  return AG_ag::AG_Entity::AG_virtual_getParent0(objectHandle);
}

extern "C" void*
ag_FunctionGroupEntity_ConcreteType_resolve0(void* objectHandle,
                                             void* qualifiedName)
{
  return AG_ag::AG_Entity::AG_virtual_resolve0(objectHandle, qualifiedName);
}

extern "C" void*
ag_FunctionGroupEntity_ConcreteType_getName0(void* objectHandle)
{
  return AG_ag::AG_Entity::AG_virtual_getName0(objectHandle);
}

extern "C" void*
ag_FunctionGroupEntity_ConcreteType_getHierarchy0(void* objectHandle,
                                                  void* delimiter)
{
  return AG_ag::AG_Entity::AG_virtual_getHierarchy0(objectHandle, delimiter);
}

extern "C" void
ag_FunctionGroupEntity_ConcreteType_onList0(void* objectHandle, void* indent)
{
  AG_ag::AG_Entity::AG_virtual_onList0(objectHandle, indent);
}

extern "C" void
ag_FunctionGroupEntity_ConcreteType_onInitialize0(void* objectHandle)
{
  AG_ag::AG_Entity::AG_virtual_onInitialize0(objectHandle);
}

// ---------- Class ag::Entity :  ----------

extern "C" void
ag_Entity_AG_initializeInterceptionContext(
  void* objectHandle,
  void* AG_foreignObject,
  void* (*AG_intercept_getParent0)(void* objectHandle),
  void* (*AG_intercept_resolve0)(void* objectHandle, void* qualifiedName),
  void* (*AG_intercept_getName0)(void* objectHandle),
  void* (*AG_intercept_getHierarchy0)(void* objectHandle, void* delimiter),
  const char* (*AG_intercept_getTypeString0)(void* objectHandle),
  void (*AG_intercept_onList0)(void* objectHandle, void* indent),
  bool (*AG_intercept_hasName0)(void* objectHandle, void* str),
  void (*AG_intercept_onInitialize0)(void* objectHandle),
  void (*AG_intercept_onGenerate0)(void* objectHandle, void* generator),
  void (*AG_intercept_onFirstUse0)(void* objectHandle))
{
  auto* obj = static_cast<AG_ag::AG_Entity*>(objectHandle);
  obj->AG_foreignObject = AG_foreignObject;
  obj->AG_intercept_getParent0 = AG_intercept_getParent0;
  obj->AG_intercept_resolve0 = AG_intercept_resolve0;
  obj->AG_intercept_getName0 = AG_intercept_getName0;
  obj->AG_intercept_getHierarchy0 = AG_intercept_getHierarchy0;
  obj->AG_intercept_getTypeString0 = AG_intercept_getTypeString0;
  obj->AG_intercept_onList0 = AG_intercept_onList0;
  obj->AG_intercept_hasName0 = AG_intercept_hasName0;
  obj->AG_intercept_onInitialize0 = AG_intercept_onInitialize0;
  obj->AG_intercept_onGenerate0 = AG_intercept_onGenerate0;
  obj->AG_intercept_onFirstUse0 = AG_intercept_onFirstUse0;
}
extern "C" void*
ag_Entity_Entity0(int type, void* name)
{
  return AG_ag::AG_Entity::Entity0(type, name);
}

extern "C" void*
ag_Entity_Entity1(void* param1)
{
  return AG_ag::AG_Entity::Entity1(param1);
}

extern "C" void
ag_Entity_addChild0(void* objectHandle, void* child)
{
  AG_ag::AG_Entity::addChild0(objectHandle, child);
}

extern "C" bool
ag_Entity_isRoot0(void* objectHandle)
{
  return AG_ag::AG_Entity::isRoot0(objectHandle);
}

extern "C" void*
ag_Entity_getParent0(void* objectHandle)
{
  return AG_ag::AG_Entity::getParent0(objectHandle);
}

extern "C" void
ag_Entity_initializeContext0(void* objectHandle, void* ctx)
{
  AG_ag::AG_Entity::initializeContext0(objectHandle, ctx);
}

extern "C" void*
ag_Entity_getContext0(void* objectHandle)
{
  return AG_ag::AG_Entity::getContext0(objectHandle);
}

extern "C" void*
ag_Entity_resolve0(void* objectHandle, void* qualifiedName)
{
  return AG_ag::AG_Entity::resolve0(objectHandle, qualifiedName);
}

extern "C" void*
ag_Entity_getName0(void* objectHandle)
{
  return AG_ag::AG_Entity::getName0(objectHandle);
}

extern "C" void*
ag_Entity_getHierarchy0(void* objectHandle, void* delimiter)
{
  return AG_ag::AG_Entity::getHierarchy0(objectHandle, delimiter);
}

extern "C" void
ag_Entity_generate0(void* objectHandle, void* generator)
{
  AG_ag::AG_Entity::generate0(objectHandle, generator);
}

extern "C" void
ag_Entity_resetGenerationState0(void* objectHandle,
                                void* generator,
                                bool resetEntityContext)
{
  AG_ag::AG_Entity::resetGenerationState0(
    objectHandle, generator, resetEntityContext);
}

extern "C" void
ag_Entity_initializeGenerationContext0(void* objectHandle, void* generator)
{
  AG_ag::AG_Entity::initializeGenerationContext0(objectHandle, generator);
}

extern "C" bool
ag_Entity_isGenerated0(void* objectHandle)
{
  return AG_ag::AG_Entity::isGenerated0(objectHandle);
}

extern "C" void
ag_Entity_use0(void* objectHandle)
{
  AG_ag::AG_Entity::use0(objectHandle);
}

extern "C" void
ag_Entity_useAll0(void* objectHandle)
{
  AG_ag::AG_Entity::useAll0(objectHandle);
}

extern "C" int
ag_Entity_getType0(void* objectHandle)
{
  return AG_ag::AG_Entity::getType0(objectHandle);
}

extern "C" int
ag_Entity_getUsages0(void* objectHandle)
{
  return AG_ag::AG_Entity::getUsages0(objectHandle);
}

extern "C" void
ag_Entity_disableNewUsages0(void* objectHandle)
{
  AG_ag::AG_Entity::disableNewUsages0(objectHandle);
}

extern "C" void
ag_Entity_list0(void* objectHandle, int depth)
{
  AG_ag::AG_Entity::list0(objectHandle, depth);
}

extern "C" void
ag_Entity_onList0(void* objectHandle, void* indent)
{
  AG_ag::AG_Entity::onList0(objectHandle, indent);
}

extern "C" bool
ag_Entity_hasName0(void* objectHandle, void* str)
{
  return AG_ag::AG_Entity::hasName0(objectHandle, str);
}

extern "C" void
ag_Entity_onInitialize0(void* objectHandle)
{
  AG_ag::AG_Entity::onInitialize0(objectHandle);
}

extern "C" void
ag_Entity_onFirstUse0(void* objectHandle)
{
  AG_ag::AG_Entity::onFirstUse0(objectHandle);
}

extern "C" void
ag_Entity_resetUsages0(void* objectHandle)
{
  AG_ag::AG_Entity::resetUsages0(objectHandle);
}

extern "C" void
ag_Entity_adoptEntity0(void* objectHandle, void* entity)
{
  AG_ag::AG_Entity::adoptEntity0(objectHandle, entity);
}

extern "C" void
ag_Entity_Destructor0(void* objectHandle)
{
  AG_ag::AG_Entity::Destructor0(objectHandle);
}

// ---------- Class ag::Entity::ConcreteType :  ----------

extern "C" void*
ag_Entity_ConcreteType_getParent0(void* objectHandle)
{
  return AG_ag::AG_Entity::AG_virtual_getParent0(objectHandle);
}

extern "C" void*
ag_Entity_ConcreteType_resolve0(void* objectHandle, void* qualifiedName)
{
  return AG_ag::AG_Entity::AG_virtual_resolve0(objectHandle, qualifiedName);
}

extern "C" void*
ag_Entity_ConcreteType_getName0(void* objectHandle)
{
  return AG_ag::AG_Entity::AG_virtual_getName0(objectHandle);
}

extern "C" void*
ag_Entity_ConcreteType_getHierarchy0(void* objectHandle, void* delimiter)
{
  return AG_ag::AG_Entity::AG_virtual_getHierarchy0(objectHandle, delimiter);
}

extern "C" const char*
ag_Entity_ConcreteType_getTypeString0(void* objectHandle)
{
  return AG_ag::AG_Entity::AG_virtual_getTypeString0(objectHandle);
}

extern "C" void
ag_Entity_ConcreteType_onList0(void* objectHandle, void* indent)
{
  AG_ag::AG_Entity::AG_virtual_onList0(objectHandle, indent);
}

extern "C" bool
ag_Entity_ConcreteType_hasName0(void* objectHandle, void* str)
{
  return AG_ag::AG_Entity::AG_virtual_hasName0(objectHandle, str);
}

extern "C" void
ag_Entity_ConcreteType_onInitialize0(void* objectHandle)
{
  AG_ag::AG_Entity::AG_virtual_onInitialize0(objectHandle);
}

extern "C" void
ag_Entity_ConcreteType_onGenerate0(void* objectHandle, void* generator)
{
  AG_ag::AG_Entity::AG_virtual_onGenerate0(objectHandle, generator);
}

extern "C" void
ag_Entity_ConcreteType_onFirstUse0(void* objectHandle)
{
  AG_ag::AG_Entity::AG_virtual_onFirstUse0(objectHandle);
}

// ---------- Class ag::BindingGenerator :  ----------

extern "C" void
ag_BindingGenerator_AG_initializeInterceptionContext(
  void* objectHandle,
  void* AG_foreignObject,
  void (*AG_intercept_generateClass0)(void* objectHandle, void* entity),
  void (*AG_intercept_generateEnum0)(void* objectHandle, void* entity),
  void (*AG_intercept_generateEnumEntry0)(void* objectHandle, void* entity),
  void (*AG_intercept_generateFunction0)(void* objectHandle, void* entity),
  void (*AG_intercept_generateTypeReference0)(void* objectHandle, void* entity),
  void (*AG_intercept_generateTypeAlias0)(void* objectHandle, void* entity),
  bool (*AG_intercept_generateBaseType0)(void* objectHandle,
                                         void* entity,
                                         int index),
  void (*AG_intercept_generateNamedScope0)(void* objectHandle, void* entity),
  void (*AG_intercept_generateArgumentSeparator0)(void* objectHandle),
  bool (*AG_intercept_generateReturnStatement0)(void* objectHandle,
                                                void* entity,
                                                void* target),
  void (*AG_intercept_generateBridgeCall0)(void* objectHandle, void* entity),
  void (*AG_intercept_generateInterceptionFunction0)(void* objectHandle,
                                                     void* entity,
                                                     void* parentClass),
  void (*AG_intercept_generateInterceptionContext0)(void* objectHandle,
                                                    void* entity),
  void* (*AG_intercept_getObjectHandleName0)(void* objectHandle),
  void (*AG_intercept_initializeGenerationContext0)(void* objectHandle,
                                                    void* entity))
{
  auto* obj = static_cast<AG_ag::AG_BindingGenerator*>(objectHandle);
  obj->AG_foreignObject = AG_foreignObject;
  obj->AG_intercept_generateClass0 = AG_intercept_generateClass0;
  obj->AG_intercept_generateEnum0 = AG_intercept_generateEnum0;
  obj->AG_intercept_generateEnumEntry0 = AG_intercept_generateEnumEntry0;
  obj->AG_intercept_generateFunction0 = AG_intercept_generateFunction0;
  obj->AG_intercept_generateTypeReference0 =
    AG_intercept_generateTypeReference0;
  obj->AG_intercept_generateTypeAlias0 = AG_intercept_generateTypeAlias0;
  obj->AG_intercept_generateBaseType0 = AG_intercept_generateBaseType0;
  obj->AG_intercept_generateNamedScope0 = AG_intercept_generateNamedScope0;
  obj->AG_intercept_generateArgumentSeparator0 =
    AG_intercept_generateArgumentSeparator0;
  obj->AG_intercept_generateReturnStatement0 =
    AG_intercept_generateReturnStatement0;
  obj->AG_intercept_generateBridgeCall0 = AG_intercept_generateBridgeCall0;
  obj->AG_intercept_generateInterceptionFunction0 =
    AG_intercept_generateInterceptionFunction0;
  obj->AG_intercept_generateInterceptionContext0 =
    AG_intercept_generateInterceptionContext0;
  obj->AG_intercept_getObjectHandleName0 = AG_intercept_getObjectHandleName0;
  obj->AG_intercept_initializeGenerationContext0 =
    AG_intercept_initializeGenerationContext0;
}
extern "C" void*
ag_BindingGenerator_BindingGenerator0(void* backend)
{
  return AG_ag::AG_BindingGenerator::BindingGenerator0(backend);
}

extern "C" void
ag_BindingGenerator_generateBindings0(void* objectHandle,
                                      bool resetEntityContext)
{
  AG_ag::AG_BindingGenerator::generateBindings0(objectHandle,
                                                resetEntityContext);
}

extern "C" void
ag_BindingGenerator_generateClass0(void* objectHandle, void* entity)
{
  AG_ag::AG_BindingGenerator::generateClass0(objectHandle, entity);
}

extern "C" void
ag_BindingGenerator_generateEnum0(void* objectHandle, void* entity)
{
  AG_ag::AG_BindingGenerator::generateEnum0(objectHandle, entity);
}

extern "C" void
ag_BindingGenerator_generateEnumEntry0(void* objectHandle, void* entity)
{
  AG_ag::AG_BindingGenerator::generateEnumEntry0(objectHandle, entity);
}

extern "C" void
ag_BindingGenerator_generateFunction0(void* objectHandle, void* entity)
{
  AG_ag::AG_BindingGenerator::generateFunction0(objectHandle, entity);
}

extern "C" void
ag_BindingGenerator_generateTypeReference0(void* objectHandle, void* entity)
{
  AG_ag::AG_BindingGenerator::generateTypeReference0(objectHandle, entity);
}

extern "C" void
ag_BindingGenerator_generateTypeAlias0(void* objectHandle, void* entity)
{
  AG_ag::AG_BindingGenerator::generateTypeAlias0(objectHandle, entity);
}

extern "C" bool
ag_BindingGenerator_generateBaseType0(void* objectHandle,
                                      void* entity,
                                      int index)
{
  return AG_ag::AG_BindingGenerator::generateBaseType0(
    objectHandle, entity, index);
}

extern "C" void
ag_BindingGenerator_generateNamedScope0(void* objectHandle, void* entity)
{
  AG_ag::AG_BindingGenerator::generateNamedScope0(objectHandle, entity);
}

extern "C" void
ag_BindingGenerator_generateArgumentSeparator0(void* objectHandle)
{
  AG_ag::AG_BindingGenerator::generateArgumentSeparator0(objectHandle);
}

extern "C" bool
ag_BindingGenerator_generateReturnStatement0(void* objectHandle,
                                             void* entity,
                                             void* target)
{
  return AG_ag::AG_BindingGenerator::generateReturnStatement0(
    objectHandle, entity, target);
}

extern "C" void
ag_BindingGenerator_generateBridgeCall0(void* objectHandle, void* entity)
{
  AG_ag::AG_BindingGenerator::generateBridgeCall0(objectHandle, entity);
}

extern "C" void
ag_BindingGenerator_generateInterceptionFunction0(void* objectHandle,
                                                  void* entity,
                                                  void* parentClass)
{
  AG_ag::AG_BindingGenerator::generateInterceptionFunction0(
    objectHandle, entity, parentClass);
}

extern "C" void
ag_BindingGenerator_generateInterceptionContext0(void* objectHandle,
                                                 void* entity)
{
  AG_ag::AG_BindingGenerator::generateInterceptionContext0(objectHandle,
                                                           entity);
}

extern "C" void
ag_BindingGenerator_changeClassDepth0(void* objectHandle, int amount)
{
  AG_ag::AG_BindingGenerator::changeClassDepth0(objectHandle, amount);
}

extern "C" void*
ag_BindingGenerator_getObjectHandleName0(void* objectHandle)
{
  return AG_ag::AG_BindingGenerator::getObjectHandleName0(objectHandle);
}

extern "C" void
ag_BindingGenerator_initializeGenerationContext0(void* objectHandle,
                                                 void* entity)
{
  AG_ag::AG_BindingGenerator::initializeGenerationContext0(objectHandle,
                                                           entity);
}

extern "C" int
ag_BindingGenerator_getClassDepth0(void* objectHandle)
{
  return AG_ag::AG_BindingGenerator::getClassDepth0(objectHandle);
}

extern "C" void
ag_BindingGenerator_Destructor0(void* objectHandle)
{
  AG_ag::AG_BindingGenerator::Destructor0(objectHandle);
}

// ---------- Class ag::BindingGenerator::ConcreteType :  ----------

extern "C" void
ag_BindingGenerator_ConcreteType_generateClass0(void* objectHandle,
                                                void* entity)
{
  AG_ag::AG_BindingGenerator::AG_virtual_generateClass0(objectHandle, entity);
}

extern "C" void
ag_BindingGenerator_ConcreteType_generateEnum0(void* objectHandle, void* entity)
{
  AG_ag::AG_BindingGenerator::AG_virtual_generateEnum0(objectHandle, entity);
}

extern "C" void
ag_BindingGenerator_ConcreteType_generateEnumEntry0(void* objectHandle,
                                                    void* entity)
{
  AG_ag::AG_BindingGenerator::AG_virtual_generateEnumEntry0(objectHandle,
                                                            entity);
}

extern "C" void
ag_BindingGenerator_ConcreteType_generateFunction0(void* objectHandle,
                                                   void* entity)
{
  AG_ag::AG_BindingGenerator::AG_virtual_generateFunction0(objectHandle,
                                                           entity);
}

extern "C" void
ag_BindingGenerator_ConcreteType_generateTypeReference0(void* objectHandle,
                                                        void* entity)
{
  AG_ag::AG_BindingGenerator::AG_virtual_generateTypeReference0(objectHandle,
                                                                entity);
}

extern "C" void
ag_BindingGenerator_ConcreteType_generateTypeAlias0(void* objectHandle,
                                                    void* entity)
{
  AG_ag::AG_BindingGenerator::AG_virtual_generateTypeAlias0(objectHandle,
                                                            entity);
}

extern "C" bool
ag_BindingGenerator_ConcreteType_generateBaseType0(void* objectHandle,
                                                   void* entity,
                                                   int index)
{
  return AG_ag::AG_BindingGenerator::AG_virtual_generateBaseType0(
    objectHandle, entity, index);
}

extern "C" void
ag_BindingGenerator_ConcreteType_generateNamedScope0(void* objectHandle,
                                                     void* entity)
{
  AG_ag::AG_BindingGenerator::AG_virtual_generateNamedScope0(objectHandle,
                                                             entity);
}

extern "C" void
ag_BindingGenerator_ConcreteType_generateArgumentSeparator0(void* objectHandle)
{
  AG_ag::AG_BindingGenerator::AG_virtual_generateArgumentSeparator0(
    objectHandle);
}

extern "C" bool
ag_BindingGenerator_ConcreteType_generateReturnStatement0(void* objectHandle,
                                                          void* entity,
                                                          void* target)
{
  return AG_ag::AG_BindingGenerator::AG_virtual_generateReturnStatement0(
    objectHandle, entity, target);
}

extern "C" void
ag_BindingGenerator_ConcreteType_generateBridgeCall0(void* objectHandle,
                                                     void* entity)
{
  AG_ag::AG_BindingGenerator::AG_virtual_generateBridgeCall0(objectHandle,
                                                             entity);
}

extern "C" void
ag_BindingGenerator_ConcreteType_generateInterceptionFunction0(
  void* objectHandle,
  void* entity,
  void* parentClass)
{
  AG_ag::AG_BindingGenerator::AG_virtual_generateInterceptionFunction0(
    objectHandle, entity, parentClass);
}

extern "C" void
ag_BindingGenerator_ConcreteType_generateInterceptionContext0(
  void* objectHandle,
  void* entity)
{
  AG_ag::AG_BindingGenerator::AG_virtual_generateInterceptionContext0(
    objectHandle, entity);
}

extern "C" void*
ag_BindingGenerator_ConcreteType_getObjectHandleName0(void* objectHandle)
{
  return AG_ag::AG_BindingGenerator::AG_virtual_getObjectHandleName0(
    objectHandle);
}

extern "C" void
ag_BindingGenerator_ConcreteType_initializeGenerationContext0(
  void* objectHandle,
  void* entity)
{
  AG_ag::AG_BindingGenerator::AG_virtual_initializeGenerationContext0(
    objectHandle, entity);
}

// ---------- Class ag::FunctionEntity :  ----------

extern "C" void
ag_FunctionEntity_AG_initializeInterceptionContext(
  void* objectHandle,
  void* AG_foreignObject,
  void* (*AG_intercept_resolve0)(void* objectHandle, void* qualifiedName),
  void (*AG_intercept_onList0)(void* objectHandle, void* indent),
  bool (*AG_intercept_hasName0)(void* objectHandle, void* str),
  void (*AG_intercept_onInitialize0)(void* objectHandle))
{
  auto* obj = static_cast<AG_ag::AG_FunctionEntity*>(objectHandle);
  obj->AG_foreignObject = AG_foreignObject;
  obj->AG_intercept_resolve0 = AG_intercept_resolve0;
  obj->AG_intercept_onList0 = AG_intercept_onList0;
  obj->AG_intercept_hasName0 = AG_intercept_hasName0;
  obj->AG_intercept_onInitialize0 = AG_intercept_onInitialize0;
}
extern "C" void*
ag_FunctionEntity_FunctionEntity0(void* returnType,
                                  bool overridable,
                                  bool overrides,
                                  bool interface,
                                  bool staticFunction)
{
  return AG_ag::AG_FunctionEntity::FunctionEntity0(
    returnType, overridable, overrides, interface, staticFunction);
}

extern "C" void*
ag_FunctionEntity_FunctionEntity1(void* param1)
{
  return AG_ag::AG_FunctionEntity::FunctionEntity1(param1);
}

extern "C" void
ag_FunctionEntity_addParameter0(void* objectHandle, void* param)
{
  AG_ag::AG_FunctionEntity::addParameter0(objectHandle, param);
}

extern "C" void*
ag_FunctionEntity_getParent0(void* objectHandle)
{
  return AG_ag::AG_FunctionEntity::getParent0(objectHandle);
}

extern "C" void*
ag_FunctionEntity_getName0(void* objectHandle)
{
  return AG_ag::AG_FunctionEntity::getName0(objectHandle);
}

extern "C" void*
ag_FunctionEntity_getGroup0(void* objectHandle)
{
  return AG_ag::AG_FunctionEntity::getGroup0(objectHandle);
}

extern "C" void*
ag_FunctionEntity_getHierarchy0(void* objectHandle, void* delimiter)
{
  return AG_ag::AG_FunctionEntity::getHierarchy0(objectHandle, delimiter);
}

extern "C" void
ag_FunctionEntity_generateReturnType0(void* objectHandle,
                                      void* generator,
                                      bool asPOD)
{
  AG_ag::AG_FunctionEntity::generateReturnType0(objectHandle, generator, asPOD);
}

extern "C" bool
ag_FunctionEntity_generateReturnStatement0(void* objectHandle,
                                           void* generator,
                                           bool asPOD)
{
  return AG_ag::AG_FunctionEntity::generateReturnStatement0(
    objectHandle, generator, asPOD);
}

extern "C" void
ag_FunctionEntity_generateBridgeCall0(void* objectHandle, void* generator)
{
  AG_ag::AG_FunctionEntity::generateBridgeCall0(objectHandle, generator);
}

extern "C" void
ag_FunctionEntity_generateParameters0(void* objectHandle,
                                      void* generator,
                                      bool asPOD,
                                      bool includeSelf)
{
  AG_ag::AG_FunctionEntity::generateParameters0(
    objectHandle, generator, asPOD, includeSelf);
}

extern "C" int
ag_FunctionEntity_getParameterCount0(void* objectHandle, bool includeSelf)
{
  return AG_ag::AG_FunctionEntity::getParameterCount0(objectHandle,
                                                      includeSelf);
}

extern "C" void*
ag_FunctionEntity_getParameter0(void* objectHandle, int index)
{
  return AG_ag::AG_FunctionEntity::getParameter0(objectHandle, index);
}

extern "C" int
ag_FunctionEntity_getType0(void* objectHandle)
{
  return AG_ag::AG_FunctionEntity::getType0(objectHandle);
}

extern "C" bool
ag_FunctionEntity_needsThisHandle0(void* objectHandle)
{
  return AG_ag::AG_FunctionEntity::needsThisHandle0(objectHandle);
}

extern "C" bool
ag_FunctionEntity_returnsValue0(void* objectHandle)
{
  return AG_ag::AG_FunctionEntity::returnsValue0(objectHandle);
}

extern "C" bool
ag_FunctionEntity_isOverridable0(void* objectHandle)
{
  return AG_ag::AG_FunctionEntity::isOverridable0(objectHandle);
}

extern "C" bool
ag_FunctionEntity_isOverride0(void* objectHandle)
{
  return AG_ag::AG_FunctionEntity::isOverride0(objectHandle);
}

extern "C" bool
ag_FunctionEntity_isInterface0(void* objectHandle)
{
  return AG_ag::AG_FunctionEntity::isInterface0(objectHandle);
}

extern "C" void*
ag_FunctionEntity_getReturnType0(void* objectHandle, bool asPOD)
{
  return AG_ag::AG_FunctionEntity::getReturnType0(objectHandle, asPOD);
}

extern "C" void*
ag_FunctionEntity_getBridgeName0(void* objectHandle, bool shortened)
{
  return AG_ag::AG_FunctionEntity::getBridgeName0(objectHandle, shortened);
}

extern "C" bool
ag_FunctionEntity_isClassMemberFunction0(void* objectHandle)
{
  return AG_ag::AG_FunctionEntity::isClassMemberFunction0(objectHandle);
}

extern "C" void
ag_FunctionEntity_setOverloadedOperator0(void* objectHandle,
                                         int overloaded,
                                         bool compound)
{
  AG_ag::AG_FunctionEntity::setOverloadedOperator0(
    objectHandle, overloaded, compound);
}

extern "C" int
ag_FunctionEntity_getOverloadedOperator0(void* objectHandle)
{
  return AG_ag::AG_FunctionEntity::getOverloadedOperator0(objectHandle);
}

extern "C" bool
ag_FunctionEntity_overloadsCompoundOperator0(void* objectHandle)
{
  return AG_ag::AG_FunctionEntity::overloadsCompoundOperator0(objectHandle);
}

extern "C" void
ag_FunctionEntity_setOverloadIndex0(void* objectHandle, int index)
{
  AG_ag::AG_FunctionEntity::setOverloadIndex0(objectHandle, index);
}

extern "C" void*
ag_FunctionEntity_createOverride0(void* objectHandle,
                                  bool makeInterface,
                                  bool inConcrete)
{
  return AG_ag::AG_FunctionEntity::createOverride0(
    objectHandle, makeInterface, inConcrete);
}

extern "C" void
ag_FunctionEntity_setProtected0(void* objectHandle)
{
  AG_ag::AG_FunctionEntity::setProtected0(objectHandle);
}

extern "C" bool
ag_FunctionEntity_isProtected0(void* objectHandle)
{
  return AG_ag::AG_FunctionEntity::isProtected0(objectHandle);
}

extern "C" bool
ag_FunctionEntity_shouldPrepareClass0(void* objectHandle)
{
  return AG_ag::AG_FunctionEntity::shouldPrepareClass0(objectHandle);
}

extern "C" void*
ag_FunctionEntity_getOverridden0(void* objectHandle)
{
  return AG_ag::AG_FunctionEntity::getOverridden0(objectHandle);
}

extern "C" bool
ag_FunctionEntity_isConcreteOverride0(void* objectHandle)
{
  return AG_ag::AG_FunctionEntity::isConcreteOverride0(objectHandle);
}

extern "C" bool
ag_FunctionEntity_isStatic0(void* objectHandle)
{
  return AG_ag::AG_FunctionEntity::isStatic0(objectHandle);
}

extern "C" const char*
ag_FunctionEntity_getTypeString0(void* objectHandle)
{
  return AG_ag::AG_FunctionEntity::getTypeString0(objectHandle);
}

extern "C" void
ag_FunctionEntity_onGenerate0(void* objectHandle, void* generator)
{
  AG_ag::AG_Entity::AG_virtual_onGenerate0(objectHandle, generator);
}

extern "C" void
ag_FunctionEntity_onFirstUse0(void* objectHandle)
{
  AG_ag::AG_Entity::AG_virtual_onFirstUse0(objectHandle);
}

extern "C" void
ag_FunctionEntity_Destructor0(void* objectHandle)
{
  AG_ag::AG_FunctionEntity::Destructor0(objectHandle);
}

// ---------- Class ag::FunctionEntity::ConcreteType :  ----------

extern "C" void*
ag_FunctionEntity_ConcreteType_resolve0(void* objectHandle, void* qualifiedName)
{
  return AG_ag::AG_Entity::AG_virtual_resolve0(objectHandle, qualifiedName);
}

extern "C" void
ag_FunctionEntity_ConcreteType_onList0(void* objectHandle, void* indent)
{
  AG_ag::AG_Entity::AG_virtual_onList0(objectHandle, indent);
}

extern "C" bool
ag_FunctionEntity_ConcreteType_hasName0(void* objectHandle, void* str)
{
  return AG_ag::AG_Entity::AG_virtual_hasName0(objectHandle, str);
}

extern "C" void
ag_FunctionEntity_ConcreteType_onInitialize0(void* objectHandle)
{
  AG_ag::AG_Entity::AG_virtual_onInitialize0(objectHandle);
}

// ---------- Class ag::TypeReferenceEntity :  ----------

extern "C" void
ag_TypeReferenceEntity_AG_initializeInterceptionContext(
  void* objectHandle,
  void* AG_foreignObject,
  void* (*AG_intercept_getParent0)(void* objectHandle),
  void* (*AG_intercept_resolve0)(void* objectHandle, void* qualifiedName),
  void* (*AG_intercept_getName0)(void* objectHandle),
  void* (*AG_intercept_getHierarchy0)(void* objectHandle, void* delimiter),
  bool (*AG_intercept_hasName0)(void* objectHandle, void* str),
  void (*AG_intercept_onInitialize0)(void* objectHandle))
{
  auto* obj = static_cast<AG_ag::AG_TypeReferenceEntity*>(objectHandle);
  obj->AG_foreignObject = AG_foreignObject;
  obj->AG_intercept_getParent0 = AG_intercept_getParent0;
  obj->AG_intercept_resolve0 = AG_intercept_resolve0;
  obj->AG_intercept_getName0 = AG_intercept_getName0;
  obj->AG_intercept_getHierarchy0 = AG_intercept_getHierarchy0;
  obj->AG_intercept_hasName0 = AG_intercept_hasName0;
  obj->AG_intercept_onInitialize0 = AG_intercept_onInitialize0;
}
extern "C" void*
ag_TypeReferenceEntity_TypeReferenceEntity0(void* name,
                                            void* type,
                                            bool reference)
{
  return AG_ag::AG_TypeReferenceEntity::TypeReferenceEntity0(
    name, type, reference);
}

extern "C" void*
ag_TypeReferenceEntity_TypeReferenceEntity1(void* param1)
{
  return AG_ag::AG_TypeReferenceEntity::TypeReferenceEntity1(param1);
}

extern "C" bool
ag_TypeReferenceEntity_isIdentical0(void* objectHandle, void* other)
{
  return AG_ag::AG_TypeReferenceEntity::isIdentical0(objectHandle, other);
}

extern "C" int
ag_TypeReferenceEntity_getType0(void* objectHandle)
{
  return AG_ag::AG_TypeReferenceEntity::getType0(objectHandle);
}

extern "C" void*
ag_TypeReferenceEntity_getReferred0(void* objectHandle)
{
  return AG_ag::AG_TypeReferenceEntity::getReferred0(objectHandle);
}

extern "C" void*
ag_TypeReferenceEntity_getReferredPtr0(void* objectHandle)
{
  return AG_ag::AG_TypeReferenceEntity::getReferredPtr0(objectHandle);
}

extern "C" bool
ag_TypeReferenceEntity_isClass0(void* objectHandle)
{
  return AG_ag::AG_TypeReferenceEntity::isClass0(objectHandle);
}

extern "C" void*
ag_TypeReferenceEntity_getClassType0(void* objectHandle)
{
  return AG_ag::AG_TypeReferenceEntity::getClassType0(objectHandle);
}

extern "C" bool
ag_TypeReferenceEntity_isEnum0(void* objectHandle)
{
  return AG_ag::AG_TypeReferenceEntity::isEnum0(objectHandle);
}

extern "C" void*
ag_TypeReferenceEntity_getEnumType0(void* objectHandle)
{
  return AG_ag::AG_TypeReferenceEntity::getEnumType0(objectHandle);
}

extern "C" bool
ag_TypeReferenceEntity_isAlias0(void* objectHandle)
{
  return AG_ag::AG_TypeReferenceEntity::isAlias0(objectHandle);
}

extern "C" void*
ag_TypeReferenceEntity_getAliasType0(void* objectHandle)
{
  return AG_ag::AG_TypeReferenceEntity::getAliasType0(objectHandle);
}

extern "C" bool
ag_TypeReferenceEntity_isPrimitive0(void* objectHandle)
{
  return AG_ag::AG_TypeReferenceEntity::isPrimitive0(objectHandle);
}

extern "C" void*
ag_TypeReferenceEntity_getPrimitiveType0(void* objectHandle)
{
  return AG_ag::AG_TypeReferenceEntity::getPrimitiveType0(objectHandle);
}

extern "C" bool
ag_TypeReferenceEntity_isReference0(void* objectHandle)
{
  return AG_ag::AG_TypeReferenceEntity::isReference0(objectHandle);
}

extern "C" void*
ag_TypeReferenceEntity_getAsPOD0(void* objectHandle)
{
  return AG_ag::AG_TypeReferenceEntity::getAsPOD0(objectHandle);
}

extern "C" const char*
ag_TypeReferenceEntity_getTypeString0(void* objectHandle)
{
  return AG_ag::AG_TypeReferenceEntity::getTypeString0(objectHandle);
}

extern "C" void
ag_TypeReferenceEntity_onGenerate0(void* objectHandle, void* generator)
{
  AG_ag::AG_Entity::AG_virtual_onGenerate0(objectHandle, generator);
}

extern "C" void
ag_TypeReferenceEntity_onFirstUse0(void* objectHandle)
{
  AG_ag::AG_Entity::AG_virtual_onFirstUse0(objectHandle);
}

extern "C" void
ag_TypeReferenceEntity_onList0(void* objectHandle, void* indent)
{
  AG_ag::AG_Entity::AG_virtual_onList0(objectHandle, indent);
}

extern "C" void
ag_TypeReferenceEntity_Destructor0(void* objectHandle)
{
  AG_ag::AG_TypeReferenceEntity::Destructor0(objectHandle);
}

// ---------- Class ag::TypeReferenceEntity::ConcreteType :  ----------

extern "C" void*
ag_TypeReferenceEntity_ConcreteType_getParent0(void* objectHandle)
{
  return AG_ag::AG_Entity::AG_virtual_getParent0(objectHandle);
}

extern "C" void*
ag_TypeReferenceEntity_ConcreteType_resolve0(void* objectHandle,
                                             void* qualifiedName)
{
  return AG_ag::AG_Entity::AG_virtual_resolve0(objectHandle, qualifiedName);
}

extern "C" void*
ag_TypeReferenceEntity_ConcreteType_getName0(void* objectHandle)
{
  return AG_ag::AG_Entity::AG_virtual_getName0(objectHandle);
}

extern "C" void*
ag_TypeReferenceEntity_ConcreteType_getHierarchy0(void* objectHandle,
                                                  void* delimiter)
{
  return AG_ag::AG_Entity::AG_virtual_getHierarchy0(objectHandle, delimiter);
}

extern "C" bool
ag_TypeReferenceEntity_ConcreteType_hasName0(void* objectHandle, void* str)
{
  return AG_ag::AG_Entity::AG_virtual_hasName0(objectHandle, str);
}

extern "C" void
ag_TypeReferenceEntity_ConcreteType_onInitialize0(void* objectHandle)
{
  AG_ag::AG_Entity::AG_virtual_onInitialize0(objectHandle);
}

// ---------- Class ag::Backend :  ----------

extern "C" void
ag_Backend_AG_initializeInterceptionContext(
  void* objectHandle,
  void* AG_foreignObject,
  bool (*AG_intercept_generateHierarchy0)(void* objectHandle),
  void (*AG_intercept_generateGlue0)(void* objectHandle))
{
  auto* obj = static_cast<AG_ag::AG_Backend*>(objectHandle);
  obj->AG_foreignObject = AG_foreignObject;
  obj->AG_intercept_generateHierarchy0 = AG_intercept_generateHierarchy0;
  obj->AG_intercept_generateGlue0 = AG_intercept_generateGlue0;
}
extern "C" void*
ag_Backend_getRootPtr0(void* objectHandle)
{
  return AG_ag::AG_Backend::getRootPtr0(objectHandle);
}

extern "C" void*
ag_Backend_getRoot0(void* objectHandle)
{
  return AG_ag::AG_Backend::getRoot0(objectHandle);
}

extern "C" void
ag_Backend_ensureGlueGenerated0(void* objectHandle)
{
  AG_ag::AG_Backend::ensureGlueGenerated0(objectHandle);
}

extern "C" void*
ag_Backend_Backend0(void* root)
{
  return AG_ag::AG_Backend::Backend0(root);
}

extern "C" void*
ag_Backend_Backend1(void* param1)
{
  return AG_ag::AG_Backend::Backend1(param1);
}

extern "C" void
ag_Backend_Destructor0(void* objectHandle)
{
  AG_ag::AG_Backend::Destructor0(objectHandle);
}

// ---------- Class ag::Backend::ConcreteType :  ----------

extern "C" bool
ag_Backend_ConcreteType_generateHierarchy0(void* objectHandle)
{
  return AG_ag::AG_Backend::AG_virtual_generateHierarchy0(objectHandle);
}

extern "C" void
ag_Backend_ConcreteType_generateGlue0(void* objectHandle)
{
  AG_ag::AG_Backend::AG_virtual_generateGlue0(objectHandle);
}

// ---------- Class ag::ClassEntity :  ----------

extern "C" void
ag_ClassEntity_AG_initializeInterceptionContext(
  void* objectHandle,
  void* AG_foreignObject,
  void* (*AG_intercept_getParent0)(void* objectHandle),
  void* (*AG_intercept_resolve0)(void* objectHandle, void* qualifiedName),
  void* (*AG_intercept_getName0)(void* objectHandle),
  void* (*AG_intercept_getHierarchy0)(void* objectHandle, void* delimiter),
  void (*AG_intercept_onList0)(void* objectHandle, void* indent),
  bool (*AG_intercept_hasName0)(void* objectHandle, void* str))
{
  auto* obj = static_cast<AG_ag::AG_ClassEntity*>(objectHandle);
  obj->AG_foreignObject = AG_foreignObject;
  obj->AG_intercept_getParent0 = AG_intercept_getParent0;
  obj->AG_intercept_resolve0 = AG_intercept_resolve0;
  obj->AG_intercept_getName0 = AG_intercept_getName0;
  obj->AG_intercept_getHierarchy0 = AG_intercept_getHierarchy0;
  obj->AG_intercept_onList0 = AG_intercept_onList0;
  obj->AG_intercept_hasName0 = AG_intercept_hasName0;
}
extern "C" void*
ag_ClassEntity_ClassEntity0(void* name)
{
  return AG_ag::AG_ClassEntity::ClassEntity0(name);
}

extern "C" void*
ag_ClassEntity_ClassEntity1(void* param1)
{
  return AG_ag::AG_ClassEntity::ClassEntity1(param1);
}

extern "C" void
ag_ClassEntity_addNested0(void* objectHandle, void* nested)
{
  AG_ag::AG_ClassEntity::addNested0(objectHandle, nested);
}

extern "C" void
ag_ClassEntity_addBaseType0(void* objectHandle, void* base)
{
  AG_ag::AG_ClassEntity::addBaseType0(objectHandle, base);
}

extern "C" void
ag_ClassEntity_generateBaseTypes0(void* objectHandle, void* generator)
{
  AG_ag::AG_ClassEntity::generateBaseTypes0(objectHandle, generator);
}

extern "C" bool
ag_ClassEntity_hasBaseTypes0(void* objectHandle)
{
  return AG_ag::AG_ClassEntity::hasBaseTypes0(objectHandle);
}

extern "C" int
ag_ClassEntity_getBaseTypeCount0(void* objectHandle)
{
  return AG_ag::AG_ClassEntity::getBaseTypeCount0(objectHandle);
}

extern "C" void*
ag_ClassEntity_getBaseType0(void* objectHandle, int index)
{
  return AG_ag::AG_ClassEntity::getBaseType0(objectHandle, index);
}

extern "C" int
ag_ClassEntity_getDerivedCount0(void* objectHandle)
{
  return AG_ag::AG_ClassEntity::getDerivedCount0(objectHandle);
}

extern "C" void*
ag_ClassEntity_getDerived0(void* objectHandle, int index)
{
  return AG_ag::AG_ClassEntity::getDerived0(objectHandle, index);
}

extern "C" void
ag_ClassEntity_generateNested0(void* objectHandle, void* generator)
{
  AG_ag::AG_ClassEntity::generateNested0(objectHandle, generator);
}

extern "C" bool
ag_ClassEntity_isAbstract0(void* objectHandle)
{
  return AG_ag::AG_ClassEntity::isAbstract0(objectHandle);
}

extern "C" void
ag_ClassEntity_generateConcreteType0(void* objectHandle, void* generator)
{
  AG_ag::AG_ClassEntity::generateConcreteType0(objectHandle, generator);
}

extern "C" void*
ag_ClassEntity_getConcreteType0(void* objectHandle)
{
  return AG_ag::AG_ClassEntity::getConcreteType0(objectHandle);
}

extern "C" bool
ag_ClassEntity_isConcreteType0(void* objectHandle)
{
  return AG_ag::AG_ClassEntity::isConcreteType0(objectHandle);
}

extern "C" void
ag_ClassEntity_generateInterceptionFunctions0(void* objectHandle,
                                              void* generator)
{
  AG_ag::AG_ClassEntity::generateInterceptionFunctions0(objectHandle,
                                                        generator);
}

extern "C" void
ag_ClassEntity_generateInterceptionContext0(void* objectHandle, void* generator)
{
  AG_ag::AG_ClassEntity::generateInterceptionContext0(objectHandle, generator);
}

extern "C" bool
ag_ClassEntity_matchType0(void* entity)
{
  return AG_ag::AG_ClassEntity::matchType0(entity);
}

extern "C" void*
ag_ClassEntity_findOverridableFromBase0(void* objectHandle, void* entity)
{
  return AG_ag::AG_ClassEntity::findOverridableFromBase0(objectHandle, entity);
}

extern "C" const char*
ag_ClassEntity_getTypeString0(void* objectHandle)
{
  return AG_ag::AG_ClassEntity::getTypeString0(objectHandle);
}

extern "C" void
ag_ClassEntity_onGenerate0(void* objectHandle, void* generator)
{
  AG_ag::AG_Entity::AG_virtual_onGenerate0(objectHandle, generator);
}

extern "C" void
ag_ClassEntity_onFirstUse0(void* objectHandle)
{
  AG_ag::AG_Entity::AG_virtual_onFirstUse0(objectHandle);
}

extern "C" void
ag_ClassEntity_onInitialize0(void* objectHandle)
{
  AG_ag::AG_Entity::AG_virtual_onInitialize0(objectHandle);
}

extern "C" void
ag_ClassEntity_Destructor0(void* objectHandle)
{
  AG_ag::AG_ClassEntity::Destructor0(objectHandle);
}

// ---------- Class ag::ClassEntity::ConcreteType :  ----------

extern "C" void*
ag_ClassEntity_ConcreteType_getParent0(void* objectHandle)
{
  return AG_ag::AG_Entity::AG_virtual_getParent0(objectHandle);
}

extern "C" void*
ag_ClassEntity_ConcreteType_resolve0(void* objectHandle, void* qualifiedName)
{
  return AG_ag::AG_Entity::AG_virtual_resolve0(objectHandle, qualifiedName);
}

extern "C" void*
ag_ClassEntity_ConcreteType_getName0(void* objectHandle)
{
  return AG_ag::AG_Entity::AG_virtual_getName0(objectHandle);
}

extern "C" void*
ag_ClassEntity_ConcreteType_getHierarchy0(void* objectHandle, void* delimiter)
{
  return AG_ag::AG_Entity::AG_virtual_getHierarchy0(objectHandle, delimiter);
}

extern "C" void
ag_ClassEntity_ConcreteType_onList0(void* objectHandle, void* indent)
{
  AG_ag::AG_Entity::AG_virtual_onList0(objectHandle, indent);
}

extern "C" bool
ag_ClassEntity_ConcreteType_hasName0(void* objectHandle, void* str)
{
  return AG_ag::AG_Entity::AG_virtual_hasName0(objectHandle, str);
}

// ---------- Class ag::TypeEntity :  ----------

extern "C" void
ag_TypeEntity_AG_initializeInterceptionContext(
  void* objectHandle,
  void* AG_foreignObject,
  void* (*AG_intercept_getParent0)(void* objectHandle),
  void* (*AG_intercept_resolve0)(void* objectHandle, void* qualifiedName),
  void* (*AG_intercept_getName0)(void* objectHandle),
  void* (*AG_intercept_getHierarchy0)(void* objectHandle, void* delimiter),
  const char* (*AG_intercept_getTypeString0)(void* objectHandle),
  void (*AG_intercept_onList0)(void* objectHandle, void* indent),
  bool (*AG_intercept_hasName0)(void* objectHandle, void* str),
  void (*AG_intercept_onInitialize0)(void* objectHandle),
  void (*AG_intercept_onGenerate0)(void* objectHandle, void* generator),
  void (*AG_intercept_onFirstUse0)(void* objectHandle))
{
  auto* obj = static_cast<AG_ag::AG_TypeEntity*>(objectHandle);
  obj->AG_foreignObject = AG_foreignObject;
  obj->AG_intercept_getParent0 = AG_intercept_getParent0;
  obj->AG_intercept_resolve0 = AG_intercept_resolve0;
  obj->AG_intercept_getName0 = AG_intercept_getName0;
  obj->AG_intercept_getHierarchy0 = AG_intercept_getHierarchy0;
  obj->AG_intercept_getTypeString0 = AG_intercept_getTypeString0;
  obj->AG_intercept_onList0 = AG_intercept_onList0;
  obj->AG_intercept_hasName0 = AG_intercept_hasName0;
  obj->AG_intercept_onInitialize0 = AG_intercept_onInitialize0;
  obj->AG_intercept_onGenerate0 = AG_intercept_onGenerate0;
  obj->AG_intercept_onFirstUse0 = AG_intercept_onFirstUse0;
}
extern "C" void*
ag_TypeEntity_TypeEntity0(void* name, int type)
{
  return AG_ag::AG_TypeEntity::TypeEntity0(name, type);
}

extern "C" void*
ag_TypeEntity_TypeEntity1(void* param1)
{
  return AG_ag::AG_TypeEntity::TypeEntity1(param1);
}

extern "C" int
ag_TypeEntity_getType0(void* objectHandle)
{
  return AG_ag::AG_TypeEntity::getType0(objectHandle);
}

extern "C" void
ag_TypeEntity_Destructor0(void* objectHandle)
{
  AG_ag::AG_TypeEntity::Destructor0(objectHandle);
}

// ---------- Class ag::TypeEntity::ConcreteType :  ----------

extern "C" void*
ag_TypeEntity_ConcreteType_getParent0(void* objectHandle)
{
  return AG_ag::AG_Entity::AG_virtual_getParent0(objectHandle);
}

extern "C" void*
ag_TypeEntity_ConcreteType_resolve0(void* objectHandle, void* qualifiedName)
{
  return AG_ag::AG_Entity::AG_virtual_resolve0(objectHandle, qualifiedName);
}

extern "C" void*
ag_TypeEntity_ConcreteType_getName0(void* objectHandle)
{
  return AG_ag::AG_Entity::AG_virtual_getName0(objectHandle);
}

extern "C" void*
ag_TypeEntity_ConcreteType_getHierarchy0(void* objectHandle, void* delimiter)
{
  return AG_ag::AG_Entity::AG_virtual_getHierarchy0(objectHandle, delimiter);
}

extern "C" const char*
ag_TypeEntity_ConcreteType_getTypeString0(void* objectHandle)
{
  return AG_ag::AG_TypeEntity::AG_virtual_getTypeString0(objectHandle);
}

extern "C" void
ag_TypeEntity_ConcreteType_onList0(void* objectHandle, void* indent)
{
  AG_ag::AG_Entity::AG_virtual_onList0(objectHandle, indent);
}

extern "C" bool
ag_TypeEntity_ConcreteType_hasName0(void* objectHandle, void* str)
{
  return AG_ag::AG_Entity::AG_virtual_hasName0(objectHandle, str);
}

extern "C" void
ag_TypeEntity_ConcreteType_onInitialize0(void* objectHandle)
{
  AG_ag::AG_Entity::AG_virtual_onInitialize0(objectHandle);
}

extern "C" void
ag_TypeEntity_ConcreteType_onGenerate0(void* objectHandle, void* generator)
{
  AG_ag::AG_TypeEntity::AG_virtual_onGenerate0(objectHandle, generator);
}

extern "C" void
ag_TypeEntity_ConcreteType_onFirstUse0(void* objectHandle)
{
  AG_ag::AG_Entity::AG_virtual_onFirstUse0(objectHandle);
}

// ---------- Class ag::EnumEntity :  ----------

extern "C" void
ag_EnumEntity_AG_initializeInterceptionContext(
  void* objectHandle,
  void* AG_foreignObject,
  void* (*AG_intercept_getParent0)(void* objectHandle),
  void* (*AG_intercept_resolve0)(void* objectHandle, void* qualifiedName),
  void* (*AG_intercept_getName0)(void* objectHandle),
  void* (*AG_intercept_getHierarchy0)(void* objectHandle, void* delimiter),
  void (*AG_intercept_onList0)(void* objectHandle, void* indent),
  bool (*AG_intercept_hasName0)(void* objectHandle, void* str),
  void (*AG_intercept_onInitialize0)(void* objectHandle))
{
  auto* obj = static_cast<AG_ag::AG_EnumEntity*>(objectHandle);
  obj->AG_foreignObject = AG_foreignObject;
  obj->AG_intercept_getParent0 = AG_intercept_getParent0;
  obj->AG_intercept_resolve0 = AG_intercept_resolve0;
  obj->AG_intercept_getName0 = AG_intercept_getName0;
  obj->AG_intercept_getHierarchy0 = AG_intercept_getHierarchy0;
  obj->AG_intercept_onList0 = AG_intercept_onList0;
  obj->AG_intercept_hasName0 = AG_intercept_hasName0;
  obj->AG_intercept_onInitialize0 = AG_intercept_onInitialize0;
}
extern "C" void*
ag_EnumEntity_EnumEntity0(void* name, int format)
{
  return AG_ag::AG_EnumEntity::EnumEntity0(name, format);
}

extern "C" void
ag_EnumEntity_addEntry0(void* objectHandle, void* entry)
{
  AG_ag::AG_EnumEntity::addEntry0(objectHandle, entry);
}

extern "C" void
ag_EnumEntity_generateValues0(void* objectHandle, void* generator)
{
  AG_ag::AG_EnumEntity::generateValues0(objectHandle, generator);
}

extern "C" int
ag_EnumEntity_getFormat0(void* objectHandle)
{
  return AG_ag::AG_EnumEntity::getFormat0(objectHandle);
}

extern "C" const char*
ag_EnumEntity_getTypeString0(void* objectHandle)
{
  return AG_ag::AG_EnumEntity::getTypeString0(objectHandle);
}

extern "C" void
ag_EnumEntity_onGenerate0(void* objectHandle, void* generator)
{
  AG_ag::AG_Entity::AG_virtual_onGenerate0(objectHandle, generator);
}

extern "C" void
ag_EnumEntity_onFirstUse0(void* objectHandle)
{
  AG_ag::AG_Entity::AG_virtual_onFirstUse0(objectHandle);
}

extern "C" void
ag_EnumEntity_Destructor0(void* objectHandle)
{
  AG_ag::AG_EnumEntity::Destructor0(objectHandle);
}

// ---------- Class ag::EnumEntity::ConcreteType :  ----------

extern "C" void*
ag_EnumEntity_ConcreteType_getParent0(void* objectHandle)
{
  return AG_ag::AG_Entity::AG_virtual_getParent0(objectHandle);
}

extern "C" void*
ag_EnumEntity_ConcreteType_resolve0(void* objectHandle, void* qualifiedName)
{
  return AG_ag::AG_Entity::AG_virtual_resolve0(objectHandle, qualifiedName);
}

extern "C" void*
ag_EnumEntity_ConcreteType_getName0(void* objectHandle)
{
  return AG_ag::AG_Entity::AG_virtual_getName0(objectHandle);
}

extern "C" void*
ag_EnumEntity_ConcreteType_getHierarchy0(void* objectHandle, void* delimiter)
{
  return AG_ag::AG_Entity::AG_virtual_getHierarchy0(objectHandle, delimiter);
}

extern "C" void
ag_EnumEntity_ConcreteType_onList0(void* objectHandle, void* indent)
{
  AG_ag::AG_Entity::AG_virtual_onList0(objectHandle, indent);
}

extern "C" bool
ag_EnumEntity_ConcreteType_hasName0(void* objectHandle, void* str)
{
  return AG_ag::AG_Entity::AG_virtual_hasName0(objectHandle, str);
}

extern "C" void
ag_EnumEntity_ConcreteType_onInitialize0(void* objectHandle)
{
  AG_ag::AG_Entity::AG_virtual_onInitialize0(objectHandle);
}

// ---------- Class ag::EnumEntryEntity :  ----------

extern "C" void
ag_EnumEntryEntity_AG_initializeInterceptionContext(
  void* objectHandle,
  void* AG_foreignObject,
  void* (*AG_intercept_getParent0)(void* objectHandle),
  void* (*AG_intercept_resolve0)(void* objectHandle, void* qualifiedName),
  void* (*AG_intercept_getName0)(void* objectHandle),
  void* (*AG_intercept_getHierarchy0)(void* objectHandle, void* delimiter),
  void (*AG_intercept_onList0)(void* objectHandle, void* indent),
  bool (*AG_intercept_hasName0)(void* objectHandle, void* str),
  void (*AG_intercept_onInitialize0)(void* objectHandle),
  void (*AG_intercept_onFirstUse0)(void* objectHandle))
{
  auto* obj = static_cast<AG_ag::AG_EnumEntryEntity*>(objectHandle);
  obj->AG_foreignObject = AG_foreignObject;
  obj->AG_intercept_getParent0 = AG_intercept_getParent0;
  obj->AG_intercept_resolve0 = AG_intercept_resolve0;
  obj->AG_intercept_getName0 = AG_intercept_getName0;
  obj->AG_intercept_getHierarchy0 = AG_intercept_getHierarchy0;
  obj->AG_intercept_onList0 = AG_intercept_onList0;
  obj->AG_intercept_hasName0 = AG_intercept_hasName0;
  obj->AG_intercept_onInitialize0 = AG_intercept_onInitialize0;
  obj->AG_intercept_onFirstUse0 = AG_intercept_onFirstUse0;
}
extern "C" void*
ag_EnumEntryEntity_EnumEntryEntity0(void* name, void* value)
{
  return AG_ag::AG_EnumEntryEntity::EnumEntryEntity0(name, value);
}

extern "C" void*
ag_EnumEntryEntity_EnumEntryEntity1(void* param1)
{
  return AG_ag::AG_EnumEntryEntity::EnumEntryEntity1(param1);
}

extern "C" void*
ag_EnumEntryEntity_getValue0(void* objectHandle)
{
  return AG_ag::AG_EnumEntryEntity::getValue0(objectHandle);
}

extern "C" bool
ag_EnumEntryEntity_isLast0(void* objectHandle)
{
  return AG_ag::AG_EnumEntryEntity::isLast0(objectHandle);
}

extern "C" const char*
ag_EnumEntryEntity_getTypeString0(void* objectHandle)
{
  return AG_ag::AG_EnumEntryEntity::getTypeString0(objectHandle);
}

extern "C" void
ag_EnumEntryEntity_onGenerate0(void* objectHandle, void* generator)
{
  AG_ag::AG_Entity::AG_virtual_onGenerate0(objectHandle, generator);
}

extern "C" void
ag_EnumEntryEntity_Destructor0(void* objectHandle)
{
  AG_ag::AG_EnumEntryEntity::Destructor0(objectHandle);
}

// ---------- Class ag::EnumEntryEntity::ConcreteType :  ----------

extern "C" void*
ag_EnumEntryEntity_ConcreteType_getParent0(void* objectHandle)
{
  return AG_ag::AG_Entity::AG_virtual_getParent0(objectHandle);
}

extern "C" void*
ag_EnumEntryEntity_ConcreteType_resolve0(void* objectHandle,
                                         void* qualifiedName)
{
  return AG_ag::AG_Entity::AG_virtual_resolve0(objectHandle, qualifiedName);
}

extern "C" void*
ag_EnumEntryEntity_ConcreteType_getName0(void* objectHandle)
{
  return AG_ag::AG_Entity::AG_virtual_getName0(objectHandle);
}

extern "C" void*
ag_EnumEntryEntity_ConcreteType_getHierarchy0(void* objectHandle,
                                              void* delimiter)
{
  return AG_ag::AG_Entity::AG_virtual_getHierarchy0(objectHandle, delimiter);
}

extern "C" void
ag_EnumEntryEntity_ConcreteType_onList0(void* objectHandle, void* indent)
{
  AG_ag::AG_Entity::AG_virtual_onList0(objectHandle, indent);
}

extern "C" bool
ag_EnumEntryEntity_ConcreteType_hasName0(void* objectHandle, void* str)
{
  return AG_ag::AG_Entity::AG_virtual_hasName0(objectHandle, str);
}

extern "C" void
ag_EnumEntryEntity_ConcreteType_onInitialize0(void* objectHandle)
{
  AG_ag::AG_Entity::AG_virtual_onInitialize0(objectHandle);
}

extern "C" void
ag_EnumEntryEntity_ConcreteType_onFirstUse0(void* objectHandle)
{
  AG_ag::AG_Entity::AG_virtual_onFirstUse0(objectHandle);
}

// ---------- Class ag::TypeAliasEntity :  ----------

extern "C" void
ag_TypeAliasEntity_AG_initializeInterceptionContext(
  void* objectHandle,
  void* AG_foreignObject,
  void* (*AG_intercept_getParent0)(void* objectHandle),
  void* (*AG_intercept_getName0)(void* objectHandle),
  void* (*AG_intercept_getHierarchy0)(void* objectHandle, void* delimiter),
  void (*AG_intercept_onList0)(void* objectHandle, void* indent),
  bool (*AG_intercept_hasName0)(void* objectHandle, void* str),
  void (*AG_intercept_onInitialize0)(void* objectHandle))
{
  auto* obj = static_cast<AG_ag::AG_TypeAliasEntity*>(objectHandle);
  obj->AG_foreignObject = AG_foreignObject;
  obj->AG_intercept_getParent0 = AG_intercept_getParent0;
  obj->AG_intercept_getName0 = AG_intercept_getName0;
  obj->AG_intercept_getHierarchy0 = AG_intercept_getHierarchy0;
  obj->AG_intercept_onList0 = AG_intercept_onList0;
  obj->AG_intercept_hasName0 = AG_intercept_hasName0;
  obj->AG_intercept_onInitialize0 = AG_intercept_onInitialize0;
}
extern "C" void*
ag_TypeAliasEntity_TypeAliasEntity0(void* name, void* underlying)
{
  return AG_ag::AG_TypeAliasEntity::TypeAliasEntity0(name, underlying);
}

extern "C" void*
ag_TypeAliasEntity_TypeAliasEntity1(void* param1)
{
  return AG_ag::AG_TypeAliasEntity::TypeAliasEntity1(param1);
}

extern "C" void*
ag_TypeAliasEntity_getUnderlying0(void* objectHandle, bool recursive)
{
  return AG_ag::AG_TypeAliasEntity::getUnderlying0(objectHandle, recursive);
}

extern "C" void*
ag_TypeAliasEntity_resolve0(void* objectHandle, void* qualifiedName)
{
  return AG_ag::AG_TypeAliasEntity::resolve0(objectHandle, qualifiedName);
}

extern "C" const char*
ag_TypeAliasEntity_getTypeString0(void* objectHandle)
{
  return AG_ag::AG_TypeAliasEntity::getTypeString0(objectHandle);
}

extern "C" void
ag_TypeAliasEntity_onFirstUse0(void* objectHandle)
{
  AG_ag::AG_Entity::AG_virtual_onFirstUse0(objectHandle);
}

extern "C" void
ag_TypeAliasEntity_onGenerate0(void* objectHandle, void* generator)
{
  AG_ag::AG_Entity::AG_virtual_onGenerate0(objectHandle, generator);
}

extern "C" void
ag_TypeAliasEntity_Destructor0(void* objectHandle)
{
  AG_ag::AG_TypeAliasEntity::Destructor0(objectHandle);
}

// ---------- Class ag::TypeAliasEntity::ConcreteType :  ----------

extern "C" void*
ag_TypeAliasEntity_ConcreteType_getParent0(void* objectHandle)
{
  return AG_ag::AG_Entity::AG_virtual_getParent0(objectHandle);
}

extern "C" void*
ag_TypeAliasEntity_ConcreteType_getName0(void* objectHandle)
{
  return AG_ag::AG_Entity::AG_virtual_getName0(objectHandle);
}

extern "C" void*
ag_TypeAliasEntity_ConcreteType_getHierarchy0(void* objectHandle,
                                              void* delimiter)
{
  return AG_ag::AG_Entity::AG_virtual_getHierarchy0(objectHandle, delimiter);
}

extern "C" void
ag_TypeAliasEntity_ConcreteType_onList0(void* objectHandle, void* indent)
{
  AG_ag::AG_Entity::AG_virtual_onList0(objectHandle, indent);
}

extern "C" bool
ag_TypeAliasEntity_ConcreteType_hasName0(void* objectHandle, void* str)
{
  return AG_ag::AG_Entity::AG_virtual_hasName0(objectHandle, str);
}

extern "C" void
ag_TypeAliasEntity_ConcreteType_onInitialize0(void* objectHandle)
{
  AG_ag::AG_Entity::AG_virtual_onInitialize0(objectHandle);
}

// ---------- Class ag::PrimitiveEntity :  ----------

extern "C" void
ag_PrimitiveEntity_AG_initializeInterceptionContext(
  void* objectHandle,
  void* AG_foreignObject,
  void* (*AG_intercept_getParent0)(void* objectHandle),
  void* (*AG_intercept_resolve0)(void* objectHandle, void* qualifiedName),
  void* (*AG_intercept_getName0)(void* objectHandle),
  void* (*AG_intercept_getHierarchy0)(void* objectHandle, void* delimiter),
  void (*AG_intercept_onList0)(void* objectHandle, void* indent),
  bool (*AG_intercept_hasName0)(void* objectHandle, void* str),
  void (*AG_intercept_onInitialize0)(void* objectHandle),
  void (*AG_intercept_onFirstUse0)(void* objectHandle))
{
  auto* obj = static_cast<AG_ag::AG_PrimitiveEntity*>(objectHandle);
  obj->AG_foreignObject = AG_foreignObject;
  obj->AG_intercept_getParent0 = AG_intercept_getParent0;
  obj->AG_intercept_resolve0 = AG_intercept_resolve0;
  obj->AG_intercept_getName0 = AG_intercept_getName0;
  obj->AG_intercept_getHierarchy0 = AG_intercept_getHierarchy0;
  obj->AG_intercept_onList0 = AG_intercept_onList0;
  obj->AG_intercept_hasName0 = AG_intercept_hasName0;
  obj->AG_intercept_onInitialize0 = AG_intercept_onInitialize0;
  obj->AG_intercept_onFirstUse0 = AG_intercept_onFirstUse0;
}
extern "C" void*
ag_PrimitiveEntity_getObjectHandle0()
{
  return AG_ag::AG_PrimitiveEntity::getObjectHandle0();
}

extern "C" void*
ag_PrimitiveEntity_getInteger0()
{
  return AG_ag::AG_PrimitiveEntity::getInteger0();
}

extern "C" void*
ag_PrimitiveEntity_getFloat0()
{
  return AG_ag::AG_PrimitiveEntity::getFloat0();
}

extern "C" void*
ag_PrimitiveEntity_getDouble0()
{
  return AG_ag::AG_PrimitiveEntity::getDouble0();
}

extern "C" void*
ag_PrimitiveEntity_getBoolean0()
{
  return AG_ag::AG_PrimitiveEntity::getBoolean0();
}

extern "C" void*
ag_PrimitiveEntity_getCharacter0()
{
  return AG_ag::AG_PrimitiveEntity::getCharacter0();
}

extern "C" void*
ag_PrimitiveEntity_getString0()
{
  return AG_ag::AG_PrimitiveEntity::getString0();
}

extern "C" void*
ag_PrimitiveEntity_getVoid0()
{
  return AG_ag::AG_PrimitiveEntity::getVoid0();
}

extern "C" int
ag_PrimitiveEntity_getType0(void* objectHandle)
{
  return AG_ag::AG_PrimitiveEntity::getType0(objectHandle);
}

extern "C" const char*
ag_PrimitiveEntity_getTypeString0(void* objectHandle)
{
  return AG_ag::AG_PrimitiveEntity::getTypeString0(objectHandle);
}

extern "C" void
ag_PrimitiveEntity_onGenerate0(void* objectHandle, void* generator)
{
  AG_ag::AG_Entity::AG_virtual_onGenerate0(objectHandle, generator);
}

extern "C" void
ag_PrimitiveEntity_Destructor0(void* objectHandle)
{
  AG_ag::AG_PrimitiveEntity::Destructor0(objectHandle);
}

// ---------- Class ag::PrimitiveEntity::ConcreteType :  ----------

extern "C" void*
ag_PrimitiveEntity_ConcreteType_getParent0(void* objectHandle)
{
  return AG_ag::AG_Entity::AG_virtual_getParent0(objectHandle);
}

extern "C" void*
ag_PrimitiveEntity_ConcreteType_resolve0(void* objectHandle,
                                         void* qualifiedName)
{
  return AG_ag::AG_Entity::AG_virtual_resolve0(objectHandle, qualifiedName);
}

extern "C" void*
ag_PrimitiveEntity_ConcreteType_getName0(void* objectHandle)
{
  return AG_ag::AG_Entity::AG_virtual_getName0(objectHandle);
}

extern "C" void*
ag_PrimitiveEntity_ConcreteType_getHierarchy0(void* objectHandle,
                                              void* delimiter)
{
  return AG_ag::AG_Entity::AG_virtual_getHierarchy0(objectHandle, delimiter);
}

extern "C" void
ag_PrimitiveEntity_ConcreteType_onList0(void* objectHandle, void* indent)
{
  AG_ag::AG_Entity::AG_virtual_onList0(objectHandle, indent);
}

extern "C" bool
ag_PrimitiveEntity_ConcreteType_hasName0(void* objectHandle, void* str)
{
  return AG_ag::AG_Entity::AG_virtual_hasName0(objectHandle, str);
}

extern "C" void
ag_PrimitiveEntity_ConcreteType_onInitialize0(void* objectHandle)
{
  AG_ag::AG_Entity::AG_virtual_onInitialize0(objectHandle);
}

extern "C" void
ag_PrimitiveEntity_ConcreteType_onFirstUse0(void* objectHandle)
{
  AG_ag::AG_Entity::AG_virtual_onFirstUse0(objectHandle);
}

// ---------- Class ag::ScopeEntity :  ----------

extern "C" void
ag_ScopeEntity_AG_initializeInterceptionContext(
  void* objectHandle,
  void* AG_foreignObject,
  void* (*AG_intercept_getParent0)(void* objectHandle),
  void* (*AG_intercept_resolve0)(void* objectHandle, void* qualifiedName),
  void* (*AG_intercept_getName0)(void* objectHandle),
  void* (*AG_intercept_getHierarchy0)(void* objectHandle, void* delimiter),
  void (*AG_intercept_onList0)(void* objectHandle, void* indent),
  bool (*AG_intercept_hasName0)(void* objectHandle, void* str),
  void (*AG_intercept_onInitialize0)(void* objectHandle),
  void (*AG_intercept_onFirstUse0)(void* objectHandle))
{
  auto* obj = static_cast<AG_ag::AG_ScopeEntity*>(objectHandle);
  obj->AG_foreignObject = AG_foreignObject;
  obj->AG_intercept_getParent0 = AG_intercept_getParent0;
  obj->AG_intercept_resolve0 = AG_intercept_resolve0;
  obj->AG_intercept_getName0 = AG_intercept_getName0;
  obj->AG_intercept_getHierarchy0 = AG_intercept_getHierarchy0;
  obj->AG_intercept_onList0 = AG_intercept_onList0;
  obj->AG_intercept_hasName0 = AG_intercept_hasName0;
  obj->AG_intercept_onInitialize0 = AG_intercept_onInitialize0;
  obj->AG_intercept_onFirstUse0 = AG_intercept_onFirstUse0;
}
extern "C" void*
ag_ScopeEntity_ScopeEntity0(void* name)
{
  return AG_ag::AG_ScopeEntity::ScopeEntity0(name);
}

extern "C" void*
ag_ScopeEntity_ScopeEntity1()
{
  return AG_ag::AG_ScopeEntity::ScopeEntity1();
}

extern "C" void*
ag_ScopeEntity_ScopeEntity2(void* param1)
{
  return AG_ag::AG_ScopeEntity::ScopeEntity2(param1);
}

extern "C" void
ag_ScopeEntity_generateNested0(void* objectHandle, void* generator)
{
  AG_ag::AG_ScopeEntity::generateNested0(objectHandle, generator);
}

extern "C" const char*
ag_ScopeEntity_getTypeString0(void* objectHandle)
{
  return AG_ag::AG_ScopeEntity::getTypeString0(objectHandle);
}

extern "C" void
ag_ScopeEntity_onGenerate0(void* objectHandle, void* generator)
{
  AG_ag::AG_Entity::AG_virtual_onGenerate0(objectHandle, generator);
}

extern "C" void
ag_ScopeEntity_Destructor0(void* objectHandle)
{
  AG_ag::AG_ScopeEntity::Destructor0(objectHandle);
}

// ---------- Class ag::ScopeEntity::ConcreteType :  ----------

extern "C" void*
ag_ScopeEntity_ConcreteType_getParent0(void* objectHandle)
{
  return AG_ag::AG_Entity::AG_virtual_getParent0(objectHandle);
}

extern "C" void*
ag_ScopeEntity_ConcreteType_resolve0(void* objectHandle, void* qualifiedName)
{
  return AG_ag::AG_Entity::AG_virtual_resolve0(objectHandle, qualifiedName);
}

extern "C" void*
ag_ScopeEntity_ConcreteType_getName0(void* objectHandle)
{
  return AG_ag::AG_Entity::AG_virtual_getName0(objectHandle);
}

extern "C" void*
ag_ScopeEntity_ConcreteType_getHierarchy0(void* objectHandle, void* delimiter)
{
  return AG_ag::AG_Entity::AG_virtual_getHierarchy0(objectHandle, delimiter);
}

extern "C" void
ag_ScopeEntity_ConcreteType_onList0(void* objectHandle, void* indent)
{
  AG_ag::AG_Entity::AG_virtual_onList0(objectHandle, indent);
}

extern "C" bool
ag_ScopeEntity_ConcreteType_hasName0(void* objectHandle, void* str)
{
  return AG_ag::AG_Entity::AG_virtual_hasName0(objectHandle, str);
}

extern "C" void
ag_ScopeEntity_ConcreteType_onInitialize0(void* objectHandle)
{
  AG_ag::AG_Entity::AG_virtual_onInitialize0(objectHandle);
}

extern "C" void
ag_ScopeEntity_ConcreteType_onFirstUse0(void* objectHandle)
{
  AG_ag::AG_Entity::AG_virtual_onFirstUse0(objectHandle);
}

// ---------- Class ag::csharp::EntityContext :  ----------

extern "C" void*
ag_csharp_EntityContext_getClass0(void* objectHandle)
{
  return AG_ag::AG_csharp::AG_EntityContext::getClass0(objectHandle);
}

extern "C" void*
ag_csharp_EntityContext_EntityContext0(int type)
{
  return AG_ag::AG_csharp::AG_EntityContext::EntityContext0(type);
}

extern "C" void*
ag_csharp_EntityContext_EntityContext1(void* param1)
{
  return AG_ag::AG_csharp::AG_EntityContext::EntityContext1(param1);
}

extern "C" void
ag_csharp_EntityContext_Destructor0(void* objectHandle)
{
  AG_ag::AG_csharp::AG_EntityContext::Destructor0(objectHandle);
}

// ---------- Class ag::csharp::ClassContext :  ----------

extern "C" void*
ag_csharp_ClassContext_ClassContext0()
{
  return AG_ag::AG_csharp::AG_ClassContext::ClassContext0();
}

extern "C" void*
ag_csharp_ClassContext_ClassContext1(void* param1)
{
  return AG_ag::AG_csharp::AG_ClassContext::ClassContext1(param1);
}

extern "C" bool
ag_csharp_ClassContext_isCompositionBaseOf0(void* objectHandle, void* derived)
{
  return AG_ag::AG_csharp::AG_ClassContext::isCompositionBaseOf0(objectHandle,
                                                                 derived);
}

extern "C" void
ag_csharp_ClassContext_setCompositionBaseOf0(void* objectHandle, void* derived)
{
  AG_ag::AG_csharp::AG_ClassContext::setCompositionBaseOf0(objectHandle,
                                                           derived);
}

extern "C" void
ag_csharp_ClassContext_ensureBaseGetters0(void* objectHandle,
                                          void* entity,
                                          void* base)
{
  AG_ag::AG_csharp::AG_ClassContext::ensureBaseGetters0(
    objectHandle, entity, base);
}

extern "C" int
ag_csharp_ClassContext_getBaseGetterCount0(void* objectHandle)
{
  return AG_ag::AG_csharp::AG_ClassContext::getBaseGetterCount0(objectHandle);
}

extern "C" void*
ag_csharp_ClassContext_getBaseGetter0(void* objectHandle, int index)
{
  return AG_ag::AG_csharp::AG_ClassContext::getBaseGetter0(objectHandle, index);
}

extern "C" void
ag_csharp_ClassContext_Destructor0(void* objectHandle)
{
  AG_ag::AG_csharp::AG_ClassContext::Destructor0(objectHandle);
}

// ---------- Class ag::csharp::BindingGenerator :  ----------

extern "C" void
ag_csharp_BindingGenerator_AG_initializeInterceptionContext(
  void* objectHandle,
  void* AG_foreignObject)
{
  auto* obj = static_cast<AG_ag::AG_csharp::AG_BindingGenerator*>(objectHandle);
  obj->AG_foreignObject = AG_foreignObject;
}
extern "C" void*
ag_csharp_BindingGenerator_BindingGenerator0(void* backend, void* libName)
{
  return AG_ag::AG_csharp::AG_BindingGenerator::BindingGenerator0(backend,
                                                                  libName);
}

extern "C" void*
ag_csharp_BindingGenerator_BindingGenerator1(void* param1)
{
  return AG_ag::AG_csharp::AG_BindingGenerator::BindingGenerator1(param1);
}

extern "C" void
ag_csharp_BindingGenerator_generateClass0(void* objectHandle, void* entity)
{
  AG_ag::AG_BindingGenerator::AG_virtual_generateClass0(objectHandle, entity);
}

extern "C" void
ag_csharp_BindingGenerator_generateEnum0(void* objectHandle, void* entity)
{
  AG_ag::AG_BindingGenerator::AG_virtual_generateEnum0(objectHandle, entity);
}

extern "C" void
ag_csharp_BindingGenerator_generateEnumEntry0(void* objectHandle, void* entity)
{
  AG_ag::AG_BindingGenerator::AG_virtual_generateEnumEntry0(objectHandle,
                                                            entity);
}

extern "C" void
ag_csharp_BindingGenerator_generateFunction0(void* objectHandle, void* entity)
{
  AG_ag::AG_BindingGenerator::AG_virtual_generateFunction0(objectHandle,
                                                           entity);
}

extern "C" void
ag_csharp_BindingGenerator_generateTypeReference0(void* objectHandle,
                                                  void* entity)
{
  AG_ag::AG_BindingGenerator::AG_virtual_generateTypeReference0(objectHandle,
                                                                entity);
}

extern "C" void
ag_csharp_BindingGenerator_generateTypeAlias0(void* objectHandle, void* entity)
{
  AG_ag::AG_BindingGenerator::AG_virtual_generateTypeAlias0(objectHandle,
                                                            entity);
}

extern "C" bool
ag_csharp_BindingGenerator_generateBaseType0(void* objectHandle,
                                             void* entity,
                                             int index)
{
  return AG_ag::AG_BindingGenerator::AG_virtual_generateBaseType0(
    objectHandle, entity, index);
}

extern "C" void
ag_csharp_BindingGenerator_generateNamedScope0(void* objectHandle, void* entity)
{
  AG_ag::AG_BindingGenerator::AG_virtual_generateNamedScope0(objectHandle,
                                                             entity);
}

extern "C" void
ag_csharp_BindingGenerator_generateArgumentSeparator0(void* objectHandle)
{
  AG_ag::AG_BindingGenerator::AG_virtual_generateArgumentSeparator0(
    objectHandle);
}

extern "C" bool
ag_csharp_BindingGenerator_generateReturnStatement0(void* objectHandle,
                                                    void* entity,
                                                    void* target)
{
  return AG_ag::AG_BindingGenerator::AG_virtual_generateReturnStatement0(
    objectHandle, entity, target);
}

extern "C" void
ag_csharp_BindingGenerator_generateBridgeCall0(void* objectHandle, void* entity)
{
  AG_ag::AG_BindingGenerator::AG_virtual_generateBridgeCall0(objectHandle,
                                                             entity);
}

extern "C" void
ag_csharp_BindingGenerator_generateInterceptionFunction0(void* objectHandle,
                                                         void* entity,
                                                         void* parentClass)
{
  AG_ag::AG_BindingGenerator::AG_virtual_generateInterceptionFunction0(
    objectHandle, entity, parentClass);
}

extern "C" void
ag_csharp_BindingGenerator_generateInterceptionContext0(void* objectHandle,
                                                        void* entity)
{
  AG_ag::AG_BindingGenerator::AG_virtual_generateInterceptionContext0(
    objectHandle, entity);
}

extern "C" void*
ag_csharp_BindingGenerator_getObjectHandleName0(void* objectHandle)
{
  return AG_ag::AG_BindingGenerator::AG_virtual_getObjectHandleName0(
    objectHandle);
}

extern "C" void
ag_csharp_BindingGenerator_initializeGenerationContext0(void* objectHandle,
                                                        void* entity)
{
  AG_ag::AG_BindingGenerator::AG_virtual_initializeGenerationContext0(
    objectHandle, entity);
}

extern "C" void
ag_csharp_BindingGenerator_Destructor0(void* objectHandle)
{
  AG_ag::AG_csharp::AG_BindingGenerator::Destructor0(objectHandle);
}

// ---------- Class ag::CallableTypeEntity :  ----------

extern "C" void
ag_CallableTypeEntity_AG_initializeInterceptionContext(
  void* objectHandle,
  void* AG_foreignObject,
  void* (*AG_intercept_getParent0)(void* objectHandle),
  void* (*AG_intercept_resolve0)(void* objectHandle, void* qualifiedName),
  void* (*AG_intercept_getHierarchy0)(void* objectHandle, void* delimiter),
  void (*AG_intercept_onList0)(void* objectHandle, void* indent),
  bool (*AG_intercept_hasName0)(void* objectHandle, void* str),
  void (*AG_intercept_onInitialize0)(void* objectHandle),
  void (*AG_intercept_onFirstUse0)(void* objectHandle))
{
  auto* obj = static_cast<AG_ag::AG_CallableTypeEntity*>(objectHandle);
  obj->AG_foreignObject = AG_foreignObject;
  obj->AG_intercept_getParent0 = AG_intercept_getParent0;
  obj->AG_intercept_resolve0 = AG_intercept_resolve0;
  obj->AG_intercept_getHierarchy0 = AG_intercept_getHierarchy0;
  obj->AG_intercept_onList0 = AG_intercept_onList0;
  obj->AG_intercept_hasName0 = AG_intercept_hasName0;
  obj->AG_intercept_onInitialize0 = AG_intercept_onInitialize0;
  obj->AG_intercept_onFirstUse0 = AG_intercept_onFirstUse0;
}
extern "C" void*
ag_CallableTypeEntity_CallableTypeEntity0(void* returnType)
{
  return AG_ag::AG_CallableTypeEntity::CallableTypeEntity0(returnType);
}

extern "C" void*
ag_CallableTypeEntity_CallableTypeEntity1(void* param1)
{
  return AG_ag::AG_CallableTypeEntity::CallableTypeEntity1(param1);
}

extern "C" void
ag_CallableTypeEntity_addParameter0(void* objectHandle, void* param)
{
  AG_ag::AG_CallableTypeEntity::addParameter0(objectHandle, param);
}

extern "C" void*
ag_CallableTypeEntity_getName0(void* objectHandle)
{
  return AG_ag::AG_CallableTypeEntity::getName0(objectHandle);
}

extern "C" const char*
ag_CallableTypeEntity_getTypeString0(void* objectHandle)
{
  return AG_ag::AG_CallableTypeEntity::getTypeString0(objectHandle);
}

extern "C" void
ag_CallableTypeEntity_onGenerate0(void* objectHandle, void* generator)
{
  AG_ag::AG_Entity::AG_virtual_onGenerate0(objectHandle, generator);
}

extern "C" void
ag_CallableTypeEntity_Destructor0(void* objectHandle)
{
  AG_ag::AG_CallableTypeEntity::Destructor0(objectHandle);
}

// ---------- Class ag::CallableTypeEntity::ConcreteType :  ----------

extern "C" void*
ag_CallableTypeEntity_ConcreteType_getParent0(void* objectHandle)
{
  return AG_ag::AG_Entity::AG_virtual_getParent0(objectHandle);
}

extern "C" void*
ag_CallableTypeEntity_ConcreteType_resolve0(void* objectHandle,
                                            void* qualifiedName)
{
  return AG_ag::AG_Entity::AG_virtual_resolve0(objectHandle, qualifiedName);
}

extern "C" void*
ag_CallableTypeEntity_ConcreteType_getHierarchy0(void* objectHandle,
                                                 void* delimiter)
{
  return AG_ag::AG_Entity::AG_virtual_getHierarchy0(objectHandle, delimiter);
}

extern "C" void
ag_CallableTypeEntity_ConcreteType_onList0(void* objectHandle, void* indent)
{
  AG_ag::AG_Entity::AG_virtual_onList0(objectHandle, indent);
}

extern "C" bool
ag_CallableTypeEntity_ConcreteType_hasName0(void* objectHandle, void* str)
{
  return AG_ag::AG_Entity::AG_virtual_hasName0(objectHandle, str);
}

extern "C" void
ag_CallableTypeEntity_ConcreteType_onInitialize0(void* objectHandle)
{
  AG_ag::AG_Entity::AG_virtual_onInitialize0(objectHandle);
}

extern "C" void
ag_CallableTypeEntity_ConcreteType_onFirstUse0(void* objectHandle)
{
  AG_ag::AG_Entity::AG_virtual_onFirstUse0(objectHandle);
}

// ---------- Class ag::java::BindingGenerator :  ----------

extern "C" void
ag_java_BindingGenerator_AG_initializeInterceptionContext(
  void* objectHandle,
  void* AG_foreignObject,
  void (*AG_intercept_generateBridgeCall0)(void* objectHandle, void* entity),
  void (*AG_intercept_generateInterceptionFunction0)(void* objectHandle,
                                                     void* entity,
                                                     void* parentClass),
  void (*AG_intercept_generateInterceptionContext0)(void* objectHandle,
                                                    void* entity),
  void* (*AG_intercept_getObjectHandleName0)(void* objectHandle),
  void (*AG_intercept_initializeGenerationContext0)(void* objectHandle,
                                                    void* entity))
{
  auto* obj = static_cast<AG_ag::AG_java::AG_BindingGenerator*>(objectHandle);
  obj->AG_foreignObject = AG_foreignObject;
  obj->AG_intercept_generateBridgeCall0 = AG_intercept_generateBridgeCall0;
  obj->AG_intercept_generateInterceptionFunction0 =
    AG_intercept_generateInterceptionFunction0;
  obj->AG_intercept_generateInterceptionContext0 =
    AG_intercept_generateInterceptionContext0;
  obj->AG_intercept_getObjectHandleName0 = AG_intercept_getObjectHandleName0;
  obj->AG_intercept_initializeGenerationContext0 =
    AG_intercept_initializeGenerationContext0;
}
extern "C" void*
ag_java_BindingGenerator_BindingGenerator0(void* backend, void* packagePrefix)
{
  return AG_ag::AG_java::AG_BindingGenerator::BindingGenerator0(backend,
                                                                packagePrefix);
}

extern "C" void*
ag_java_BindingGenerator_BindingGenerator1(void* param1)
{
  return AG_ag::AG_java::AG_BindingGenerator::BindingGenerator1(param1);
}

extern "C" void
ag_java_BindingGenerator_generateClass0(void* objectHandle, void* entity)
{
  AG_ag::AG_BindingGenerator::AG_virtual_generateClass0(objectHandle, entity);
}

extern "C" void
ag_java_BindingGenerator_generateEnum0(void* objectHandle, void* entity)
{
  AG_ag::AG_BindingGenerator::AG_virtual_generateEnum0(objectHandle, entity);
}

extern "C" void
ag_java_BindingGenerator_generateEnumEntry0(void* objectHandle, void* entity)
{
  AG_ag::AG_BindingGenerator::AG_virtual_generateEnumEntry0(objectHandle,
                                                            entity);
}

extern "C" void
ag_java_BindingGenerator_generateFunction0(void* objectHandle, void* entity)
{
  AG_ag::AG_BindingGenerator::AG_virtual_generateFunction0(objectHandle,
                                                           entity);
}

extern "C" void
ag_java_BindingGenerator_generateTypeReference0(void* objectHandle,
                                                void* entity)
{
  AG_ag::AG_BindingGenerator::AG_virtual_generateTypeReference0(objectHandle,
                                                                entity);
}

extern "C" void
ag_java_BindingGenerator_generateTypeAlias0(void* objectHandle, void* entity)
{
  AG_ag::AG_BindingGenerator::AG_virtual_generateTypeAlias0(objectHandle,
                                                            entity);
}

extern "C" bool
ag_java_BindingGenerator_generateBaseType0(void* objectHandle,
                                           void* entity,
                                           int index)
{
  return AG_ag::AG_BindingGenerator::AG_virtual_generateBaseType0(
    objectHandle, entity, index);
}

extern "C" void
ag_java_BindingGenerator_generateNamedScope0(void* objectHandle, void* entity)
{
  AG_ag::AG_BindingGenerator::AG_virtual_generateNamedScope0(objectHandle,
                                                             entity);
}

extern "C" void
ag_java_BindingGenerator_generateArgumentSeparator0(void* objectHandle)
{
  AG_ag::AG_BindingGenerator::AG_virtual_generateArgumentSeparator0(
    objectHandle);
}

extern "C" bool
ag_java_BindingGenerator_generateReturnStatement0(void* objectHandle,
                                                  void* entity,
                                                  void* target)
{
  return AG_ag::AG_BindingGenerator::AG_virtual_generateReturnStatement0(
    objectHandle, entity, target);
}

extern "C" void
ag_java_BindingGenerator_Destructor0(void* objectHandle)
{
  AG_ag::AG_java::AG_BindingGenerator::Destructor0(objectHandle);
}

// ---------- Class ag::java::BindingGenerator::ConcreteType :  ----------

extern "C" void
ag_java_BindingGenerator_ConcreteType_generateBridgeCall0(void* objectHandle,
                                                          void* entity)
{
  AG_ag::AG_BindingGenerator::AG_virtual_generateBridgeCall0(objectHandle,
                                                             entity);
}

extern "C" void
ag_java_BindingGenerator_ConcreteType_generateInterceptionFunction0(
  void* objectHandle,
  void* entity,
  void* parentClass)
{
  AG_ag::AG_BindingGenerator::AG_virtual_generateInterceptionFunction0(
    objectHandle, entity, parentClass);
}

extern "C" void
ag_java_BindingGenerator_ConcreteType_generateInterceptionContext0(
  void* objectHandle,
  void* entity)
{
  AG_ag::AG_BindingGenerator::AG_virtual_generateInterceptionContext0(
    objectHandle, entity);
}

extern "C" void*
ag_java_BindingGenerator_ConcreteType_getObjectHandleName0(void* objectHandle)
{
  return AG_ag::AG_BindingGenerator::AG_virtual_getObjectHandleName0(
    objectHandle);
}

extern "C" void
ag_java_BindingGenerator_ConcreteType_initializeGenerationContext0(
  void* objectHandle,
  void* entity)
{
  AG_ag::AG_BindingGenerator::AG_virtual_initializeGenerationContext0(
    objectHandle, entity);
}

// ---------- Class clang::QualType :  ----------

extern "C" void*
clang_QualType_QualType0()
{
  return AG_clang::AG_QualType::QualType0();
}

extern "C" void*
clang_QualType_QualType1(void* Ptr, int Quals)
{
  return AG_clang::AG_QualType::QualType1(Ptr, Quals);
}

extern "C" void*
clang_QualType_QualType2(void* Ptr, int Quals)
{
  return AG_clang::AG_QualType::QualType2(Ptr, Quals);
}

extern "C" void*
clang_QualType_QualType3(void* param1)
{
  return AG_clang::AG_QualType::QualType3(param1);
}

extern "C" void
clang_QualType_Destructor0(void* objectHandle)
{
  AG_clang::AG_QualType::Destructor0(objectHandle);
}

// ---------- Class clang::Type :  ----------

extern "C" void*
clang_Type_Type0(int tc, void* canon, int Dependence)
{
  return AG_clang::AG_Type::Type0(tc, canon, Dependence);
}

extern "C" void
clang_Type_Destructor0(void* objectHandle)
{
  AG_clang::AG_Type::Destructor0(objectHandle);
}

// ---------- Class clang::ExtQualsTypeCommonBase :  ----------

extern "C" void*
clang_ExtQualsTypeCommonBase_ExtQualsTypeCommonBase0(void* param1)
{
  return AG_clang::AG_ExtQualsTypeCommonBase::ExtQualsTypeCommonBase0(param1);
}

extern "C" void
clang_ExtQualsTypeCommonBase_Destructor0(void* objectHandle)
{
  AG_clang::AG_ExtQualsTypeCommonBase::Destructor0(objectHandle);
}

// ---------- Class clang::TypeDependenceScope :  ----------

// ---------- Class clang::ASTContext :  ----------

extern "C" void*
clang_ASTContext_ASTContext0(void* LOpts,
                             void* SM,
                             void* idents,
                             void* sels,
                             void* builtins,
                             int TUKind)
{
  return AG_clang::AG_ASTContext::ASTContext0(
    LOpts, SM, idents, sels, builtins, TUKind);
}

extern "C" void
clang_ASTContext_Destructor0(void* objectHandle)
{
  AG_clang::AG_ASTContext::Destructor0(objectHandle);
}

// ---------- Class clang::Qualifiers :  ----------

extern "C" void*
clang_Qualifiers_Qualifiers0()
{
  return AG_clang::AG_Qualifiers::Qualifiers0();
}

extern "C" void*
clang_Qualifiers_Qualifiers1(void* param1)
{
  return AG_clang::AG_Qualifiers::Qualifiers1(param1);
}

extern "C" void
clang_Qualifiers_Destructor0(void* objectHandle)
{
  AG_clang::AG_Qualifiers::Destructor0(objectHandle);
}

// ---------- Class clang::NamedDecl :  ----------

extern "C" void
clang_NamedDecl_AG_initializeInterceptionContext(void* objectHandle,
                                                 void* AG_foreignObject)
{
  auto* obj = static_cast<AG_clang::AG_NamedDecl*>(objectHandle);
  obj->AG_foreignObject = AG_foreignObject;
}
// ---------- Class clang::Decl :  ----------

extern "C" void
clang_Decl_AG_initializeInterceptionContext(void* objectHandle,
                                            void* AG_foreignObject)
{
  auto* obj = static_cast<AG_clang::AG_Decl*>(objectHandle);
  obj->AG_foreignObject = AG_foreignObject;
}
// ---------- Class clang::DeclContext :  ----------

extern "C" void*
clang_DeclContext_DeclContext0(int K)
{
  return AG_clang::AG_DeclContext::DeclContext0(K);
}

extern "C" void
clang_DeclContext_Destructor0(void* objectHandle)
{
  AG_clang::AG_DeclContext::Destructor0(objectHandle);
}

// ---------- Class clang::DeclaratorDecl :  ----------

extern "C" void
clang_DeclaratorDecl_AG_initializeInterceptionContext(void* objectHandle,
                                                      void* AG_foreignObject)
{
  auto* obj = static_cast<AG_clang::AG_DeclaratorDecl*>(objectHandle);
  obj->AG_foreignObject = AG_foreignObject;
}
// ---------- Class clang::ValueDecl :  ----------

extern "C" void
clang_ValueDecl_AG_initializeInterceptionContext(void* objectHandle,
                                                 void* AG_foreignObject)
{
  auto* obj = static_cast<AG_clang::AG_ValueDecl*>(objectHandle);
  obj->AG_foreignObject = AG_foreignObject;
}
// ---------- Class clang::SourceManager :  ----------

extern "C" void*
clang_SourceManager_SourceManager0(void* Diag,
                                   void* FileMgr,
                                   bool UserFilesAreVolatile)
{
  return AG_clang::AG_SourceManager::SourceManager0(
    Diag, FileMgr, UserFilesAreVolatile);
}

extern "C" void
clang_SourceManager_Destructor0(void* objectHandle)
{
  AG_clang::AG_SourceManager::Destructor0(objectHandle);
}

// ---------- Class clang::IdentifierInfo :  ----------

// ---------- Class clang::LangOptions :  ----------

extern "C" void*
clang_LangOptions_LangOptions0()
{
  return AG_clang::AG_LangOptions::LangOptions0();
}

extern "C" void*
clang_LangOptions_LangOptions1(void* param1)
{
  return AG_clang::AG_LangOptions::LangOptions1(param1);
}

extern "C" void
clang_LangOptions_Destructor0(void* objectHandle)
{
  AG_clang::AG_LangOptions::Destructor0(objectHandle);
}

// ---------- Class clang::DiagnosticsEngine :  ----------

extern "C" void*
clang_DiagnosticsEngine_DiagnosticsEngine0(void* Diags,
                                           void* DiagOpts,
                                           void* client,
                                           bool ShouldOwnClient)
{
  return AG_clang::AG_DiagnosticsEngine::DiagnosticsEngine0(
    Diags, DiagOpts, client, ShouldOwnClient);
}

extern "C" void
clang_DiagnosticsEngine_Destructor0(void* objectHandle)
{
  AG_clang::AG_DiagnosticsEngine::Destructor0(objectHandle);
}

// ---------- Class clang::DiagnosticIDs :  ----------

extern "C" void*
clang_DiagnosticIDs_DiagnosticIDs0()
{
  return AG_clang::AG_DiagnosticIDs::DiagnosticIDs0();
}

extern "C" void
clang_DiagnosticIDs_Destructor0(void* objectHandle)
{
  AG_clang::AG_DiagnosticIDs::Destructor0(objectHandle);
}

// ---------- Class clang::DiagnosticOptions :  ----------

extern "C" void*
clang_DiagnosticOptions_DiagnosticOptions0()
{
  return AG_clang::AG_DiagnosticOptions::DiagnosticOptions0();
}

extern "C" void*
clang_DiagnosticOptions_DiagnosticOptions1(void* param1)
{
  return AG_clang::AG_DiagnosticOptions::DiagnosticOptions1(param1);
}

extern "C" void
clang_DiagnosticOptions_Destructor0(void* objectHandle)
{
  AG_clang::AG_DiagnosticOptions::Destructor0(objectHandle);
}

// ---------- Class clang::DiagnosticConsumer :  ----------

extern "C" void
clang_DiagnosticConsumer_AG_initializeInterceptionContext(
  void* objectHandle,
  void* AG_foreignObject)
{
  auto* obj = static_cast<AG_clang::AG_DiagnosticConsumer*>(objectHandle);
  obj->AG_foreignObject = AG_foreignObject;
}
extern "C" void*
clang_DiagnosticConsumer_DiagnosticConsumer0()
{
  return AG_clang::AG_DiagnosticConsumer::DiagnosticConsumer0();
}

extern "C" void
clang_DiagnosticConsumer_Destructor0(void* objectHandle)
{
  AG_clang::AG_DiagnosticConsumer::Destructor0(objectHandle);
}

// ---------- Class clang::FunctionDecl :  ----------

extern "C" void
clang_FunctionDecl_AG_initializeInterceptionContext(void* objectHandle,
                                                    void* AG_foreignObject)
{
  auto* obj = static_cast<AG_clang::AG_FunctionDecl*>(objectHandle);
  obj->AG_foreignObject = AG_foreignObject;
}
// ---------- Class clang::RedeclarableFunctionDecl :  ----------

extern "C" void*
clang_RedeclarableFunctionDecl_Redeclarable0(void* Ctx)
{
  return AG_clang::AG_RedeclarableFunctionDecl::Redeclarable0(Ctx);
}

extern "C" void
clang_RedeclarableFunctionDecl_Destructor0(void* objectHandle)
{
  AG_clang::AG_RedeclarableFunctionDecl::Destructor0(objectHandle);
}

// ---------- Class clang::ExtQuals :  ----------

extern "C" void*
clang_ExtQuals_ExtQuals0(void* baseType, void* canon, void* quals)
{
  return AG_clang::AG_ExtQuals::ExtQuals0(baseType, canon, quals);
}

// ---------- Class clang::IdentifierInfoLookup :  ----------

extern "C" void
clang_IdentifierInfoLookup_AG_initializeInterceptionContext(
  void* objectHandle,
  void* AG_foreignObject,
  void* (*AG_intercept_get0)(void* objectHandle, void* Name))
{
  auto* obj = static_cast<AG_clang::AG_IdentifierInfoLookup*>(objectHandle);
  obj->AG_foreignObject = AG_foreignObject;
  obj->AG_intercept_get0 = AG_intercept_get0;
}
extern "C" void
clang_IdentifierInfoLookup_Destructor0(void* objectHandle)
{
  AG_clang::AG_IdentifierInfoLookup::Destructor0(objectHandle);
}

// ---------- Class clang::IdentifierInfoLookup::ConcreteType :  ----------

extern "C" void*
clang_IdentifierInfoLookup_ConcreteType_get0(void* objectHandle, void* Name)
{
  return AG_clang::AG_IdentifierInfoLookup::AG_virtual_get0(objectHandle, Name);
}

// ---------- Class clang::IdentifierTable :  ----------

extern "C" void*
clang_IdentifierTable_IdentifierTable0(void* ExternalLookup)
{
  return AG_clang::AG_IdentifierTable::IdentifierTable0(ExternalLookup);
}

extern "C" void*
clang_IdentifierTable_IdentifierTable1(void* LangOpts, void* ExternalLookup)
{
  return AG_clang::AG_IdentifierTable::IdentifierTable1(LangOpts,
                                                        ExternalLookup);
}

extern "C" void*
clang_IdentifierTable_IdentifierTable2(void* param1)
{
  return AG_clang::AG_IdentifierTable::IdentifierTable2(param1);
}

extern "C" void
clang_IdentifierTable_Destructor0(void* objectHandle)
{
  AG_clang::AG_IdentifierTable::Destructor0(objectHandle);
}

// ---------- Class clang::SelectorTable :  ----------

extern "C" void*
clang_SelectorTable_SelectorTable0()
{
  return AG_clang::AG_SelectorTable::SelectorTable0();
}

extern "C" void
clang_SelectorTable_Destructor0(void* objectHandle)
{
  AG_clang::AG_SelectorTable::Destructor0(objectHandle);
}

// ---------- Class clang::LangOptionsBase :  ----------

extern "C" void*
clang_LangOptionsBase_LangOptionsBase0(void* param1)
{
  return AG_clang::AG_LangOptionsBase::LangOptionsBase0(param1);
}

extern "C" void
clang_LangOptionsBase_Destructor0(void* objectHandle)
{
  AG_clang::AG_LangOptionsBase::Destructor0(objectHandle);
}

// ---------- Class clang::FileManager :  ----------

extern "C" void*
clang_FileManager_FileManager0(void* FileSystemOpts, void* FS)
{
  return AG_clang::AG_FileManager::FileManager0(FileSystemOpts, FS);
}

extern "C" void
clang_FileManager_Destructor0(void* objectHandle)
{
  AG_clang::AG_FileManager::Destructor0(objectHandle);
}

// ---------- Class clang::FileSystemOptions :  ----------

extern "C" void*
clang_FileSystemOptions_FileSystemOptions0(void* param1)
{
  return AG_clang::AG_FileSystemOptions::FileSystemOptions0(param1);
}

extern "C" void
clang_FileSystemOptions_Destructor0(void* objectHandle)
{
  AG_clang::AG_FileSystemOptions::Destructor0(objectHandle);
}

// ---------- Class clang::Builtin::Context :  ----------

// ---------- Class llvm::StringRef :  ----------

extern "C" void*
llvm_StringRef_StringRef0()
{
  return AG_llvm::AG_StringRef::StringRef0();
}

extern "C" void*
llvm_StringRef_StringRef1(const char* Str)
{
  return AG_llvm::AG_StringRef::StringRef1(Str);
}

extern "C" void*
llvm_StringRef_StringRef2(const char* data, int length)
{
  return AG_llvm::AG_StringRef::StringRef2(data, length);
}

extern "C" void*
llvm_StringRef_StringRef3(void* Str)
{
  return AG_llvm::AG_StringRef::StringRef3(Str);
}

extern "C" void*
llvm_StringRef_StringRef4(void* Str)
{
  return AG_llvm::AG_StringRef::StringRef4(Str);
}

extern "C" void*
llvm_StringRef_StringRef5(void* param1)
{
  return AG_llvm::AG_StringRef::StringRef5(param1);
}

extern "C" void
llvm_StringRef_Destructor0(void* objectHandle)
{
  AG_llvm::AG_StringRef::Destructor0(objectHandle);
}

// ---------- Class llvm::SmallVectorImplCharacter :  ----------

extern "C" void*
llvm_SmallVectorImplCharacter_SmallVectorImpl0(int N)
{
  return AG_llvm::AG_SmallVectorImplCharacter::SmallVectorImpl0(N);
}

extern "C" void
llvm_SmallVectorImplCharacter_Destructor0(void* objectHandle)
{
  AG_llvm::AG_SmallVectorImplCharacter::Destructor0(objectHandle);
}

// ---------- Class llvm::SmallVectorTemplateBaseCharacter_1 :  ----------

extern "C" void*
llvm_SmallVectorTemplateBaseCharacter_1_SmallVectorTemplateBase0(int Size)
{
  return AG_llvm::AG_SmallVectorTemplateBaseCharacter_1::
    SmallVectorTemplateBase0(Size);
}

extern "C" void*
llvm_SmallVectorTemplateBaseCharacter_1_SmallVectorTemplateBase1(void* param1)
{
  return AG_llvm::AG_SmallVectorTemplateBaseCharacter_1::
    SmallVectorTemplateBase1(param1);
}

extern "C" void
llvm_SmallVectorTemplateBaseCharacter_1_Destructor0(void* objectHandle)
{
  AG_llvm::AG_SmallVectorTemplateBaseCharacter_1::Destructor0(objectHandle);
}

// ---------- Class llvm::SmallVectorTemplateCommonCharacter_Void :  ----------

extern "C" void*
llvm_SmallVectorTemplateCommonCharacter_Void_SmallVectorTemplateCommon0(
  int Size)
{
  return AG_llvm::AG_SmallVectorTemplateCommonCharacter_Void::
    SmallVectorTemplateCommon0(Size);
}

extern "C" void*
llvm_SmallVectorTemplateCommonCharacter_Void_SmallVectorTemplateCommon1(
  void* param1)
{
  return AG_llvm::AG_SmallVectorTemplateCommonCharacter_Void::
    SmallVectorTemplateCommon1(param1);
}

extern "C" void
llvm_SmallVectorTemplateCommonCharacter_Void_Destructor0(void* objectHandle)
{
  AG_llvm::AG_SmallVectorTemplateCommonCharacter_Void::Destructor0(
    objectHandle);
}

// ---------- Class llvm::SmallVectorBaseInteger :  ----------

extern "C" void*
llvm_SmallVectorBaseInteger_SmallVectorBase0(void* param1)
{
  return AG_llvm::AG_SmallVectorBaseInteger::SmallVectorBase0(param1);
}

extern "C" void
llvm_SmallVectorBaseInteger_Destructor0(void* objectHandle)
{
  AG_llvm::AG_SmallVectorBaseInteger::Destructor0(objectHandle);
}

// ---------- Class llvm::formatv_object_base :  ----------

// ---------- Class llvm::FoldingSetBase :  ----------

extern "C" void*
llvm_FoldingSetBase_FoldingSetBase0(int Log2InitSize)
{
  return AG_llvm::AG_FoldingSetBase::FoldingSetBase0(Log2InitSize);
}

extern "C" void*
llvm_FoldingSetBase_FoldingSetBase1(void* Arg)
{
  return AG_llvm::AG_FoldingSetBase::FoldingSetBase1(Arg);
}

extern "C" void
llvm_FoldingSetBase_Destructor0(void* objectHandle)
{
  AG_llvm::AG_FoldingSetBase::Destructor0(objectHandle);
}

// ---------- Class llvm::FoldingSetBase::Node :  ----------

extern "C" void*
llvm_FoldingSetBase_Node_Node0()
{
  return AG_llvm::AG_FoldingSetBase::AG_Node::Node0();
}

extern "C" void*
llvm_FoldingSetBase_Node_Node1(void* param1)
{
  return AG_llvm::AG_FoldingSetBase::AG_Node::Node1(param1);
}

extern "C" void
llvm_FoldingSetBase_Node_Destructor0(void* objectHandle)
{
  AG_llvm::AG_FoldingSetBase::AG_Node::Destructor0(objectHandle);
}

// ---------- Class llvm::RefCountedBaseDiagnosticsEngine :  ----------

extern "C" void*
llvm_RefCountedBaseDiagnosticsEngine_RefCountedBase0()
{
  return AG_llvm::AG_RefCountedBaseDiagnosticsEngine::RefCountedBase0();
}

extern "C" void
llvm_RefCountedBaseDiagnosticsEngine_Destructor0(void* objectHandle)
{
  AG_llvm::AG_RefCountedBaseDiagnosticsEngine::Destructor0(objectHandle);
}

// ---------- Class llvm::RefCountedBaseDiagnosticIDs :  ----------

extern "C" void*
llvm_RefCountedBaseDiagnosticIDs_RefCountedBase0()
{
  return AG_llvm::AG_RefCountedBaseDiagnosticIDs::RefCountedBase0();
}

extern "C" void
llvm_RefCountedBaseDiagnosticIDs_Destructor0(void* objectHandle)
{
  AG_llvm::AG_RefCountedBaseDiagnosticIDs::Destructor0(objectHandle);
}

// ---------- Class llvm::IntrusiveRefCntPtrDiagnosticIDs :  ----------

extern "C" void*
llvm_IntrusiveRefCntPtrDiagnosticIDs_IntrusiveRefCntPtr0()
{
  return AG_llvm::AG_IntrusiveRefCntPtrDiagnosticIDs::IntrusiveRefCntPtr0();
}

extern "C" void*
llvm_IntrusiveRefCntPtrDiagnosticIDs_IntrusiveRefCntPtr1(void* obj)
{
  return AG_llvm::AG_IntrusiveRefCntPtrDiagnosticIDs::IntrusiveRefCntPtr1(obj);
}

extern "C" void*
llvm_IntrusiveRefCntPtrDiagnosticIDs_IntrusiveRefCntPtr2(void* S)
{
  return AG_llvm::AG_IntrusiveRefCntPtrDiagnosticIDs::IntrusiveRefCntPtr2(S);
}

extern "C" void
llvm_IntrusiveRefCntPtrDiagnosticIDs_Destructor0(void* objectHandle)
{
  AG_llvm::AG_IntrusiveRefCntPtrDiagnosticIDs::Destructor0(objectHandle);
}

// ---------- Class llvm::RefCountedBaseDiagnosticOptions :  ----------

extern "C" void*
llvm_RefCountedBaseDiagnosticOptions_RefCountedBase0()
{
  return AG_llvm::AG_RefCountedBaseDiagnosticOptions::RefCountedBase0();
}

extern "C" void
llvm_RefCountedBaseDiagnosticOptions_Destructor0(void* objectHandle)
{
  AG_llvm::AG_RefCountedBaseDiagnosticOptions::Destructor0(objectHandle);
}

// ---------- Class llvm::IntrusiveRefCntPtrDiagnosticOptions :  ----------

extern "C" void*
llvm_IntrusiveRefCntPtrDiagnosticOptions_IntrusiveRefCntPtr0()
{
  return AG_llvm::AG_IntrusiveRefCntPtrDiagnosticOptions::IntrusiveRefCntPtr0();
}

extern "C" void*
llvm_IntrusiveRefCntPtrDiagnosticOptions_IntrusiveRefCntPtr1(void* obj)
{
  return AG_llvm::AG_IntrusiveRefCntPtrDiagnosticOptions::IntrusiveRefCntPtr1(
    obj);
}

extern "C" void*
llvm_IntrusiveRefCntPtrDiagnosticOptions_IntrusiveRefCntPtr2(void* S)
{
  return AG_llvm::AG_IntrusiveRefCntPtrDiagnosticOptions::IntrusiveRefCntPtr2(
    S);
}

extern "C" void
llvm_IntrusiveRefCntPtrDiagnosticOptions_Destructor0(void* objectHandle)
{
  AG_llvm::AG_IntrusiveRefCntPtrDiagnosticOptions::Destructor0(objectHandle);
}

// ---------- Class llvm::Twine :  ----------

extern "C" void*
llvm_Twine_Twine0()
{
  return AG_llvm::AG_Twine::Twine0();
}

extern "C" void*
llvm_Twine_Twine1(const char* Str)
{
  return AG_llvm::AG_Twine::Twine1(Str);
}

extern "C" void*
llvm_Twine_Twine2(void* Str)
{
  return AG_llvm::AG_Twine::Twine2(Str);
}

extern "C" void*
llvm_Twine_Twine3(void* Str)
{
  return AG_llvm::AG_Twine::Twine3(Str);
}

extern "C" void*
llvm_Twine_Twine4(void* Str)
{
  return AG_llvm::AG_Twine::Twine4(Str);
}

extern "C" void*
llvm_Twine_Twine5(void* Str)
{
  return AG_llvm::AG_Twine::Twine5(Str);
}

extern "C" void*
llvm_Twine_Twine6(void* Fmt)
{
  return AG_llvm::AG_Twine::Twine6(Fmt);
}

extern "C" void*
llvm_Twine_Twine7(char Val)
{
  return AG_llvm::AG_Twine::Twine7(Val);
}

extern "C" void*
llvm_Twine_Twine8(int Val)
{
  return AG_llvm::AG_Twine::Twine8(Val);
}

extern "C" void*
llvm_Twine_Twine9(const char* LHS, void* RHS)
{
  return AG_llvm::AG_Twine::Twine9(LHS, RHS);
}

extern "C" void*
llvm_Twine_Twine10(void* LHS, const char* RHS)
{
  return AG_llvm::AG_Twine::Twine10(LHS, RHS);
}

extern "C" void
llvm_Twine_Destructor0(void* objectHandle)
{
  AG_llvm::AG_Twine::Destructor0(objectHandle);
}

// ---------- Class llvm::vfs::directory_iterator :  ----------

extern "C" void*
llvm_vfs_directory_iterator_directory_iterator0(void* I)
{
  return AG_llvm::AG_vfs::AG_directory_iterator::directory_iterator0(I);
}

extern "C" void*
llvm_vfs_directory_iterator_directory_iterator1()
{
  return AG_llvm::AG_vfs::AG_directory_iterator::directory_iterator1();
}

extern "C" void*
llvm_vfs_directory_iterator_directory_iterator2(void* param1)
{
  return AG_llvm::AG_vfs::AG_directory_iterator::directory_iterator2(param1);
}

extern "C" void
llvm_vfs_directory_iterator_Destructor0(void* objectHandle)
{
  AG_llvm::AG_vfs::AG_directory_iterator::Destructor0(objectHandle);
}

// ---------- Class llvm::vfs::FileSystem :  ----------

extern "C" void
llvm_vfs_FileSystem_AG_initializeInterceptionContext(
  void* objectHandle,
  void* AG_foreignObject,
  void* (*AG_intercept_status0)(void* objectHandle, void* Path),
  void* (*AG_intercept_openFileForRead0)(void* objectHandle, void* Path),
  void* (*AG_intercept_dir_begin0)(void* objectHandle, void* Dir, void* EC),
  void* (*AG_intercept_setCurrentWorkingDirectory0)(void* objectHandle,
                                                    void* Path),
  void* (*AG_intercept_getCurrentWorkingDirectory0)(void* objectHandle))
{
  auto* obj = static_cast<AG_llvm::AG_vfs::AG_FileSystem*>(objectHandle);
  obj->AG_foreignObject = AG_foreignObject;
  obj->AG_intercept_status0 = AG_intercept_status0;
  obj->AG_intercept_openFileForRead0 = AG_intercept_openFileForRead0;
  obj->AG_intercept_dir_begin0 = AG_intercept_dir_begin0;
  obj->AG_intercept_setCurrentWorkingDirectory0 =
    AG_intercept_setCurrentWorkingDirectory0;
  obj->AG_intercept_getCurrentWorkingDirectory0 =
    AG_intercept_getCurrentWorkingDirectory0;
}
extern "C" void
llvm_vfs_FileSystem_Destructor0(void* objectHandle)
{
  AG_llvm::AG_vfs::AG_FileSystem::Destructor0(objectHandle);
}

extern "C" void*
llvm_vfs_FileSystem_FileSystem0()
{
  return AG_llvm::AG_vfs::AG_FileSystem::FileSystem0();
}

// ---------- Class llvm::vfs::FileSystem::ConcreteType :  ----------

extern "C" void*
llvm_vfs_FileSystem_ConcreteType_status0(void* objectHandle, void* Path)
{
  return AG_llvm::AG_vfs::AG_FileSystem::AG_virtual_status0(objectHandle, Path);
}

extern "C" void*
llvm_vfs_FileSystem_ConcreteType_openFileForRead0(void* objectHandle,
                                                  void* Path)
{
  return AG_llvm::AG_vfs::AG_FileSystem::AG_virtual_openFileForRead0(
    objectHandle, Path);
}

extern "C" void*
llvm_vfs_FileSystem_ConcreteType_dir_begin0(void* objectHandle,
                                            void* Dir,
                                            void* EC)
{
  return AG_llvm::AG_vfs::AG_FileSystem::AG_virtual_dir_begin0(
    objectHandle, Dir, EC);
}

extern "C" void*
llvm_vfs_FileSystem_ConcreteType_setCurrentWorkingDirectory0(void* objectHandle,
                                                             void* Path)
{
  return AG_llvm::AG_vfs::AG_FileSystem::AG_virtual_setCurrentWorkingDirectory0(
    objectHandle, Path);
}

extern "C" void*
llvm_vfs_FileSystem_ConcreteType_getCurrentWorkingDirectory0(void* objectHandle)
{
  return AG_llvm::AG_vfs::AG_FileSystem::AG_virtual_getCurrentWorkingDirectory0(
    objectHandle);
}

// ---------- Class llvm::ErrorOrStatus :  ----------

extern "C" void*
llvm_ErrorOrStatus_ErrorOr0(void* EC)
{
  return AG_llvm::AG_ErrorOrStatus::ErrorOr0(EC);
}

extern "C" void*
llvm_ErrorOrStatus_ErrorOr1(void* Other)
{
  return AG_llvm::AG_ErrorOrStatus::ErrorOr1(Other);
}

extern "C" void
llvm_ErrorOrStatus_Destructor0(void* objectHandle)
{
  AG_llvm::AG_ErrorOrStatus::Destructor0(objectHandle);
}

// ---------- Class
// llvm::ErrorOrbasic_stringCharacter_char_traitsCharacter_allocatorCharacter :
// ----------

extern "C" void*
llvm_ErrorOrbasic_stringCharacter_char_traitsCharacter_allocatorCharacter_ErrorOr0(
  void* EC)
{
  return AG_llvm::
    AG_ErrorOrbasic_stringCharacter_char_traitsCharacter_allocatorCharacter::
      ErrorOr0(EC);
}

extern "C" void*
llvm_ErrorOrbasic_stringCharacter_char_traitsCharacter_allocatorCharacter_ErrorOr1(
  void* Other)
{
  return AG_llvm::
    AG_ErrorOrbasic_stringCharacter_char_traitsCharacter_allocatorCharacter::
      ErrorOr1(Other);
}

extern "C" void
llvm_ErrorOrbasic_stringCharacter_char_traitsCharacter_allocatorCharacter_Destructor0(
  void* objectHandle)
{
  AG_llvm::
    AG_ErrorOrbasic_stringCharacter_char_traitsCharacter_allocatorCharacter::
      Destructor0(objectHandle);
}

// ---------- Class llvm::ErrorOrunique_ptrFile_default_deleteFile :  ----------

extern "C" void*
llvm_ErrorOrunique_ptrFile_default_deleteFile_ErrorOr0(void* EC)
{
  return AG_llvm::AG_ErrorOrunique_ptrFile_default_deleteFile::ErrorOr0(EC);
}

extern "C" void*
llvm_ErrorOrunique_ptrFile_default_deleteFile_ErrorOr1(void* Other)
{
  return AG_llvm::AG_ErrorOrunique_ptrFile_default_deleteFile::ErrorOr1(Other);
}

extern "C" void
llvm_ErrorOrunique_ptrFile_default_deleteFile_Destructor0(void* objectHandle)
{
  AG_llvm::AG_ErrorOrunique_ptrFile_default_deleteFile::Destructor0(
    objectHandle);
}

// ---------- Class llvm::ThreadSafeRefCountedBaseFileSystem :  ----------

extern "C" void*
llvm_ThreadSafeRefCountedBaseFileSystem_ThreadSafeRefCountedBase0()
{
  return AG_llvm::AG_ThreadSafeRefCountedBaseFileSystem::
    ThreadSafeRefCountedBase0();
}

extern "C" void
llvm_ThreadSafeRefCountedBaseFileSystem_Destructor0(void* objectHandle)
{
  AG_llvm::AG_ThreadSafeRefCountedBaseFileSystem::Destructor0(objectHandle);
}

// ---------- Class llvm::IntrusiveRefCntPtrFileSystem :  ----------

extern "C" void*
llvm_IntrusiveRefCntPtrFileSystem_IntrusiveRefCntPtr0()
{
  return AG_llvm::AG_IntrusiveRefCntPtrFileSystem::IntrusiveRefCntPtr0();
}

extern "C" void*
llvm_IntrusiveRefCntPtrFileSystem_IntrusiveRefCntPtr1(void* obj)
{
  return AG_llvm::AG_IntrusiveRefCntPtrFileSystem::IntrusiveRefCntPtr1(obj);
}

extern "C" void*
llvm_IntrusiveRefCntPtrFileSystem_IntrusiveRefCntPtr2(void* S)
{
  return AG_llvm::AG_IntrusiveRefCntPtrFileSystem::IntrusiveRefCntPtr2(S);
}

extern "C" void
llvm_IntrusiveRefCntPtrFileSystem_Destructor0(void* objectHandle)
{
  AG_llvm::AG_IntrusiveRefCntPtrFileSystem::Destructor0(objectHandle);
}

// ---------- Class llvm::RefCountedBaseSourceManager :  ----------

extern "C" void*
llvm_RefCountedBaseSourceManager_RefCountedBase0()
{
  return AG_llvm::AG_RefCountedBaseSourceManager::RefCountedBase0();
}

extern "C" void
llvm_RefCountedBaseSourceManager_Destructor0(void* objectHandle)
{
  AG_llvm::AG_RefCountedBaseSourceManager::Destructor0(objectHandle);
}

// ---------- Class llvm::RefCountedBaseFileManager :  ----------

extern "C" void*
llvm_RefCountedBaseFileManager_RefCountedBase0()
{
  return AG_llvm::AG_RefCountedBaseFileManager::RefCountedBase0();
}

extern "C" void
llvm_RefCountedBaseFileManager_Destructor0(void* objectHandle)
{
  AG_llvm::AG_RefCountedBaseFileManager::Destructor0(objectHandle);
}

// ---------- Class llvm::RefCountedBaseASTContext :  ----------

extern "C" void*
llvm_RefCountedBaseASTContext_RefCountedBase0()
{
  return AG_llvm::AG_RefCountedBaseASTContext::RefCountedBase0();
}

extern "C" void
llvm_RefCountedBaseASTContext_Destructor0(void* objectHandle)
{
  AG_llvm::AG_RefCountedBaseASTContext::Destructor0(objectHandle);
}
