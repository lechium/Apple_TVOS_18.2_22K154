//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface _CFPrefsOversizedPlistDescription : NSObject
{
    struct __CFDictionary *existingValues;	// 8 = 0x8
    struct __CFDictionary *newValues;	// 16 = 0x10
}

- (void)dealloc;	// IMP=0x00000000001ac12c
- (id)description;	// IMP=0x00000000001ac11d
- (id)redactedDescription;	// IMP=0x00000000001ac10b
- (id)_descriptionWithKeyRedaction:(_Bool)arg1;	// IMP=0x00000000001ac056
- (id)_descriptionOfDictionary:(struct __CFDictionary *)arg1 withKeyRedaction:(_Bool)arg2;	// IMP=0x00000000001ab8bb

@end

