#pragma once

// IMPORT THIRD-PARTY LIBRARIES
#include <pxr/usd/ar/defaultResolver.h>
#include <pxr/usd/ar/api.h>

PXR_NAMESPACE_OPEN_SCOPE

class URIResolver : public ArDefaultResolver {
public:
    
    URIResolver();
    ~URIResolver();

    
    bool IsRelativePath(const std::string& path) override;
    std::string Resolve(const std::string& path) override;

    
    static std::string helloWorld(void);


};

PXR_NAMESPACE_CLOSE_SCOPE