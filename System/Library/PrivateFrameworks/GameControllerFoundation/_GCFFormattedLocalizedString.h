//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "GCFLocalizedString.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface _GCFFormattedLocalizedString : GCFLocalizedString
{
    GCFLocalizedString *_format;	// 8 = 0x8
    GCFLocalizedString *_arg;	// 16 = 0x10
    NSString *__realizedString;	// 24 = 0x18
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0060000000020bf6
- (id)_realizedString;	// IMP=0x0000000000020eab
- (id)table;	// IMP=0x0000000000020e8e
- (id)bundle;	// IMP=0x0000000000020e71
- (id)key;	// IMP=0x0000000000020e60
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000020db8
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000020cd1
- (Class)classForCoder;	// IMP=0x0000000000020cc0
- (void)dealloc;	// IMP=0x0000000000020c5a
- (id)initWithFormat:(id)arg1 arg:(id)arg2;	// IMP=0x0000000000020bfe

@end

