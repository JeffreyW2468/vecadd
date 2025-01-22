include "mlir/IR/OpBase.td"

def MyDialect : Dialect {
	let name = "mydialect";
	let summary = "dialect for implementing vecadd";
	let description = [{testing to see if this works}];
	let cppNamespace = "::mlir::mydialect";
}
