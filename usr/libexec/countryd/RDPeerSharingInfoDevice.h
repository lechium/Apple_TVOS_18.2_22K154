//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDate, NSString;

@interface RDPeerSharingInfoDevice : NSObject
{
    NSString *_sharedCountryCode;	// 8 = 0x8
    NSDate *_lastShareDate;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0020000000004330
- (void).cxx_destruct;	// IMP=0x00200000000045bb
@property(retain) NSDate *lastShareDate; // @synthesize lastShareDate=_lastShareDate;
@property(retain) NSString *sharedCountryCode; // @synthesize sharedCountryCode=_sharedCountryCode;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00100000000044c7
- (id)initWithCoder:(id)arg1;	// IMP=0x00100000000043d1
- (id)initWithCountryCode:(id)arg1 andDate:(id)arg2;	// IMP=0x0010000000004338
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x001000000000429b

@end

