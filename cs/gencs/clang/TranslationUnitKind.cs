namespace gencs.clang;
public enum TranslationUnitKind : int
{
    TU_Complete = 0,
    TU_Prefix = 1,
    TU_Module = 2,
    TU_Incremental = 3
}
