//
//  Mantle.h
//  Mantle
//
//  Created by Justin Spahr-Summers on 2012-09-04.
//  Copyright (c) 2012 GitHub. All rights reserved.
//

#import <Foundation/Foundation.h>

//! Project version number for Mantle.
FOUNDATION_EXPORT double MantleVersionNumber;

//! Project version string for Mantle.
FOUNDATION_EXPORT const unsigned char MantleVersionString[];

#import <KooMantle/MTLJSONAdapter.h>
#import <KooMantle/MTLModel.h>
#import <KooMantle/MTLModel+NSCoding.h>
#import <KooMantle/MTLValueTransformer.h>
#import <KooMantle/MTLTransformerErrorHandling.h>
#import <KooMantle/NSArray+MTLManipulationAdditions.h>
#import <KooMantle/NSDictionary+MTLManipulationAdditions.h>
#import <KooMantle/NSDictionary+MTLMappingAdditions.h>
#import <KooMantle/NSObject+MTLComparisonAdditions.h>
#import <KooMantle/NSValueTransformer+MTLInversionAdditions.h>
#import <KooMantle/NSValueTransformer+MTLPredefinedTransformerAdditions.h>
