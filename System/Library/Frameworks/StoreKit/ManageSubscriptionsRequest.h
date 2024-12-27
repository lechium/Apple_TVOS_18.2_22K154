//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface ManageSubscriptionsRequest : NSObject
{
    NSString *_familyID;	// 8 = 0x8
    NSString *_sceneID;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0010000000005236
- (void).cxx_destruct;	// IMP=0x00000000000053d3
@property(retain, nonatomic) NSString *sceneID; // @synthesize sceneID=_sceneID;
@property(readonly, nonatomic) NSString *familyID; // @synthesize familyID=_familyID;
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000052ec
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000000523e
- (id)initWithFamilyID:(id)arg1 sceneID:(id)arg2;	// IMP=0x000000000000519d
- (id)initWithFamilyID:(id)arg1;	// IMP=0x0000000000005189
- (id)init;	// IMP=0x0000000000005173

@end

