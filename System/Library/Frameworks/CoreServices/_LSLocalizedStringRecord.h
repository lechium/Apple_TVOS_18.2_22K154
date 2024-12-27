//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "LSRecord.h"

@class NSArray, NSDictionary, NSString;

__attribute__((visibility("hidden")))
@interface _LSLocalizedStringRecord : LSRecord
{
}

+ (id)_propertyClasses;	// IMP=0x00600000000f85f4
+ (_Bool)supportsSecureCoding;	// IMP=0x00600000000f85ec
+ (id)sanitizeString:(id)arg1;	// IMP=0x00600000000f75e4
- (void)_detachFromContext:(struct LSContext *)arg1 tableID:(unsigned int)arg2 unitID:(unsigned int)arg3 unitBytes:(const void *)arg4;	// IMP=0x00000000000f8601
- (id)debugDescription;	// IMP=0x00000000000f854d
- (id)description;	// IMP=0x00000000000f853b
@property(readonly) NSString *defaultStringValue;
@property(readonly) NSDictionary *allStringValues;
- (void)_LSRecord_resolve__missingBundleLocs;	// IMP=0x00000000000f811e
@property(readonly) NSArray *_missingBundleLocs;
- (id)_missingBundleLocsWithContext:(struct LSContext *)arg1 tableID:(unsigned int)arg2 unitID:(unsigned int)arg3 unitBytes:(const struct LocalizedString *)arg4;	// IMP=0x00000000000f7ec9
- (void)_LSRecord_resolve__allUnsanitizedStringValues;	// IMP=0x00000000000f7eae
@property(readonly) NSDictionary *_allUnsanitizedStringValues;
- (id)_allUnsanitizedStringValuesWithContext:(struct LSContext *)arg1 tableID:(unsigned int)arg2 unitID:(unsigned int)arg3 unitBytes:(const struct LocalizedString *)arg4;	// IMP=0x00000000000f7e86
- (id)stringValueWithPreferredLocalizations:(id)arg1;	// IMP=0x00000000000f7704
@property(readonly) NSString *stringValue;
- (id)_initWithContext:(struct LSContext *)arg1 unitID:(unsigned int)arg2;	// IMP=0x00000000000f7665

@end

