#pragma once
#include "mlir/IR/Dialect.h"

namespace mlir {
namespace mydialect {
  class MyDialect : public ::mlir::Dialect {
    explicit MyDialect(::mlir::MLIRContext *context);
    void initialize();
    friend class ::mlir::MLIRContext;
  public:
    ~MyDialect() override;
    static constexpr ::llvm::StringLiteral getDialectNamespace() { return ::llvm::StringLiteral("mydialect"); 
    }
  };
}
}
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::mydialect::MyDialect)
