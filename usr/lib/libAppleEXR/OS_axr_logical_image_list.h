//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <System/OS_object.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface OS_axr_logical_image_list : OS_object
{
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00100000000acf29
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000ad081
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000acf31
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000aceca
- (void)dealloc;	// IMP=0x00000000000ace8b
@property(readonly, copy) NSString *description;
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C


// Remaining properties
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

