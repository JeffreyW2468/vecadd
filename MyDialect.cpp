MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::mydialect::MyDialect)
namespace mlir {
namespace mydialect {

MyDialect::MyDialect(::mlir::MLIRContext *context) : ::mlir::Dialect(getDialectNamespace(), context, ::mlir::TypeID::get<MyDialect>()) {
	initialize();
}

MyDialect::~MyDialect() = default;

}
}
