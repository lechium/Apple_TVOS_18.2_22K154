//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString;

__attribute__((visibility("hidden")))
@interface CADisplayPersistedPreferredMode : NSObject
{
    NSString *_uuid;	// 8 = 0x8
    NSDictionary *_mode;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00100000002aabf2
@property(copy, nonatomic) NSDictionary *mode; // @synthesize mode=_mode;
@property(copy, nonatomic) NSString *uuid; // @synthesize uuid=_uuid;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000002aab6f
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000002aaa8c
- (id)description;	// IMP=0x00000000002aa9fa
- (void)dealloc;	// IMP=0x00000000002aa98d

@end

