//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface ASCLockupFeatureSafariExtension : NSObject
{
    NSString *_contentProviderTeamID;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0010000000023d46
- (void).cxx_destruct;	// IMP=0x000000000002408b
@property(readonly, copy, nonatomic) NSString *contentProviderTeamID; // @synthesize contentProviderTeamID=_contentProviderTeamID;
@property(readonly, copy) NSString *description;
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000023ed1
@property(readonly) unsigned long long hash;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000023e4b
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000023ddb
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000023d4e
- (id)initWithContentProviderTeamID:(id)arg1;	// IMP=0x0000000000023cd3

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly) Class superclass;

@end

