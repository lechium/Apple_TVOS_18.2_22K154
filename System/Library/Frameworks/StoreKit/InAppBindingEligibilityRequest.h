//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface InAppBindingEligibilityRequest : NSObject
{
    NSString *_pinningID;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00100000000181f8
- (void).cxx_destruct;	// IMP=0x0000000000018307
@property(readonly, nonatomic) NSString *pinningID; // @synthesize pinningID=_pinningID;
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000018270
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000018200
- (id)initWithPinningID:(id)arg1;	// IMP=0x000000000001818d

@end

