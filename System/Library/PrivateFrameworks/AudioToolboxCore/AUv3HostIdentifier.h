//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface AUv3HostIdentifier : NSObject
{
    NSString *_name;	// 8 = 0x8
    long long _version;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00100000001948db
- (void).cxx_destruct;	// IMP=0x00000000001948cb
@property(nonatomic) long long version; // @synthesize version=_version;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
- (void)dealloc;	// IMP=0x000000000019486d
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000019475b
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000001946ee

@end

