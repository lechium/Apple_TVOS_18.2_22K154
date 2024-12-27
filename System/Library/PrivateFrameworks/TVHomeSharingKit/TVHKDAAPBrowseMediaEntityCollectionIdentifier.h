//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "TVHKMediaEntityIdentifier.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface TVHKDAAPBrowseMediaEntityCollectionIdentifier : TVHKMediaEntityIdentifier
{
    NSString *_browseTitle;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00100000000a53e7
- (void).cxx_destruct;	// IMP=0x00000000000a5897
@property(copy, nonatomic) NSString *browseTitle; // @synthesize browseTitle=_browseTitle;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;	// IMP=0x00000000000a57eb
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000a5622
- (unsigned long long)hash;	// IMP=0x00000000000a5551
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000a54b8
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000a53ef
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000a53dc
- (id)initWithBrowseTitle:(id)arg1;	// IMP=0x00000000000a5360
- (id)initWithProtocol:(unsigned long long)arg1;	// IMP=0x00000000000a52f1

@end

