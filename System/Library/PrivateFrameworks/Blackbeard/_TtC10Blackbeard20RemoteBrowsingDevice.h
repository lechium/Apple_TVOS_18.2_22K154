//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, NSString;

__attribute__((visibility("hidden")))
@interface _TtC10Blackbeard20RemoteBrowsingDevice : NSObject
{
    MISSING_TYPE *participant;	// 103 = 0x67
}

- (void).cxx_destruct;	// IMP=0x00000000000dfa40
- (id)init;	// IMP=0x00000000000df9e0
@property(nonatomic, readonly) long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000df910
@property(nonatomic, readonly) _Bool isMine;
@property(nonatomic, readonly) unsigned int deviceType;
@property(nonatomic, readonly) NSString *accountIdentifier;
@property(nonatomic, readonly) NSString *identifier;
@property(nonatomic, readonly) NSString *model;
@property(nonatomic, readonly) NSString *name;

@end

