#ifdef __OBJC__
#import <UIKit/UIKit.h>
#else
#ifndef FOUNDATION_EXPORT
#if defined(__cplusplus)
#define FOUNDATION_EXPORT extern "C"
#else
#define FOUNDATION_EXPORT extern
#endif
#endif
#endif

#import "NSString+Tools.h"
#import "ShortCutMacro.h"
#import "SZFoundationHeader.h"

FOUNDATION_EXPORT double SZFoundationVersionNumber;
FOUNDATION_EXPORT const unsigned char SZFoundationVersionString[];

