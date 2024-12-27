//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface InAppBindingEligibilityRequest : NSObject
{
    NSString *_pinningID;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0020000000083239
- (void).cxx_destruct;	// IMP=0x0020000000083348
- (id);	// IMP=0x001000000008333e
- (id)initWithCoder:(id)arg1;	// IMP=0x00100000000832b1
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0010000000083241
- (id)initWithPinningID:(id)arg1;	// IMP=0x00100000000831ce

// Remaining properties
@property(readonly, nonatomic) NSString *pinningID; // @synthesize pinningID=_pinningID;

@end

