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

#import "EXTKeyPathCoding.h"
#import "EXTRuntimeExtensions.h"
#import "EXTScope.h"
#import "metamacros.h"
#import "Mantle.h"
#import "MTLJSONAdapter.h"
#import "MTLModel+NSCoding.h"
#import "MTLModel.h"
#import "MTLReflection.h"
#import "MTLTransformerErrorHandling.h"
#import "MTLValueTransformer.h"
#import "NSArray+MTLManipulationAdditions.h"
#import "NSDictionary+MTLJSONKeyPath.h"
#import "NSDictionary+MTLManipulationAdditions.h"
#import "NSDictionary+MTLMappingAdditions.h"
#import "NSError+MTLModelException.h"
#import "NSObject+MTLComparisonAdditions.h"
#import "NSValueTransformer+MTLInversionAdditions.h"
#import "NSValueTransformer+MTLPredefinedTransformerAdditions.h"

FOUNDATION_EXPORT double KooMantleVersionNumber;
FOUNDATION_EXPORT const unsigned char KooMantleVersionString[];

